#include<stdio.h>
//Un programme récursif qui calcule la somme des entiers de 1 à n
int somme(int n){
if (n==0)
{
    return 0;
}else
return n+somme(n-1);
}
int main()
{
    int n;
    printf("Give me the value of n:");
    scanf("%d",&n);
    printf("la somme est:%d",somme(n));

    return(0);
}