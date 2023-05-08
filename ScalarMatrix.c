#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main(){
      int r,c;
      scanf("%d %d", &r,&c);
      int arr[r][c];
      for (int i = 0; i < r; i++)
      {
         for (int j = 0; j < c; j++)
         {
             scanf("%d", &arr[i][j]);
         }
         
      }
      int flag=1;
      for (int i = 0; i < r; i++)
      {
        for (int j = 0; j < c; j++)
        {
            if (i==j)
            {
                if (arr[i][j]!=arr[0][0])
                {
                    flag=0;
                }
                
            }
            else if (arr[i][j]!=0)
                {
                    flag=0;
                }
         }
        
      }
      if (flag==1)
      {
        printf("Scalar");
      }
      else{
        printf("Not Scalar");
      }
      
      
      

    return 0;
}
