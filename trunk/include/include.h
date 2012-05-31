#ifndef __INCLUDE_H__
# define __INCLUDE_H__

typedef struct	s_env
{
  char		*name;
  char		*var;
  struct s_env	*next;
} t_env;

char		*r_com(char *r_line);
void		mysh();
int             cmp_l(char *com);
char            *epure_str(char *com);
char            **cut_com(char *com);
int             find_start(char *str);
int             find_end(char *str);
int             cmp_com(char *str);

#endif
