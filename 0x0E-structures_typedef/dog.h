#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure that contain infomation about dog
 * @name: The first member.
 * @age: The second member.
 * @owner: The third member.
 *
 * Description: More detail info about dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
