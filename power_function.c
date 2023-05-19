# include <stdio.h>

int power(int a , int b);
int main ()
{
    int a,b;
    printf("Please enter base number :-  ");
    scanf("%d",&a);
    printf("Please enter power number :-  ");
    scanf("%d",&b);
    printf("%d",power(a,b));
    return 0;
}
int power (int a, int b )
{
    if (b==0)
    {
        return 1;
    }
    int pow1= power(a,b-1);
    int pow2=pow1 *a;
    return pow2;
}
