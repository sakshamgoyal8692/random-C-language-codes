# include<stdio.h>

int main()
{
    int number ,a;
    do {
        printf("Do you want to check the number is prime or not then type '1' for yes and '2' for no \n");
        scanf("%d" ,&a);
        if (a==1)
        {
            printf("Please enter a number : ");
            scanf("%d",&number);
            if (number==2||number==3||number==5||number==7)
            {
                printf("Its a prime number\n");
                continue;
            }
            else{
                if (number%2==0||number%3==0||number%5==0||number%7==0)
                {
                    printf("Its not a prime number\n");
                    continue;
                }
                else{
                    printf("Its a prime number\n");
                    continue;
                }
            }
        }
        else{
            printf("Thank You.\n");
            break;
        }
        
    }while(1);
    return 0;    
}
