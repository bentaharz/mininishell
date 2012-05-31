/*
** test.c for test in /home/kapand_v//minishell/tp
**
** Made by victor kapandji
** Login   <kapand_v@epitech.net>
**
** Started on  Tue May 22 12:45:52 2012 victor kapandji
** Last update Tue May 22 13:05:54 2012 victor kapandji
*/

#include		<stdio.h>
#include		<termios.h>
#include		<unistd.h>

int			main()
{
  struct termios	t;

  if (tcgetattr(0, &t) == -1)
    {
      fprintf(stderr, "tcgetattr failed\n");
      return (1);
    }
  return (0);
}

void			modify_terminal(struct termios *t)
{
  if (tcsetattr(0, t) == -1)
    {
      fprintf(stderr, "tcsetattr failed\n");
      return (1);
    }
}

void			raw_mode(struct termios *t)
{
  t->c_lflag &= ~ICANON;
  t->c_cc[VMIN] = 1;
  t->c_cc[VTIME] = 0;
  if (tcsetattr(0, t) == -1)
    {
      fprintf(stderr, "tcsetattr failed\n");
      return (1);
    }
}

char			*get_password(struc *t)
{
  t->c_lflag &= ~ECHO;
  if (tcsetattr(0, t) == -1)
    {
      fprintf(stderr, "tcsetattr failed\n");
      return (1);
    }
  printf("Enter yout password and type ENTER:");
  return (get_next_line(0));
}

