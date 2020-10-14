#include "holberton.h"
/**
 *argstostr - concatenates all the arguments of the program
 *@ac: arguments count
 *@av: argument values
 *Return: pointer to a new string
 *NULL if it fails
 *NULL if ac == 0 or av == NULL
 */
char *argstostr(int ac, char **av)
{
	int len;
	int i;
	int x;
	int j;
	char *heap_array;

	if (ac == 0 || av == NULL)
		return (NULL);
	len = length(ac, av);
	heap_array = malloc(len + 1);

	for (x = 0, i = 0; i < ac; i++, x++)
	{
		for (j = 0; av[i][j] != '\0'; j++, x++)
		{
			heap_array[x] = av[i][j];
		}
		heap_array[x] = '\n';
	}
	heap_array[x] = '\0';
	return (heap_array);
}
/**
 * length -  Calcualtes the length
 * @ac: Counter for arguments
 * @av: Array of values
 * Return: A the total amount of characters on the string
 */
int length(int ac, char **av)
{
	int i;
	int j;
	int counter;

	counter = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			counter++;
		}
	}
	return (counter + ac);
}
