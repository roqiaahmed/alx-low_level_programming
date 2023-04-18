#include "dog.h"
#include <stdlib.h>
/**
 * num - number of string
 *@src: the string
 *
 * Return: number of string
 */
int num(const char *src)
{
int n;
n = 0;
while (src[n] != '\0')
n++;
return (n);
}
/**
 * _strcpy - copy to anther string
 *@dest: the string
 *@src: the string
 * Return: copy string
 */
char *_strcpy( char *dest, const char *src )
{
int i;
for (i = 0; i < num(src); i++)
dest[i] = src[i];
dest[i] = '\0';
return (dest);
}
/**
 * new_dog - creat a new dog
 *@name: the name
 *@age: the age
 *@owner: the owner
 *
 * Return: NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *my_dog;
my_dog = malloc(sizeof(dog_t));
if (my_dog == NULL)
return (NULL);
my_dog->name = malloc(sizeof(char) * (num(name) + 1));
if (my_dog->name == NULL)
{
free(my_dog);
return (NULL);
}
my_dog->owner = malloc(sizeof(char) * (num(owner) + 1));
if (my_dog->owner == NULL)
{
free(my_dog);
free(my_dog->name);
return (NULL);
}
_strcpy(my_dog->name, name);
my_dog->age = age;
_strcpy(my_dog->owner, owner);
return (my_dog);
}
