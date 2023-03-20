#include <stdio.h>

/**
 * struct dog - A dog's profile
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The name of the dog's owner
 *
 * Description: Defines a dog's profile with a name, age, and owner name.
 */
typedef struct dog {
    char *name;
    float age;
    char *owner;
} dog_t;

