#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main(){
      int r;
      int c;
     
      scanf("%d %d", &r,&c);
      int arr[r][c];
      for (int i = 0; i < r; i++)
      {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
      }
      //char b;
      //scanf("%c", &b);
      getchar();//takes enter as input
      //printf("\n");
       char a;
      int n;
     printf("Row or Column ? Press c for column and Press r for row\n");
     scanf("%c", &a);
     printf("Okay. Which one ?\n");
     scanf("%d", &n);
     if (a=='r')
     {
        for (int i = 0; i <c ; i++)
        {
            printf("%d ", arr[n-1][i]);
        }
        
     }
     else if (a=='c')
     {
        for (int i = 0;  i<r ; i++)
        {
            printf("%d\n",arr[i][n-1] );
        }
        
     }
     else{
        printf("That doesn't exist fool");
     }
     
     
    return 0;
}
