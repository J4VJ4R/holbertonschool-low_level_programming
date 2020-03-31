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
    /**
     * fd es el file descriptor, un valor entero que devuelve la función
     * open y que es el indicador del fichero
     */
    int fd;
    char *buffer;
    ssize_t numberOfBytesRead, numberOfBytesWrite;
    /**
     * validación para saber si filename tiene datos
     */
    if (filename == NULL)
		return (0);
    /**
     * @filename: es el nombre del archivo entrante
     * @O_RDWR: modo de acceso de escritura y lectura
     */
    fd = open(filename, O_RDWR);
    /**
     * si la función open produce algún error, ej: el archivo no existe, no se puede abrir
     * devuelve -1
     */
    if(fd == -1)
        return (0);
    /**
     * si no hay errores entramos a la función read que ademas lee el número
     * de caracteres que se han leido
     * @fd: descriptor del fichero
     * @buffer: se guardan los caracteres leidos
     * @letters: número de bytes máximo para leer
     */
    buffer = malloc(sizeof(char) * letters);
    /**
     * validamos si tiene espacio definido
     */
    if(buffer == NULL)
    {
        free(buffer);
        return (0);
    }
    numberOfBytesRead = read(fd, buffer, letters);
    /**
     * comprovamos que no haya error en numberOfBytesRead
     */   
    if(numberOfBytesRead == -1)
        return (0);
    /**
     * función write para escribir en standar aoutput el contenido del archivo
     */
    numberOfBytesWrite = write(STDOUT_FILENO, buffer, numberOfBytesRead);
    if(numberOfBytesWrite == -1)
        return (0);
    free(buffer);
    close(fd);
    return (numberOfBytesWrite);

}
