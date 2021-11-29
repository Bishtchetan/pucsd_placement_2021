#include <stdio.h> 
#include <stdlib.h>
int fibonacci(int x){
    if (x<=1)
    return x;
    return fibonacci(x-1) + fibonacci(x-2);
}
int even_fibonacci(int x)
{
    if(x<1)
    return x;
    if (x==1)
    return 2;
    else
    return ((4 * even_fibonacci(x-1))+ even_fibonacci(x-2));
}
int main()
{
    int x ;
    printf("Enter the value of n \n");
    scanf("%d",&x);
    printf("%d", fibonacci(x));
    printf("\n");
    printf("%d\n" , even_fibonacci(x));
    return 0;
}
