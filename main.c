#include <stdio.h>
#include <stdlib.h>

int fatorial(int n)
{
    if(n==0 || n == 1)
        return 1;
    else
      return (n * fatorial(n-1));

}
int main()
{
    int x;
    printf("Digite o fatorial: ");
    scanf("%d",&x);
    printf("Valor: %d",fatorial(x));
    return 0;
}
