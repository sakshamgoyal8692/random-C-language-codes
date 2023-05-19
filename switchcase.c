#include<stdio.h>
#include<conio.h>

int main(){
    // clrscr();
    int day;
    printf("enter any number between 1 to 7 \n");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("Its Monday");
        break;
    case 2:
        printf("Its Tuesday");
        break;
    case 3:
        printf("Its Wednesday");
        break;
    case 4:
        printf("Its Thursday");
        break;
    case 5:
        printf("Its Friday");
        break;        
    case 6:
        printf("Its Saturday");
        break;
    case 7:
        printf("Its Sunday");
        break;        
    default:
        printf("Oops you have entered wrong input");
        break;
        
    }
    getch();


}