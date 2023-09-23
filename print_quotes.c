/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE ** STRICTLY ADHERED TO THE TENURES OF THE
 * ** OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
 * */

#include <stdio.h>

//print out quotes from array
void print_quotes(char **quotes, int q_count)
{
printf("\nYou’ve entered: \n");
int i;
       for (i=0;i < q_count;i++)
{
printf("%d: %s\n", i+1, *(quotes +i));
}
}
