#include<stdio.h>
#include<conio.h>
int main(){
    int x;
    printf("Welcome to WardrobeSpace!!!");
    printf("\nLets pick an outfit for you");
    printf("\nPlease enter your gender: ");
    printf("\n");
    scanf("%d", &x);
    switch(x)
    {
        case 1: 
        //male();
        printf("Male");
        break;
        case 2:
        printf("Female");
        break;
        //female();
        default:
            printf("Gender not specified");
    }
    return 0;
}