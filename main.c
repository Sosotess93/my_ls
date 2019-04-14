/*
** main.c for main.C in /home/charra_s/PSU_2014_my_ls
** 
** Made by Sofiane Charrad
** Login   <charra_s@epitech.net>
** 
** Started on  Sun Nov 30 17:37:50 2014 Sofiane Charrad
** Last update Sun Nov 30 23:31:54 2014 Sofiane Charrad
*/

#include	"my_ls.h"

int             main(int ac, char **av)
{
  if (ac == 1)
    my_ls_basique();
  if (ac == 2 && !my_strcmp(av[1], "ls"))
    my_ls_basique();
  else if (ac == 2 && !my_strcmp(av[1], "-l"))
    my_ls_l();
  else if (ac == 2 && !my_strcmp(av[1], "-a"))
    my_ls_a();
  else if (ac == 2 && !my_strcmp(av[1], "-d"))
    d_opt();
}
