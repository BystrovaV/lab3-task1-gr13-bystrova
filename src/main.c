#include <stdio.h>
#include <string.h>

void main (void)
{
  char letter;
  fgets(&letter, 2, stdin);

  char buff[2];
  fgets(buff, 2, stdin);

  char str[1000]="i have to believe that even if  something seems like it cannot be fixed it doesn't mean it's broken ";
  
  int count = 0;
    
  for(int i=0; i < strlen(str);i++)
  {
    if(str[i] == letter)
    {
      count++;
    }
  }
  
  printf("%d", count);
}
