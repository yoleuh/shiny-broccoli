/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE ** STRICTLY ADHERED TO THE TENURES OF THE
 * ** OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void out(char **quotes, int q_count, char ***favorites, int f_count, FILE *output_file, char *filename);


// find out if we need to save file/do so if needed
void save_data(char **quotes, int q_count, char ***favorites, int f_count)
{
int c;
printf("Do you want to save them (1=yes, 2=no): ");
scanf(" %d", &c);
if (c==1)
{
//create output
FILE *output_file;
char filename[256];
printf("What file name do you want to use? ");
scanf(" %s", filename);
output_file = fopen(filename, "w");
if (output_file == NULL){
printf("Can't open file \n");
exit(EXIT_FAILURE);
}
//output to file
out(quotes, q_count, favorites, f_count, output_file, filename);
}
}
