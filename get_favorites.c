/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE ** STRICTLY ADHERED TO THE TENURES OF THE
 * ** OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_favorites(char ****, int *);

// allocate space for favorites array & compute addresses/populate array elements
void get_favorites(char **quotes, int q_count, char ****favorites_ptr, int *f_count_ptr)
{
printf("\nOf those %d quotes, how many do you plan to put on your favorites list? ", q_count);
scanf(" %d", f_count_ptr);
//allocate space in favorites array for pointers
    *favorites_ptr = (char ***)malloc(*f_count_ptr * sizeof(char **));
    if (*favorites_ptr != NULL)
{
printf("Enter the number next to each quote you want on your favorites list: ");
int i, x;
//assign favorites array to pointers to the quote
for (i = 0; i < *f_count_ptr; i++)
    {
        scanf(" %d", &x);
           *(*favorites_ptr +i) = &quotes[x -1 ];
}
//print
print_favorites(favorites_ptr, f_count_ptr);
}
else printf("could not allocate memory");
}
