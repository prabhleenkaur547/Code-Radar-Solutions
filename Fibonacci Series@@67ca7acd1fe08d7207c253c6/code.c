#include <stdio.h>
#include<math.h>
  int fibonacci(int n){
    int a=2,b=4,c;
    if ( n==0 ) return a;
    for (int i = 2;i<=n;i++)c = a + b,a=b,b=c;
    return b;
  }

