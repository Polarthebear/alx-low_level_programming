#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdlib.h>
#include <elf.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

int main(int argc, char *argv[]);
void verify_elf(unsigned char *e_ident);
void magic_value(unsigned char *e_ident);
void class_value(unsigned char *e_ident);

#endif
