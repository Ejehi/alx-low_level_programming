#ifndef __HEADER__
#define __HEADER__

/**
 * struct dog - Dog properties
 *
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Description: The properties of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for dog struct
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
