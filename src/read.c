/*
** read.c for BSQ in /home/slejeune/Elementary_Programming_in_C/CPE_2016_BSQ/src
** 
** Made by Simon LEJEUNE
** Login   <slejeune@epitech.net>
** 
** Started on  Mon Dec 12 10:55:47 2016 Simon LEJEUNE
** Last update Wed Dec 14 09:55:59 2016 Simon LEJEUNE
*/

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

char	*reading(char *filepath)
{
  int	fd;
  int	x;
  int	nb_n;
  char	*buff;
  struct stat sb;

  x = 0;
  fd = open(filepath, O_RDONLY);
  stat(filepath, &sb);
  buff = malloc(sizeof(char) * (sb.st_size));
  read(fd, buff, sb.st_size);
  while (buff[x] != '\0')
    {
      if (buff[x] == '\n')
	nb_n++;
      x++;
    }
  x--;
  write(1, buff, sb.st_size);
  close(fd);
  return (buff);
}

void	main(int ac, char **av)
{
  char	*buff;
  
  buff = reading(av[1]);
}
