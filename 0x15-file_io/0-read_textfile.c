#include "holberton.h"
/**
 * read_textfile - a function that read a text file
 * @filename: name of a file
 * @letters: count of the number of characters
 * Return: count full of number of characeters
 * fuente de ayuda: https://www.youtube.com/watch?v=MtqFZRXaeM0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buffer;
int numberOfBytesRead, numberOfBytesWrite;

fd = open(filename, O_RDWR);
buffer = malloc(sizeof(char) * letters);
numberOfBytesRead = read(fd, buffer, letters);
numberOfBytesWrite = write(STDOUT_FILENO, buffer, numberOfBytesRead);
if (fd == -1 ||
numberOfBytesRead == -1 ||
numberOfBytesWrite == -1 ||
numberOfBytesWrite != numberOfBytesRead)
{
free(buffer);
return (0);
}
close(fd);
return (numberOfBytesWrite);
}
