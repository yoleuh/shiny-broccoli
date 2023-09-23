void print_quotes(char **quotes, int q_count);
void print_favorites(char ****favorites, int *f_count);
void save_data(char **quotes, int q_count, char ***favorties, int f_count);
void out(char **quotes, int q_count, char ***favorites, int f_count, FILE *output_file char *filename);
void close (FILE *output_file, char *filename);
void free_dmem(char **, int ,char ***);
void get_favorites(char **quotes, int q_count, char ****favorites_ptr, int *f_count_ptr);
void get_quotes(char ***quotes_ptr, int *q_count_ptr);
