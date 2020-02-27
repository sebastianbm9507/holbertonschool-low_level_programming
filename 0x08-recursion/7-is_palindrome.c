#include "holberton.h"

int check(int i, int j, char *s);
int _strlen_recursion(char *s);
/**
 * is_palindrome - function that returns 1 if palindrome.
 * @s:string
 * Return:  1 = palindrome , 0 = no palindrome
 */
int is_palindrome(char *s)
{
	int i = 0;
	int result;
	int j = _strlen_recursion(s);

	if (s[i] == 0)
	{
		result = 1;
	}
	else
	{
		result = check(i, j, s);
	}
	return (result);
}
/**
 * check - function to check if are equal letter
 * @s:string
 * @i:integer
 * @j:integer
 * Return:  1 = palindrome , 0 = no palindrome
 */

int check(int i, int j, char *s)
{
	int res;

	if (s[i] == s[j - 1] && i < j)
	{
		res =  1 * (check((i + 1), (j - 1), s));
	}
	else if (j <= i)
	{
		res = 1;
	}
	else
	{
		res = 0;
	}
	return (res);
}

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: string
 * Return: the lenght of the array
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
