
#include <stdio.h>
#include<conio.h>

int datenight()
{
    int i,j,k, n;
    float sum=0.0;
    char top1[][100]={"mesh top","halterneck","bodysuit"};
    float costtop1[100]={1000.00,869.90,990.00};
    char bottom1[][100]={"leather pants","skirt","cargo pants"};
    float costbottom1[100]={1080.00,789.90,557.89};
    char footwear1[][100]={"stilletos","wedges","sneakers"};
    float costfootwear1[100]={989.89,1000.00,750.00};
    char top2[][100]={"body suit","off shoulder","tank top"};
    float costtop2[100]={1000.00,869.90,990.00};
    char bottom2[][100]={"leather pants","blue denims","cargo pants"};
    float costbottom2[100]={1080.00,789.90,557.89};
    char footwear2[][100]={"white sneakers","wedges","boots"};
    float costfootwear2[100]={989.89,1000.00,750.00};
    char top3[][100]={"tank top","","bodysuit"};
    float costtop3[100]={1000.00,869.90,990.00};
    char bottom3[][100]={"leather pants","skirt","cargo pants"};
    float costbottom3[100]={1080.00,789.90,557.89};
    char footwear3[][100]={"stilletos","wedges","sneakers"};
    float costfootwear3[100]={989.89,1000.00,750.00};
    printf("choose an option based on time of the day and mood\n1.night and glamedup\n2.night and simple&elegant\n3.day and glamed up\n4.day and simple&elegant");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
            for(i=0;i<=2;i++)
        {
            for(j=0;j<=2;j++)
            {
                for(k=0;k<=2;k++)
                {
                    printf("outfits:%s+%s+%s\n",top1[i],bottom1[j],footwear1[k]);
                    sum=sum+costtop1[i]+costbottom1[j]+costfootwear1[k];
                    printf("estimated price:%f\n",sum);
                }
            }
            
        }
         break;
         case 2:
          for(i=0;i<=2;i++)
        {
            for(j=0;j<=2;j++)
            {
                for(k=0;k<=2;k++)
                {
                    printf("outfits:%s+%s+%s\n",top2[i],bottom2[j],footwear2[k]);
                    sum=sum+costtop2[i]+costbottom2[j]+costfootwear2[k];
                    printf("estimated price:%f\n",sum);
                }
            }
            
        }
         break;
         case 3:
          for(i=0;i<=2;i++)
        {
            for(j=0;j<=2;j++)
            {
                for(k=0;k<=2;k++)
                {
                    printf("outfits:%s+%s+%s\n",top3[i],bottom3[j],footwear3[k]);
                    sum=sum+costtop3[i]+costbottom3[j]+costfootwear3[k];
                    printf("estimated price:%f\n",sum);
                }
            }
            
        }
        break;
        case 4:
        //  for(i=0;i<=2;i++)
        // {
        //     for(j=0;j<=2;j++)
        //     {
        //         for(k=0;k<=2;k++)
        //         {
        //             printf("outfits:%s+%s+%s\n",top4[i],bottom4[j],footwear4[k]);
        //             sum=sum+costtop4[i]+costbottom4[j]+costfootwear4[k];
        //             printf("estimated price:%f\n",sum);
        //         }
        //     }
            
        // }
        break;
        default:
        printf("ivalid input");
        break;
         
    
    
    }
    
    
   
    
    getch();
    return 0;
            
        
    
    


}
