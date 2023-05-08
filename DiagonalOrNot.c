// Here we will see if a given matrix is diagonal or not
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int flag=1;
    if (r!=c)
    {
        flag++;
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
             if (i==j)
             {
                continue;
             }
             if (arr[i][j]!=0)
             {
                flag++;
             }
             
             
        }
        
    }
    if (flag==1)
    {
        printf("Diagonal");
    }
    else{
        printf("Not Diagonal");
    }
    
    
    

    return 0;
}
