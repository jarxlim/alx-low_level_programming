#include "main.h"
/*
 * main - entry point
 * argc: integer representing the number of arguments passed to the program.
 * @argv: array of strings representing the command line arguments.
 * Return: integer value of 0 if the program runs successfully.
 */
int main(int argc, int argv[])
{
	Elf64_Ehdr *header;
	int file_desc, read_count, char_count;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "cp file_from file_to\n"), exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header != NULL)
	{
		dprintf(STDERR_FILENO, "Malloc error\n"), exit(98);
	}
	file_desc = open(argv[1], O_RDONLY);
	if (file_desc < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	read_count = read(file_desc, header, sizeof(Elf64_Ehdr));
	if (read_count < 0)
	{
		free(header);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	validator(header->e_ident);
	num_print(header->e_ident);
	elf_class(header->e_ident);
	elf_data(header->e_ident);
	version_print(header->e_ident);
	print_osabi(header->e_ident);
	printf("  ABI Version:                       ");
	printf("%i\n", header->e_ident[EI_ABIVERSION]);
	type_print(header->e_type, header->e_ident);
	entry_print(header->e_entry, header->e_ident);
	free(header);
	char_count = close(file_desc);
	if (char_count)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd\n"), exit(98);
	}
	return (0);
}

/**
 * validator - validates elf file
 * @e_ident: char array
 */
void validator(unsigned char *e_ident)
{
	if (e_ident[1] == 'E' &&
		e_ident[2] == 'L' && e_ident[3] == 'F' && e_ident[0] == 0x7f)
	{
		printf("ELF Header:\n");
	}
	else
	{
		dprintf(STDERR_FILENO, "Error: Not valid ELF\n"), exit(98);
	}
}

/**
 * num_print - print the magic number of elf
 * @e_ident: char array
 */
void num_print(unsigned char *e_ident)
{
	register int index;

	printf("  Magic:   ");
	for (index = 0; index < EI_NIDENT - 1; index++)
		printf("%02x ", e_ident[index]);
	printf("%02x\n", e_ident[index]);
}

/**
 * elf_data - elf data printer
 * @e_ident: char array
 */
void elf_data(unsigned char *e_ident)
{
	printf("  Data:                              ");
	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("Unknown data format\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_DATA]);
	}
}

/**
 * version_print - prints thr verion of the elf
 * @e_ident: pointer to char array
 */
void version_print(unsigned char *e_ident)
{
	printf("  Version:                           ");
	if (e_ident[EI_VERSION] == EV_CURRENT)
		printf("%i (current)\n", EV_CURRENT);
	else
		printf("%i\n", e_ident[EI_VERSION]);
}

/**
 * print_osabi - print ELF's osabi
 * @e_ident: pointer to char array
 */
void print_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");
	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * type_print - print ELF type
 * @e_type: e_type address
 * @e_ident: char array
 */
void type_print(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type = e_type >> 8;

	printf("  Type:                              ");
	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (Unknown type)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", e_type);
	}
}

/**
 * entry_print - print ELF entry
 * @e_entry: e_entry address
 * @e_ident: char array
 */
void entry_print(unsigned int e_entry, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_entry = big_endian(e_entry);

	printf("  Entry point address:               ");
	printf("%#x\n", (unsigned int)e_entry);
}

/**
 * big_endian - converts small endian hexes to big hexes
 * @n: input
 * Return: output
 */
unsigned int big_endian(unsigned int n)
{
	return (((x >> 24) & 0x000000ff) |
		((x >> 8) & 0x0000ff00)  |
		((x << 8) & 0x00ff0000)  |
		((x << 24) & 0xff000000));
}
