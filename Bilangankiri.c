#include <stdio.h>

int iniProses(int Rico){
  return Rico % 10;

}

void hasil(int a, int b, int c) {

    int satuan_a = iniProses(a);
    int satuan_b = iniProses(b);
    int satuan_c = iniProses(c);

    int sama = 0;

    if (satuan_a == satuan_b && satuan_b == satuan_c && satuan_a == satuan_c)
   {
    sama = 3;
    }
     else if (satuan_a == satuan_b || satuan_b == satuan_c || satuan_a == satuan_c)
    {
    sama = 2;
    }

 
    if (sama == 3)
    {
    printf("semua digit satuan sama");
   } 
    else if (sama == 2){
    printf("2 digit satuan sama");
    } 
    else{
    printf("Tidak ada digit satuan yang sama\n");
    }  

}

int main(){
  int bilangan1, bilangan2, bilangan3;

  printf("Bilangan pertama : ");
  scanf("%d", &bilangan1);
  
  printf("Bilangan kedua : ");
  scanf("%d", &bilangan2);
  
  printf("Bilangan ketiga : ");
  scanf("%d", &bilangan3);

  hasil(bilangan1, bilangan2, bilangan3);

  return 0;
}

