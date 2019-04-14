/*
** aff_date_heure.c for aff_date_heure in /home/charra_s/PSU_2014_my_ls
** 
** Made by Sofiane Charrad
** Login   <charra_s@epitech.net>
** 
** Started on  Thu Nov 27 22:15:01 2014 Sofiane Charrad
** Last update Wed Dec 17 00:52:11 2014 Sofiane Charrad
*/

#include "my_ls.h"

void		month(time_t const date_modif)
{
  struct tm	*infotime;

  infotime = localtime(&date_modif);
  (infotime->tm_mon+1 == 1) ? my_putstr(" janv. ") : my_putstr("");
  (infotime->tm_mon+1 == 2) ? my_putstr(" févrb. ") : my_putstr("");
  (infotime->tm_mon+1 == 3) ? my_putstr(" mars. ") : my_putstr("");
  (infotime->tm_mon+1 == 4) ? my_putstr(" avril. ") : my_putstr("");
  (infotime->tm_mon+1 == 5) ? my_putstr(" Mai. ") :  my_putstr ("");
  (infotime->tm_mon+1 == 6) ? my_putstr(" juin. ") : my_putstr ("");
  (infotime->tm_mon+1 == 7) ? my_putstr(" juil. ") : my_putstr ("");
  (infotime->tm_mon+1 == 8) ? my_putstr(" août. ") : my_putstr ("");
  (infotime->tm_mon+1 == 9) ? my_putstr(" sept. ") : my_putstr("");
  (infotime->tm_mon+1 == 10) ? my_putstr(" oct. ") : my_putstr("");
  (infotime->tm_mon+1 == 11) ? my_putstr(" nov. ") : my_putstr("");
  (infotime->tm_mon+1 == 12) ? my_putstr(" déc. ") : my_putstr("");
}

void		aff_date_heure(time_t const date_modif)
{
  struct tm	*infotime;

  infotime = localtime(&date_modif);
  my_putstr(" ");
  my_put_nbr(infotime->tm_mday);
  my_putstr(" ");
  my_put_nbr(infotime->tm_hour);
  my_putstr(":");
  if (infotime->tm_min < 10)
    {
      my_putstr("0");
      my_put_nbr(infotime->tm_min);
    }
  else 
    my_put_nbr(infotime->tm_min);
  my_putstr(" ");
}

