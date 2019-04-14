/*
** my_ls_l.c for my_ls_l in /home/charra_s/PSU_2014_my_ls
** 
** Made by Sofiane Charrad
** Login   <charra_s@epitech.net>
** 
** Started on  Sat Nov 29 16:05:21 2014 Sofiane Charrad
** Last update Fri Nov 27 16:56:54 2015 Sofiane Charrad
*/

#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <dirent.h>
#include <stdio.h>
#include <pwd.h>
#include <grp.h>
#include <time.h>
#include "my_ls.h"

void	my_ls_l()
{
  void	*dir;
  t_struct ab;

  dir = opendir(".");
  bit();
  while ((ab.file = readdir(dir)) != NULL)
    {
      if (ab.file->d_name[0] != '.')
	{
	  stat(ab.file->d_name, &ab.type);
	  ab.pass = getpwuid(ab.type.st_uid);
	  files_rights(ab.type); /* reights */
	  my_put_nbr(ab.type.st_nlink); /* link */
	  my_putstr(" ");
	  affiche_user(ab.type.st_uid);
	  affiche_group(ab.type.st_gid);
	  size(ab.type.st_size);
	  my_put_nbr(ab.type.st_size); /* size */
	  //month(ab.type.st_mtime);
	  //	  aff_date_heure(ab.type.st_mtime);
	  my_putstr(ab.file->d_name);
	  my_putstr(" \n");
	}
    }
  closedir(dir);
}
