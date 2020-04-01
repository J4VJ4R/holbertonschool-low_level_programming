#include "holberton.h"
/**
 * create_file - a function that creates a file.
 * @filename: a pointer to name of file
 * @text_content: content of the text enter
 * Return: an integer
 */
int create_file(const char *filename, char *text_content)
{
int fp, readStatus, index;

if (filename == NULL)
return (-1);
fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
if (fp == -1)
return (-1);
if (text_content)
{
for (index = 0; text_content[index] != '\0'; index++)
;
readStatus = write(fp, text_content, index);
if (readStatus == -1)
return (-1);
}
close(fp);
return (1);
}
