/*
** main.c for BSQ in /home/slejeune/Elementary_Programming_in_C/CPE_2016_BSQ/src
** 
** Made by Simon LEJEUNE
** Login   <slejeune@epitech.net>
** 
** Started on  Wed Dec 14 16:03:17 2016 Simon LEJEUNE
** Last update Fri Dec 16 10:52:05 2016 LEJEUNE Simon
*/

#include <unistd.h>
#include "my.h"

int	main(int ac, char **av)
{
  if (ac != 2)
    {
      write(2, "Wrong arguments\n", 16);
      return (84);
    }
  reading(av[1]);
  return (0);
}
