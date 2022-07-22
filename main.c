#include<stdio.h>
#include<conio.h>
int main(){
    int x;
    printf("Welcome to WardrobeSpace!!!");
    printf("\nLets pick an outfit for you");
    // printf("\nPlease enter your gender: \n1.Male\n2.Female");
    pattern();
    printf("\n");
    scanf("%d", &x);
    switch(x)
    {
        case 1: 
        male();
        break;
        case 2:
        female();
        break;
        default:
            printf("invalid input");
    }
    return 0;
}

void male(){
    int n;
    printf("What occasion are you dressing up for");
    printf("\n1) Date Night \n2) Outing with friends \n3) College Outfit");
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
void patttern(){
      char a[]=  "1) Male   2)Female";
    
printf(" ------------------- \n");
    
    for (int j = 0; j<5; j++)
    {
        printf("|");
        if(j!=2){
        for(int i = 0; i<sizeof(a)/sizeof(a[0]);i++){
            printf(" ");
            
        }

        printf("|\n");
        }
        if(j==2){
            printf("1) Male   2)Female |");
            printf("\n");
        }
        
    }
    
    
printf(" ------------------- ");
}
void datenight_m(){
    int x, sum=0;
    char top1[][8000] = {"black tee", "white tee", "red tee"};
    int costt1[80]={100, 200, 300};

    char bottom1[][8000] = {"trouser", "jeans", "cargo"};
    int costb1[80] = {200,300,100};

    char foot1[][8000] = {"Sneakers", "sport shoes", "formals"};
    int costf1[80]= {500,200,700};

    printf("\n1.Day\n2.Night");
    scanf("%d", &x);
    switch(x){
        case 1: 

            for(int i = 0; i<=2; i++){
                printf("\noption %d:", i+1);
                printf("\n%s\n%s\n%s", top1[i], bottom1[i], foot1[i]);
                sum = costt1[i]+ costb1[i]+costf1[i]+sum;
                printf("\nTotal cost: %i", sum);
                printf("\n");
                sum = 0;
                }
        break;    

    }   
}
void outing_m(){
    printf("In progress");
}
void college_outfit_m(){
    printf("In progress");
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
void datenight(){
    printf("In progress");
}
void outing_with_friends(){
    printf("In progress");
}
void college_outfits(){
    printf("In progress");
}
