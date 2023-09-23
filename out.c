/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE ** STRICTLY ADHERED TO THE TENURES OF THE
 * ** OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void close (FILE *output_file, char *filename);

//outputs quotes and favorites to users file
void out(char **quotes, int q_count, char ***favorites, int f_count, FILE *output_file, char *filename)
{
fprintf(output_file, "Inspiring Quotes: \n");
int i;
       for (i=0;i < q_count;i++)
{
fprintf(output_file, "%d: %s\n", i+1, *(quotes +i));
}
fprintf(output_file, "\nMy Favorites are: \n");
int e;
       for (e=0;e < f_count;e++)
{
fprintf(output_file, "%d: %s\n", e+1, **(favorites+e));
}
//close output
close(output_file, filename);
}


