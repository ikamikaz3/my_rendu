/*
** main.c for tp_minishell in /home/billot_t/rendu/tmp/minishelltp
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Tue Jan 27 12:00:23 2015 Thomas Billot
** Last update Tue Jan 27 15:50:35 2015 Thomas Billot
*/

#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		main(void)
{
  pid_t		pid;
  pid_t		ppid;
  int		status;

  pid = getpid();
  pid = fork();
  if (pid == 0)
    {
      sleep(3);
      printf("EXITING\n");
    }
  else
    {
      printf("Waiting for status... \n");
      pid = wait(&status);

      if (WIFEXITED(status))
	{
	  if ((WEXITSTATUS(status)) == 1)
	    printf("the son exit status is FAILURE\n");
	  else if ((WEXITSTATUS(status)) == 0)
	    printf("the son exit status is SUCCESS\n");
	  else
	    printf("Son error code is : %d\n", WEXITSTATUS(status));
	}
    }
  return (0);
}
