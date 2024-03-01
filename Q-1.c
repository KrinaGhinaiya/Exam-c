#include <stdio.h>

int main()
{
    int f, s, add, sub, mul,div;
    
    printf("Enter First Numbers:");
    scanf("%d", &f);
    printf("Enter Second Numbers:");
    scanf("%d", &s);
    
    add = f + s;
    sub = f - s;
    mul = f * s;
    div = f / s;
    
    printf("Sum = %d\n",add);
    printf("sub = %d\n",sub);
    printf("Mul = %d\n",mul);
    printf("Div = %d\n",div);

}


