#include <stdlib.h>

<<<<<<< HEAD
void *malloc_checked(unsigned int b)
{
    void *p;

    p = malloc(b);
    if (p == NULL)
    {
        exit(98);
    }
    return p;
=======
void *malloc_checked(unsigned int b){
	void *p;
	p = malloc(b);
	if (p == NULL){
		exit(98);
	}
	return (p);
>>>>>>> 29706f0b0b6fe1ee565ded602081d9317a912340
}
