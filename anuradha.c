/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<conio.h>

int main()
{
    int i,j,n;
    char outfit1[][8000] = {"blazer+meshed top+leatherpants+wedges+gold jewellery to look sexier!","mini dress+stiletto+hoop earings","halterneck+skirt+boots+silver jewellery"};
    float cost1[80]={4000.00,2000.00,1500.00};
    char outfit2[][8000]={"a simple black dress+sneakers+studded earings","leather pants+tanktop+blackdenims+gold hoops","body suit+cargo pants+silver jwellery"};
    float cost2[80]={2500.00,2000.00,1560.00};
    char outfit3[][8000]={"bodysuit+denimjacket+leather pants+pearl jewellery","off shoulder+cargo pants+sneakers","turtleneck+bootcut jeans+whiteshoes+hoop earing"};
    float cost3[80]={3500.00,1550.00,2890.00};
    char outfit4[][8000]={"tank top+shorts+sneakers","crop top+mom jeans+flats","cargo pants+tanktop+boots"};
    float cost4[80]={1545.00,2000.00,1789.00};
    printf("lets decide your outfit based on time of the day and your current mood\n1.night and glamup\n2.night and simple and elegant\n3.day and glamup\n4.day and simple and elegant");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        for(i=0;i<=2;i++)
        {
            printf("here you go\n%s(estimated cost Rs %.2f)\n"outfit1[i],cost1[i]);
        }
        break;
        case 2:
        for(i=0;i<=2;i++)
        {
            printf("here you go\n%s(estimated cost Rs %.2f)\n"outfit2[i],cost2[i]);
        }
        break;
        case 3:
        for(i=0;i<=2;i++)
        {
            printf("here you go\n%s(estimated cost Rs %.2f)\n"outfit3[i],cost3[i]);
        }
        break;
        case 4:
        for(i=0;i<=2;i++)
        {
            printf("here you go\n%s(estimated cost Rs %.2f)\n"outfit4[i],cost4[i]);
        }
        break;
        default:
        printf("oops!option not available");
        break;

    }
        
    }
        
    
    
    
    getch();
    return 0;
}
