#include "main.h"
/**
 *_strspn - lenght of the initial segment composed of bytes
 *from accept
 *@s: the string
 *@accept: substring of acceptance
 *Return: count (length)
 *
 */
unsigned int _strspn(char *s, char *accept)
{
        int i;
        unsigned int count = 0;

        while (*s)
        {
                for (i = 0; accept[i] != '\0'; i++)
                {
                        if (*s == accept[i])
                        {
                                count++;
                                break;
                        }
                }
                s++;
        }
        return (count);
