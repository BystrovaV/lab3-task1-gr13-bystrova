/* hello.c */
#include <stdio.h>
#include <string.h>

void main (void)
{
  char letter;
  fgets(&letter, 2, stdin);

  char buff[2];
  fgets(buff, 2, stdin);

  char str[100];
  int count = 0;
  
  while(1)
  {
    fgets(str, 100, stdin);
    
    if(strcmp(str, "exit\n") == 0)
      break;
      
    for(int i=0; i < strlen(str);i++)
    {
      if(str[i] == letter)
      {
        count++;
      }
    }
  }
  
  printf("%d", count);
}
