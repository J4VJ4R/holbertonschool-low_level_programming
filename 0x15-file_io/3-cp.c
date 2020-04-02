#include "holberton.h"
/**
 *main - a function that cp a file to a file
 *@argv: argument
 * @argc: other argument
 *Return: an integer
 */
int main(int argv, char **argc)
{
	int fd1, fd2, r, w, rc1, rc2;
	char *file_from = argc[1];
	char *file_to = argc[2];
	char buffer[1024];

	if (argv != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd1 = open(file_from, O_RDONLY);
	fd2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	do {
		r = read(fd1, buffer, 1024);
		w = write(fd2, buffer, r);
	} while (r == 1024);
	if (fd1 == -1 || r == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_from), exit(98);
	if (fd2 == -1 || w == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to), exit(99);
	rc1 = close(fd1);
	rc2 = close(fd2);
	if (rc1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd1 %d\n", fd1), exit(100);
	if (rc2 == -1)
		dprintf(STDERR_FILENO, "Error Can't close fd2 %d\n", fd2), exit(100);
	return (0);
}
