/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE ** STRICTLY ADHERED TO THE TENURES OF THE
 * ** OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// free all dynamical memory
void free_dmem(char **quotes, int q_count, char ***favorites)
{
if (quotes !=NULL)free(quotes);
quotes = NULL;

if (favorites !=NULL)free(favorites);
favorites = NULL;
}
