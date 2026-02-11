#include <stdio.h>

int main() {
    int a,b,c;
    printf("enter the value in a,b,c:\n");
    scanf("%d %d %d",&a,&b,&c);
    int ab=a+b;
    int bc=b+c;
    int ac=c+a;
    if(ab==10 || bc==10 || ac==10){
        printf("10");
    }
    else if(a>10 || b>10 || c>10){
        printf("5");
    }
    else {
        printf("0");
    }
    return 0;
}
