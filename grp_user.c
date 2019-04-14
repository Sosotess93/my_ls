/*
** grp_user.c for grp_user in /home/charra_s/PSU_2014_my_ls/test
** 
** Made by Sofiane Charrad
** Login   <charra_s@epitech.net>
** 
** Started on  Sat Nov 29 15:28:34 2014 Sofiane Charrad
** Last update Sat Nov 29 16:56:34 2014 Sofiane Charrad
*/

#include "my_ls.h"

void	affiche_user(uid_t const uid)
{
  struct passwd *user;
  if ((user = getpwuid(uid)))
    my_putstr(user->pw_name);
  my_putchar(' ');
}

void	affiche_group(gid_t const gid)
{
  struct group	*groupe;
  if ((groupe = getgrgid(gid)))
    my_putstr(groupe->gr_name);
  //my_putchar('');
}
