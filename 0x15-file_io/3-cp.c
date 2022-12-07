#include "main.h"
#include <stdio.h>
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
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_CREAT | O_TRUNC | O_RDWR, 0664);
	if (fd2 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	rd = read(fd1, buf, 1024);
	if (rd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	while (rd != 0)
	{
		wr = write(fd2, buf, rd);
		if (wr == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		rd = read(fd1, buf, 1024);
		if (rd == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
	}
	cl1 = close(fd1);
	cl2 = close(fd2);
	if (cl1 == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (cl2 == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}
