/*
** my_putstr.c for my_putstr in /home/charra_s/PSU_2014_my_ls
** 
** Made by Sofiane Charrad
** Login   <charra_s@epitech.net>
** 
** Started on  Tue Nov 25 18:49:51 2014 Sofiane Charrad
** Last update Sun Nov 30 23:09:01 2014 Sofiane Charrad
*/

#include "my_ls.h"

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
  return (0);
}
