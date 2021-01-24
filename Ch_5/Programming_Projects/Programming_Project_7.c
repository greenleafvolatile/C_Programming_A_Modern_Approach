#include <stdio.h>

int main(void){
    int a, b, c, d, temp;
    printf("Enter four space-separated integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if(a>b){
      temp=a;
      a=b;
      b=temp;
    }
    if(c>d){
      temp=c;
      c=d;
      d=temp;
    }
    if(b>d){
      temp=b;
      b=d;
      d=temp;
    }
    if(a>c){
      temp=a;
      a=c;
      c=temp;
    }
    printf("Smallest: %d Largest: %d", a, d);
    return 0;
}


