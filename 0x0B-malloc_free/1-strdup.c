#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *_strdup(char *str)
{
	char *my_array;
	int i, len;

	my_array = malloc(sizeof(str));

	i = len = 0;
	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	if (my_array == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		my_array[i] = str[i];
		i++;
	}

	return (my_array);
}
