#include "main.h"
/**
 * *rot13 -  encodes a string using rot13
 * @str: message to encode
 * Return: message encode
 */
char *rot13(char *str)
{
	int i, j;
	char temp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char temp2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; temp[j] != '\0'; j++)
		{
			if (str[i] == temp[j])
			{
				str[i] = temp2[j];
				break;
			}
		}
	}
	return (str);
}
