#include "main.h"
/**
  * _strlen - length of the string
  * @s: input character
  * Return: length of a string computed on success
**/
int _strlen(char *s)
{
	int k = 0;

	while (s[k])
	{
		k++;
	}
	return (k);
}
/**
* create_file - check the code for Holberton School learners.
* @filename: file to be created.
* @text_content: info to be writen into the file.
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	ssize_t nletters;
	int file;

	if (!filename)
		return (1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		nletters = write(file, text_content, _strlen(text_content));
		if (nletters == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
