/**
 * 100-strtow.c
 * Description: Taking a string input, this program will ultimately split the string up such that
 * each word in the given string gets its own line by allocating the required amount of memory for each word
 * In the case where this is not possible, the memory that is already allocated gets freed up
 */

#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * mem_clear - Frees memory to ensure no memory leak happens
 * @s: String input for memory deallocation
 * Return: Nothing
 */
void mem_clear(char **s)
{
}

/**
 * word_count - Counts number of indexes in a string
 * @str: String being counted
 * Return: Number of indexes
 */
int word_count(char *str)
{
}

/**
 * strtow - "Master function": Splits a string such that each word gets its own line
 * @str: String input
 * Return: The pointer to the very first index of the list of words
 */
char **strtow(char *str)
{
	int i, j = 0;
	int input_length, word_size, array_row = 0, array_column;
	char **new_str = NULL;

	}
