
/*
** main.c for main test in /home/billot_t
** 
** Made by Thomas Billot
** Login   <billot_t@epitech.net>
** 
** Started on  Thu Nov  6 10:22:27 2014 Thomas Billot
** Last update Wed Nov 12 19:48:48 2014 Thomas Billot
*/

#include <stdio.h>

int	main()
{
  void const *ptr;

  char str[] = "leeeeeeeeeeeeel";
  ptr = str;
  printf("Characters: %c %c\n", 'a', 65);
  my_printf("Characters: %c %c \n", 'a', 65);
  printf("Decimal: %#x %d %b\n", 1000, 1000, 1000);
  my_printf("Decimal: %x %d %b\n", 1000, 1000, 1000);
  printf("String: %s %s\n", "je m'apelle", "ton père");
  my_printf("String: %s %s\n", "je m'apelle", "ton père");
  printf("Pointer value = %p\n", ptr);
  my_printf("Pointer value = %p\n", ptr);
  printf("Unsigned decimal = %u\n", 100);
  my_printf("Unsigned decimal = %u\n", 100);
 return (0);
}
