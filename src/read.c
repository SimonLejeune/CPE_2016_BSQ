/*
** read.c for BSQ in /home/slejeune/Elementary_Programming_in_C/CPE_2016_BSQ/src
** 
** Made by Simon LEJEUNE
** Login   <slejeune@epitech.net>
** 
** Started on  Mon Dec 12 10:55:47 2016 Simon LEJEUNE
** Last update Sun Dec 18 20:20:12 2016 LEJEUNE Simon
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

int	nb_line(char *map, int fd)
{
  int	nb_line;
  int	i;

  struct stat st;

  nb_line = 0;
  stat(map, &st);
  read(fd, map, 4096);
  i = jumping(map);
  map[i] = '\0';
  while (map[i] != '\0')
    {
      nb_line++;
      i++;
    }
  return (nb_line);
}

int	nb_column(char *map, int fd)
{
  int	nb_column;
  int	i;

  struct stat st;

  nb_column = 0;
  stat(map, &st);
  read(fd, map, 4096);
  i = jumping(map);
  map[i] = '\0';
  while (map[i] != '\n')
    {
      nb_column++;
      i++;
    }
  return (nb_column);
}

char	*reading(char *filepath)
{
  int	fd;
  int	x;
  int	row;
  int	col;
  int	size;
  char	*buff;

  fd = open(filepath, O_RDONLY);
  row = nb_line(filepath, fd);
  col = nb_column(filepath, fd);
  size = row * col;
  buff = malloc(sizeof(char*) * size);
  read(fd, buff, size);
  x = jumping(buff);
  while (buff[x] != '\0')
    {
      write(1, &buff[x], 1);
      x++;
    }
  close(fd);
  return (buff);
}
