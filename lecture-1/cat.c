#include <stdio.h>

// create a prototype for the function meow
void meow(int n);

int main(void)
{
 meow(5); 
}

void meow(int n){
  for(int i = 0; i < n; i++)
  {
    printf("Meow\n"); 
  }
}