/*
** my_ls_a.c for my_ls_a in /home/charra_s/PSU_2014_my_ls
** 
** Made by Sofiane Charrad
** Login   <charra_s@epitech.net>
** 
** Started on  Sun Nov 30 19:58:37 2014 Sofiane Charrad
** Last update Sun Nov 30 23:07:47 2014 Sofiane Charrad
*/

#include	"my_ls.h"

int	my_ls_a()
{
  DIR		*dirp;
  struct dirent *d;
  const char    *name;

  name = ".";
  dirp = opendir(name);
  if (dirp == NULL)
    exit (0);
  d = readdir(dirp);
  if (d == NULL)
    exit (0);
  my_putstr(d->d_name);
  my_putchar(' ');
  while ((d = readdir(dirp)) != NULL)
    {
      if (d == NULL)
        exit (0);
      my_putstr(d->d_name);
      my_putchar(' ');
    }
  my_putchar('\n');
  return (0);
}
