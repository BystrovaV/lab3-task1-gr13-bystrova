#include <stdio.h>
#include <string.h>

// считает частоту встречаемости
int count_letter(char str[], char letter)
{
  int count = 0;
    
  for(int i=0; i < strlen(str);i++)
  {
    if(str[i] == letter)
    {
      count++;
    }
  }

  return count;
}

int main (void)
{
  char letter;
  fgets(&letter, 2, stdin);

  char buff[2];
  fgets(buff, 2, stdin);

  // строка, в которой ищется буква
  char str[1000]="i have to believe that even if  something seems like it cannot be fixed it doesn't mean it's broken ";

  int count = count_letter(str, letter);
  
  printf("The letter occurs: %d", count);
}
