#include "main.h"
/**
* _isalpha - return 1 if char is lowercase or uppercase, 0 if not
* @c: is a variable of type char to be evaluate
* Return: always 0
*/
int _isalpha(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
