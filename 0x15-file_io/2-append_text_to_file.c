#include "main.h"
/**
  * _strlen - length of the string
  * @s: input character
  * Return: length of a string
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
* append_text_to_file - appends text at the end of a file.
* @filename: file to b appended.
* @text_content: info to append into the file.
* Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t nletters;
	int file;

	if (!filename)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
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
