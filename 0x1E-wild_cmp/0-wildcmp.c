#include "holberton.h"
/**
 * wildcmp - Compares two strings.
 *   Args:
 *   @s1:    char* to string 1.
 *   @s2:    char* to string 2.
 *
 *  Return:  returns 1 if the strings can be considered identical,
 *           otherwise return 0
 */

int wildcmp(char *s1, char *s2)
{
	if (!*s1 && *s2 == '*')
		return (wildcmp(s1, s2 + 1));
	else if (!*s1 && *s2 != '*')
		return (!*s2);
	else if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else
		return (0);
}
