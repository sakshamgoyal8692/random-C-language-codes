# include<stdio.h>
# include<math.h>

int main(){
    printf("Welecome to Table Generator ! \n");
    printf("Please enter the number which table yu want to print.\n");
    int number;
    scanf("%d", &number);
    printf("Table of %d is : \n", number);
    for ( int i = 1; i <= 10; i++)
    {
        printf("%d \n", number*i);
    }
    // printf("Here is your table of %d which you ask for", number);
    return 0;
}