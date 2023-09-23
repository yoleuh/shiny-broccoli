/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE ** STRICTLY ADHERED TO THE TENURES OF THE
 * ** OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_quotes(char **, int );

// allocate space for quotes array and all quote strings and populate both
void get_quotes(char ***quotes_ptr, int *q_count_ptr)
{
int i ;
    printf("How many quotes do you plan to enter? ");
    scanf(" %d", q_count_ptr);
printf("Enter the %d quotes one to a line: ", *q_count_ptr);
//allocate space in the quotes array for char pointers 
    *quotes_ptr = (char **)malloc(*q_count_ptr * sizeof(char *));
    if (*quotes_ptr != NULL)
    {
       for (i=0;i < *q_count_ptr;i++)
        {
//allocating space for pointer to hold the string
            char *string;
            string = (char *)malloc(301 * sizeof(char));
    if (string != NULL)
{
//assign quotes array to the pointer to the quote
            scanf(" %[^\n]", string);
            *(*quotes_ptr +i) = string;
}else printf("could not allocate memory");
        }
//print
print_quotes(*quotes_ptr, *q_count_ptr);
}
    else printf("could not allocate memory");
}
