/*
** bit.c for bit in /home/charra_s/PSU_2014_my_ls
** 
** Made by Sofiane Charrad
** Login   <charra_s@epitech.net>
** 
** Started on  Sat Nov 29 17:53:05 2014 Sofiane Charrad
** Last update Sat Nov 29 18:04:05 2014 Sofiane Charrad
*/

#include "my_ls.h"

void	bit()
{
  void *dir;
  struct stat	type;
  struct dirent	*file;
  static int	size = 0;

  dir = opendir(".");
  while ((file = readdir(dir)) != NULL)
    {
      if (file->d_name[0] != '.')
	{
	  stat(file->d_name, &type);
	  size = size + type.st_blocks;
	}
    }
  my_putstr("total ");
  my_put_nbr(size / 2);
  my_putchar('\n');
}
