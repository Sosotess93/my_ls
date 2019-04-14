/*
** d_opt.c for d_op in /home/daoud_c/PSU/PSU_2014_my_ls/push
** 
** Made by chihabeeddine daoud
** Login   <daoud_c@epitech.net>
** 
** Started on  Sun Nov 30 17:47:04 2014 chihabeeddine daoud
** Last update Sun Nov 30 23:34:16 2014 Sofiane Charrad
*/

#include "my_ls.h"

int	d_opt()
{
  void	*dir;
  struct dirent *file;
  struct stat	type;

  dir = opendir(".");
  while ((file = readdir(dir)) != NULL)
    {
      if (file->d_name[0] == '.')
	{
	  if (file->d_name[1] != '.')
	    {
	      stat(file->d_name, &type);
	      my_putstr(file->d_name);
	      my_putstr("  ");
	    }
	}
    }
  my_putstr("\n");
  closedir(dir);
  return (0);
}
