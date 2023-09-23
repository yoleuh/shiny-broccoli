/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE ** STRICTLY ADHERED TO THE TENURES OF THE
 * ** OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void get_quotes(char ***, int *);
void get_favorites(char **, int ,char ****, int *);
void save_data(char **, int ,char ***, int );
void free_dmem(char **, int ,char ***);
void print_quotes(char **, int );
void print_favorites(char ****, int *);
void save_data(char **, int , char ***, int );
void out(char **, int , char ***, int , FILE *, char *);
void close (FILE *, char *);

int main(void)
{
    int q_count = 0;
    int f_count = 0;
    char **quotes = NULL;
    char ***favorites = NULL;

    // allocate space for quotes array and all quote strings and populate both
    get_quotes(&quotes, &q_count);

    // allocate space for favorites array & compute addresses/populate array elements
    get_favorites(quotes, q_count, &favorites, &f_count);

    // find out if we need to save file/do so if needed
    save_data(quotes, q_count, favorites, f_count);

    // free all dynamical memory
    free_dmem(quotes, q_count, favorites);
    return (0);
}
