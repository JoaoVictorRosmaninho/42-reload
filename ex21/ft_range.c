#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max) {
  int *range;
  int index; 
  if (min >= max)
    return (NULL);
  range = (int *) malloc((max - min) * sizeof(int));
  index = 0;
  while (min < max) {
    *(range + index) = min; 
    index++;
    min++;
  }  
  return (range); 
}
