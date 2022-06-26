#include <stdlib.h>
<<<<<<< HEAD
#include "main.h"

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: char to initialize the array c
 *
 * Return: pointer to the array (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	while (i < size)
	{
		*(p + i) = c;
		i++;
	}

	*(p + i) = '\0';

	return (p);
}
=======

#include "main.h"



/**
 *
 *  * *create_array - creates an array of chars,
 *
 *   * and initializes it with a specific char
 *
 *    * @size: size of the array to create
 *
 *     * @c: char to initialize the array c
 *
 *      *
 *
 *       * Return: pointer to the array (Success), NULL (Error)
 *
 *        */

char *create_array(unsigned int size, char c)

{

		char *p;

			unsigned int i = 0;



				if (size == 0)

							return (NULL);



					p = (char *) malloc(sizeof(char) * size);



						if (p == NULL)

									return (0);



							while (i < size)

									{

												*(p + i) = c;

														i++;

															}



								*(p + i) = '\0';



									return (p);

}

>>>>>>> 7d18d8eca439eb75f1778b1b4d4040c2fdfa1a44
