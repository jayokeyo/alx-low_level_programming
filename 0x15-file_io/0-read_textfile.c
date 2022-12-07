#include <unistd.h>
/**
 * read_textfile - reads the content of a tex file and prints it on stdout
 * @filename: file to be read
 * @letters: number of characters to be read
 * Return: number of characters successfully read
 */
size_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *str;

	if (filename == NULL)
		return (0);
	file = open(filename, 0444);
	if (file == -1)
		return (0);
	str = read(file, letters);
	write(1, str, letters);
	return (letters);
}
