#include <stdlib.h>

int	ft_strlen(char *str)
{
	char	*tmp;

	tmp = str;
	while (*str++)
		;
	return ((int)(str - tmp) - 1);
}

char	*ft_strcpy(char *dest, char *src)
{
	char	*tmp;

	tmp = dest;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (tmp);
}

char *ft_strdup(char *str) 
{
  char *new_str; 

  new_str = (char *) malloc(ft_strlen(str) + 1); 
  ft_strcpy(new_str, str); 
  return (new_str);
}



