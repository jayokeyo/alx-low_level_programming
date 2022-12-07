#include "main.h"
#include <stdio.h>
/**
 * Read_Error - Handles read error
 * @f_name: filename 
 */
void Read_Error(char *f_name)
{
	dprintf(2, "Error: Can't read from file %s\n", f_name);
	exit(98);
}
/**
 * Write_Error - Handles write error
 * @f_name: filename
 */
void Write_Error(char *f_name)
{
	dprintf(2, "Error: Can't write to %s\n", f_name);
	exit(99);
}
/**
 * Arg_Error - Handles arguments error
 */
void Arg_Error(void)
{
	dprintf(2, "Usage: cp file_from file_to\n");
	exit(97);
}
/**
 * Close_Error - Handles file closing error
 * @fd: file descriptor
 */
void Close_Error(int fd)
{
	dprintf(2, "Error: Can't close fd %d\n", fd);
	exit(100);
}
/**
 * main - copies content of a file to another file
 * @argc: number of arguments
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, rd, wr, cl1, cl2;
	char buf[1024];

	if (argc != 3)
		Arg_Error();
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
		Read_Error(argv[1]);
	fd2 = open(argv[2], O_CREAT | O_TRUNC | O_RDWR, 0664);
	if (fd2 == -1)
		Write_Error(argv[2]);
	rd = read(fd1, buf, 1024);
	if (rd == -1)
		Read_Error(argv[1]);
	while (rd != 0)
	{
		wr = write(fd2, buf, rd);
		if (wr == -1)
			Write_Error(argv[2]);
		rd = read(fd1, buf, 1024);
		if (rd == -1)
			Read_Error(argv[1]);
	}
	cl1 = close(fd1);
	cl2 = close(fd2);
	if (cl1 == -1)
		Close_Error(fd1);
	if (cl2 == -1)
		Close_Error(fd2);
	return (0);
}
