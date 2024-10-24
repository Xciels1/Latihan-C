#include <stdio.h>
#include <string.h>
int main(){
  char operator[3];
  int x, y, hasil;
  
  printf("Pilih operator +, -, *, /, :");
  scanf(" %2c", &operator);
  printf("bilangan pertama :\n");
  scanf("%d", &x);
  printf("bilangan kedua :\n");
  scanf("%d", &y);

  if (strlen(operator) > 1)
  {
    printf("operasi tidak valid\n");

    return 1;
  }
  
  
  switch (operator[0])
  {
  case '+':
    hasil = x + y;
    printf("hasil : %d", hasil) ;

    break;

  case '-'  :
    hasil = x - y;
    printf("hasil : %d\n", hasil);
  
    break;

  case '*':
    hasil = x * y;
    printf("hasil : %d\n", hasil);
   
    break;
 
  case '/':
    if (y != 0)
    {
      hasil = x / y;
      printf("hasil : %d\n", hasil);
    } else {
      printf("tidak dapat membagi bilangan nol\n");
    }
    
 
    break; 

  default:
    printf("operator tydack valdi\n");
    return 1;
  }


  return 0;
}