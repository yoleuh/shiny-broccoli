/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE ** STRICTLY ADHERED TO THE TENURES OF THE
 * ** OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//closes output file
void close (FILE *output_file, char *filename)
{
if(fclose(output_file) != 0) {
printf("fclose failed\n");
exit(EXIT_FAILURE);
}
printf("Your quotes list and favorites have been saved to the file %s \n", filename);}
