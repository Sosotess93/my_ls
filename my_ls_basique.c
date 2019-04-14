/*
** my_ls_basique.c for my_ls_basique in /home/charra_s/PSU_2014_my_ls
** 
** Made by Sofiane Charrad
** Login   <charra_s@epitech.net>
** 
** Started on  Tue Nov 25 18:48:26 2014 Sofiane Charrad
** Last update Sun Nov 30 21:45:16 2014 Sofiane Charrad
*/

#include "my_ls.h"

int	my_ls_basique()
{
  DIR	*s;
  struct dirent *a;

  if ((s = opendir(".")) == NULL)
    return (0);
  while ((a = readdir(s)) != NULL)
    {
      if ((a->d_type) == DT_REG)
	my_putstr(a->d_name);
      my_putchar(' ');
    }
  my_putchar('\n');
  if ((closedir(s)) == 0)
    return (0);
}

