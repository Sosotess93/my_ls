/*
** my_strcmp.c for my_strcmp in /home/charra_s/Piscine_C_J06/ex_05
** 
** Made by Sofiane Charrad
** Login   <charra_s@epitech.net>
** 
** Started on  Mon Oct  6 23:03:51 2014 Sofiane Charrad
** Last update Tue Oct  7 20:34:26 2014 Sofiane Charrad
*/

#include <string.h>

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  i = 0;
  while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
    i = i + 1;
  return (s1[i] - s2[i]);
}
