#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a new type describing a dog
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 *
 * Description: This struct holds basic information about a dog, including
 * its name, age, and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */
