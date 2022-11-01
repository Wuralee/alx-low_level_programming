#include "main.h"
#include<stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - allocates 1024 bytes for a buffer
 * @file: the name of the file buffer is storing chars for
 * Return: a pointer to the newly allocated buffer
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprint(STDERR_FILENO,
				"Error: can't write to %s\n", file);
		exit(99);
	}

	return (buffer
