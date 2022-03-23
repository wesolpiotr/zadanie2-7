#include <stdio.h>
#include <math.h>
int main(void) {
  int a;
  int b;
  printf("Podaj liczbę: ");
  scanf ("%d", &a);
  printf("Podaj liczbę: ");
  scanf ("%d", &b);
  if (b<a)
  {
    int tmp = a;
    a = b;
    b = tmp;
  }
	
for (int i=a; i<=b; i++)
  {	
    int licznik = 0;
	for(int j=2;j<=sqrt(i);j++)
    { 
      if (i%j == 0)
      {
        licznik++;
      }  
         
    }
    if (licznik==0){
    printf ("%d ", i);
    
    }	
	
  }
  }