#ifndef dog_h
#define dog_h
/**
 * struct dog - a dog struct
 *@name: the name
 *@age: the age
 *@owner: the owner
 *
 *Description: info of the dog
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
