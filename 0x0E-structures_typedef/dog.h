#ifndef DOG_H
#define DOG_H
/**
 * struct dog - A Type Describing a dog.
 * @name: Name of the dog
 * @age: The age of the Dog
 * @owner: Name of the owner
**/
struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
