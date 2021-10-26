#include "main.h"
/**
* _islower - return 1 if char is lowercase, 0 if not
* @c: character to check
* Return: always 0
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
