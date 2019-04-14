/*
** my_ls_basique.h for my_ls_basique.h in /home/charra_s/PSU_2014_my_ls
** 
** Made by Sofiane Charrad
** Login   <charra_s@epitech.net>
** 
** Started on  Tue Nov 25 19:05:13 2014 Sofiane Charrad
** Last update Sat Jan 31 01:57:38 2015 Sofiane Charrad
*/

#ifndef		__MY_LS_H__
#define		__MY_LS_H__

#include	<grp.h>
#include	<pwd.h>
#include	<sys/types.h>
#include	<sys/stat.h>
#include	<unistd.h>
#include	<dirent.h>
#include	<stdio.h>
#include	<time.h>
#include	<stdlib.h>

typedef int	(*ptr_func)();

typedef struct	s_ptr
{
  char		*str;
  int		i;
  ptr_func	func;
}		t_ptr;

typedef struct	s_struct
{
  struct dirent *file;
  struct stat	type;
  struct passwd *pass;
  struct group	*group; 
}		t_struct;

int		my_putchar(char c);
int		my_putstr(char *str);
int		my_putstr_esp(char *str);
int		my_putstr_so(char *str);

#endif		/*_MY_LS_H_*/
