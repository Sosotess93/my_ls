/*
** my_putchar.c for my_putchar in /home/charra_s/PSU_2014_my_ls
** 
** Made by Sofiane Charrad
** Login   <charra_s@epitech.net>
** 
** Started on  Tue Nov 25 18:48:48 2014 Sofiane Charrad
** Last update Sun Nov 30 16:21:48 2014 Sofiane Charrad
*/

#include "my_ls.h"

int	my_putchar(char c)
{
  write(1, &c, 1);
  return (0);
}
