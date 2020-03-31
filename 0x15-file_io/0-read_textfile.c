#include "holberton.h"

/*where letters is the number of letters it should read and print*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, chars;
	char *buf;
	ssize_t bytes;

	/*if filename is NULL return 0.*/
	if (filename == NULL)
		return (0);
	/*allocating space in memory*/
	buf = malloc((sizeof(letters) + 1));
	if (buf == NULL)
		return (0);
	buf[(sizeof(letters) + 1)] = '\0';
	/*opening the file READ ONLY*/
	fd = open(filename, O_RDONLY);
	/*if the file can not be opened or read, return 0*/
	if (fd == -1)
		return (0);
	/*read the file*/
	bytes = read(fd, buf, letters);
	close(fd);
	chars = write(2, buf, bytes);
	free(buf);
	/*if write fails or does not write the expected amount of bytes, return 0.*/
	if (chars == -1)
	{
		return (0);
	}
	/*returns the actual number of letters it could read and print.*/
	return (chars);
}
