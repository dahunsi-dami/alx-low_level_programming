#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - new type struct dog with 3 elements.
 * @name: The first member and name of the dog.
 * @age: The 2nd member and age of the dog.
 * @owner: The 3rd member and ownder of the dog.
 *
 * Description: This struct type is a record of dogs
 * with items like the name of the dog, its age, and
 * its owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog.
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
