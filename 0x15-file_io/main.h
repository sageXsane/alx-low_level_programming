#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int _putchar(char b);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void file_error(char *filename, int element);
void close_error(int fd);
ssize_t read_textfile(const char *filename, size_t letters);
#endif
