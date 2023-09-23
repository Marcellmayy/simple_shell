#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stddef.h>
#include <signal.h>
#include <limits.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include <errno.h>
#include <sys/stat.h>
#include <fcntl.h>

/*for read/write buffer */
#define MAX_INPUT_SIZE 1024
#define MAX_ARG_COUNT 128
#define MAX_ALIASES 1024
#define READ_BUF_SIZE 1024
#define BUFSIZE 1024

/* if using system getline() */
#define USE_GETLINE 
#define USE_STRTOK

/**
 * struct listr - singly linked list
 * @num: the number field
 * @str: a string
 * @next: points to the next node
 */
typedef struct listsr
{
	int num;
	char *str;
	struct listsr *next;
} list_t;

/**
 * struct info - contains psuedo-arguement to pass into a function, allowing uniform prototype for function pointer struct
 * @arg: a strong generated from getline containing arguement
 * @argv: an array of strings generated from arg
 * @path: a string path for the current command 
 * @argc: the arguement count
 * @line_count: the error count
 * @err_num: the error code for exit() 
 * @linecount_flag: if on count this line of input
 * @fname: the program filename
 * @env: linked list local copy of environ
 * @environ: custom modified copy of from LL env
 * @alias: the alias node
 * @env_changed: on if environ was changed 
 * @status: the return status of the last exce'd comment
 * @cmd_buff: address of pointer to cmd_buff, on if chaining
 * @cmd_buff_type: cmd_type ||, &&, ;
 * @readfd: the fd from which to read line input
 */


typedef struct passinfo
{
	char *arg;
	char **argv;
	char *path;
	int argc; 
	unsigned int line_count;
	int err_num;
	int linecount_flag;
	char *fname;
	list_t *env;
	list_t *alias;
	char **environ;
	int env_changed;
	int status;

	char **cmd_buff;
	int cmd_buff_type;
	int readfd;
	char *token;
	char *part;

	char *full_path;
	char format[128];

} info_t;

/************FUNTIONS************/
void joemac_print(char *string, int descriptor);
int main(void);
void print_prompt(void);
char *read_line(void);
char *split_command(char *line);
void visualize_prompt(void);
int initialize_command(info_t *info, const char *command);
void read_command_input(size_t size);
char joemac_command_split(char *str, const char *delim);
/* environ_env.c */
char **jm_env(info_t *info);
int joemac_unsetenv(const char *name);
int joemac_setenv(const char *name, const char *value);
char **list_to_strings(list_t *list);
char *starts_with(const char *str, const char *prefix);
int delete_node_at_index(list_t **head, unsigned int index);
int add_node_end(list_t **head, char *str, int num);
char jm_get_builtins(const char *name);

/*global variable*/
size_t size = 128;
extern char **environ;
#endif /*SHELL_H*/
