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
        //female();
        break;
        
        default:
            printf("invalid input");
    }
    return 0;
}

void male(){
    int n;
    printf("What occasion are you dressing up for");
    printf("\n1) Date Night\n2) Outing with friends\n 3) College Outfit");
    scanf("%d", &n);
    switch(n){
        case 1:
        datenight_m();
        break;
        case 2:
        outing_m();
        break;
        case 3:
        college_outfit_m();
        break;
        default:
        printf("OOPS! sorry can't recommend any outfit.");
    }

}

void datenight_m(){
    
}
void outing_m(){

}
void college_outfit_m(){

}
void female()
{
    int n;
    printf("what occassion are you dressing up for??\n1.Date night\n2.outing with friends\n3.college outfit");
    scanf("%d",&n);
    switch(n)
    {
        case 1: datenight();
        break;
        case 2: outing_with_friends();
        break;
        case 3: college_outfits();
        break;
        default: printf("oops!sorry cant reccomand any outfits");
        break;
    }
}