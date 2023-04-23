#include "mystr.h"

int my_strlen(const char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

int my_strcmp(const char *str1, const char *str2)
{
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            return str1[i] - str2[i];
        }
        i++;
    }
    return str1[i] - str2[i];
}

char *my_strcpy(char *dest, const char *src)
{
    int i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

char *my_strdup(const char *str)
{
    int len = my_strlen(str);
    char *new_str = malloc(len + 1);
    for (int i = 0; i < len; i++)
    {
        new_str[i] = str[i];
    }
    new_str[len] = '\0';
    return new_str;
}