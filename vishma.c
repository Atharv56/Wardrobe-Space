#include <stdio.h>
#include<conio.h>

int main()
{
    int i,j,n;
    char outfit1[][8000] = {"brown blazer+neon crop top+black pants+pointy toe heels", "tshirt+skin fit jeans+sweater vest+knee high socks+loafers","cardigan+a cami+retro trousers"};
    float cost1[80]={4000.00,2000.00,1500.00};
    char outfit2[][8000]={"ribbed knit dress+heeled boots","puffy sleeves top+denim skirt+hoops","sweatshirt+ribbed jeans+sneakers"};
    float cost2[80]={2500.00,2000.00,1560.00};
    char outfit3[][8000]={"tank top+long skirt+cute sandals","white tshirt+denim jacket+bootcut jeans","formal shirt+tousers+pointy tor heels"};
    float cost3[80]={3500.00,1550.00,2890.00};
    char outfit4[][8000]={"summer dress+hoops+cute sandals","a cute crop top+boyfriend fit jeans+boots","sleeveless top+meshed jacket+baggy jeans"};
    float cost4[80]={1545.00,2000.00,1789.00};
    printf("lets decide your outfit based on time of the day and your current mood\n1.night and glamup\n2.night and simple and elegant\n3.day and glamup\n4.day and simple and elegant\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        for(i=0;i<=2;i++)
        {
            printf("here you go\n%s(estimated cost Rs %.2f)\n",outfit1[i],cost1[i]);
        }
        break;
        case 2:
        for(i=0;i<=2;i++)
        {
            printf("here you go\n%s(estimated cost Rs %.2f)\n",outfit2[i],cost2[i]);
        }
        break;
        case 3:
        for(i=0;i<=2;i++)
        {
            printf("here you go\n%s(estimated cost Rs %.2f)\n",outfit3[i],cost3[i]);
        }
        break;
        case 4:
        for(i=0;i<=2;i++)
        {
            printf("here you go\n%s(estimated cost Rs %.2f)\n",outfit4[i],cost4[i]);
        }
        break;
        default:
        printf("oops!option not available");
        break;

    }
         
    getch();
    return 0;   
    }
        
    
    



        
    
    


