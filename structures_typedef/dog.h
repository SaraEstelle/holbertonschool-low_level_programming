#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure represent a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description : allow to storage informations about a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - new name for the type struct dog
 */
typedef struct dog dog_t;

#endif /*DOG_H */
