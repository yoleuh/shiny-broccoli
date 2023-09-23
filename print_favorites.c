/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE ** STRICTLY ADHERED TO THE TENURES OF THE
 * ** OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
 * */

//print out favorites from array
#include <stdio.h>

void print_favorites(char ****favorites_ptr, int *f_count_ptr)
{
printf("\nThe quotes on your favorites list are: \n");
int e;
       for (e=0;e < *f_count_ptr;e++)
{
printf("%d: %s\n", e+1, **(*favorites_ptr+e));
}}
