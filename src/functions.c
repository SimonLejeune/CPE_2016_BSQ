/*
** functions.c for BSQ in /home/slejeune/Elementary_Programming_in_C/CPE_2016_BSQ/src
** 
** Made by Simon LEJEUNE
** Login   <slejeune@epitech.net>
** 
** Started on  Mon Dec 12 11:04:54 2016 Simon LEJEUNE
** Last update Mon Dec 12 11:09:16 2016 Simon LEJEUNE
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
}
