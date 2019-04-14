/*
** size.c for size in /home/charra_s/PSU_2014_my_ls
** 
** Made by Sofiane Charrad
** Login   <charra_s@epitech.net>
** 
** Started on  Sat Nov 29 15:48:51 2014 Sofiane Charrad
** Last update Sun Nov 30 23:11:40 2014 Sofiane Charrad
*/

#include "my_ls.h"

void	size(int size)
{
  if (size > 10000)
    my_putstr(" ");
  else if(size < 10000 && size > 1000)
    my_putstr("  ");
  else if (size < 1000)
    my_putstr("   ");
}
