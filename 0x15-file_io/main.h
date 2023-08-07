#ifndef MAIN_H
#define MAIN_H
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>

void error_98(int fd_to, char *buffer, char *argv);
void error_99(int fd_to, char *buffer, char *argv);
void error_100(int fd_t0, char *buffer);
int append_text_to_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);

#endif
