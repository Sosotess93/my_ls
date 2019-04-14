/*
** files_rights.c for files_rights in /home/charra_s/PSU_2014_my_ls
** 
** Made by Sofiane Charrad
** Login   <charra_s@epitech.net>
** 
** Started on  Thu Nov 27 22:13:04 2014 Sofiane Charrad
** Last update Sun Nov 30 16:57:56 2014 Sofiane Charrad
*/

#include	"my_ls.h"
#include	<grp.h>
#include	<pwd.h>
#include	<sys/types.h>
#include	<sys/stat.h>
#include	<unistd.h>
#include	<dirent.h>
#include	<stdio.h>
#include	<time.h>
#include	<stdlib.h>
#include	<features.h>

void            files_rights(struct stat rgh)
{
  ((rgh.st_mode & S_IFDIR) != 0) ? my_putstr("d") : my_putstr("-");
  ((rgh.st_mode & S_IRUSR) != 0) ? my_putstr("r") : my_putstr("-");
  ((rgh.st_mode & S_IWUSR) != 0) ? my_putstr("w") : my_putstr("-");
  ((rgh.st_mode & S_IXUSR) != 0) ? my_putstr("x") : my_putstr("-");
  ((rgh.st_mode & S_IRGRP) != 0) ? my_putstr("r") : my_putstr("-");
  ((rgh.st_mode & S_IWGRP) != 0) ? my_putstr("w") : my_putstr("-");
  ((rgh.st_mode & S_IXGRP) != 0) ? my_putstr("x") : my_putstr("-");
  ((rgh.st_mode & S_IROTH) != 0) ? my_putstr("r") : my_putstr("-");
  ((rgh.st_mode & S_IWOTH) != 0) ? my_putstr("w") : my_putstr("-");
  ((rgh.st_mode & S_IXOTH) != 0) ? my_putstr("x") : my_putstr("-");
  my_putstr(" ");
}
