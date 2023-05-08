#ifndef MAIN_H
#define MAIN_H

/*
 * Description: header file which contains prototypes
 */

#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void validator(unsigned char *e_ident);
void num_print(unsigned char *e_ident);
void elf_data(unsigned char *e_ident);
void version_print(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void type_print(unsigned int e_type, unsigned char *e_ident);
void entry_print(unsigned int e_entry, unsigned char *e_ident);
unsigned int big_endian(unsigned int n);
void elf_class(unsigned char *e_ident);
#endif
