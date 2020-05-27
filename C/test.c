#include <stdio.h>



int pow (int a, int b);



int main ()

{

 int y;

 int x = 5;



 for(y = 0; y <= 10; y++)

  printf("%d ^ %d == %d\n", x, y, pow(x,y));

} 



int pow(int a, int b)

{

 int i, pow = 1;



 for (i = 0; i < b; i++)

  pow *= a; // 주의해야할 부분! a *= a 라고 생각하지 말도록 하자. 



 return pow;

} 
