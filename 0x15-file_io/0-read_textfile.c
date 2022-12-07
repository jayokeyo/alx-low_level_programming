/**
 * read_textfile - reads the content of a tex file and prints it on stdout
 * @filename: file to be read
 * @letters: number of characters to be read
 * Return: number of characters successfully read
 */
size_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf[letters];

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	read(fd, buf, letters);
	write(1, buf, letters);
	close(fd);
	return (letters);
}
