/*
** read.c for BSQ in /home/slejeune/Elementary_Programming_in_C/CPE_2016_BSQ/src
** 
** Made by Simon LEJEUNE
** Login   <slejeune@epitech.net>
** 
** Started on  Mon Dec 12 10:55:47 2016 Simon LEJEUNE
** Last update Mon Dec 12 12:10:37 2016 Simon LEJEUNE
*/

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

int	reading(char *filepath)
{
  int	fd;
  char	*buff;
  struct stat sb;

  fd = open(filepath, O_RDONLY);
  stat(filepath, &sb);
  buff = malloc(sizeof(char) * (sb.st_size));
  read(fd, buff, sb.st_size);
  write(1, buff, sb.st_size);
  close(fd);
  free(buff);
}

void	main(int ac, char **av)
{
  reading(av[1]);
}
