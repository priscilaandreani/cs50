#include <stdio.h>

// create a prototype for the function meow
void meow(void);


int main(void)
{
  for(int i = 0; i < 3; i++)
  {
    meow();
  }
}

void meow(void){
  printf("Meow!\n");
}