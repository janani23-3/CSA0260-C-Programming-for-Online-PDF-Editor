#include<stdio.h>
#include<conio.h>
int main()
{
    int array1[10][10],i,j,m,n,sum = 0;

    printf("Enter number of rows : ");
        scanf("%d", &m);
        printf("\nEnter number of colums : ");
        scanf("%d",&n);
        printf("\nEnter values to the matrix : \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                 printf("\nEnter a[%d][%d] value : ",i,j);
                 scanf("%d", &array1[i][j]);
        }
    }

    printf("\nThe Diagonals elements of a matrix are : \n\n");
    if(m==n)
    {
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                {

                    if(i==j)
                        printf("\t%d", array1[i][j]);   
                    else
                        printf("\t");  
                }
                printf("\n\n"); 
            }
    }
    else
    {
        printf("\nMatrix is not a Square Matrix.");
    }
    
    	for(i=0; i<m; i++)
    	{
    		sum+=array1[i][i];
		}
	    printf("\nSum of the diagonals of the Matrix = %d", sum);
        return 0;
}
