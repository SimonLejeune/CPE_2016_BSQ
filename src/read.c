/*
** read.c for BSQ in /home/slejeune/Elementary_Programming_in_C/CPE_2016_BSQ/src
** 
** Made by Simon LEJEUNE
** Login   <slejeune@epitech.net>
** 
** Started on  Mon Dec 12 10:55:47 2016 Simon LEJEUNE
** Last update Fri Dec 16 13:06:41 2016 LEJEUNE Simon
*/

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "my.h"

int	jumping(char *str)
{
  int	x;

  x = 0;
  while (str[x] != '\n')
    x++;
  x++;
  return (x);
}

char	*first_number(char *str)
{
  int	x;

  x = 0;
  while(str[x] != '\n')
    x++;
  return(str);
}

char	*reading(char *filepath)
{
  int	fd;
  int	x;
  int	nb_l;
  char	*buff;
  struct stat st;

  nb_l = 0;
  fd = open(filepath, O_RDONLY);
  stat(filepath, &st);
  buff = malloc(sizeof(char*) * (st.st_size));
  read(fd, buff, st.st_size);
  x = jumping(buff);
  while(buff[x] != '\0')
    {
      write(1, &buff[x], 1);
      x++;
    }
  close(fd);
  return (buff);
}
