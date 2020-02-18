#include"holberton.h"
/**
 * _strlen - swap a value 
 *
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
    int counter = 0;  
            while (s[counter] != '\0') 
            {
                counter++;
            }
        return counter;
}

