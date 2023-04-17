#ifndef dog_h
#define dog_h
/**
 * struct dog - check the code
 *
 * Return: info of dog
 */
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
