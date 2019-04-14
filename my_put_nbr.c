/*
** my_put_nbr.c for my_put_nbr in /home/charra_s/Piscine_C_J04
** 
** Made by Sofiane Charrad
** Login   <charra_s@epitech.net>
** 
** Started on  Fri Oct  3 22:54:07 2014 Sofiane Charrad
** Last update Sun Nov 30 16:22:27 2014 Sofiane Charrad
*/

#include "my_ls.h"

int	my_put_nbr(int nb)
{
  int	rev;
  int	i;

  rev = 1;
  if (nb >= 0)
    nb *= -1;
  else
    my_putchar('-');
  while (nb / rev <= -10)
    rev *= 10;
  while (rev != 0)
    {
      my_putchar(((nb / rev) % 10) * (-1) + '0');
      rev /= 10;
      i = i + 1;
    }
  return (i);
}
