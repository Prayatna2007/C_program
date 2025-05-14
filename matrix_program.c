#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void trasnpose()
{
   int a[10][10],i,j,m,n;
    printf("Enter the no. of rows and columns you want:");
    scanf("%d%d",&m,&n);
    printf("Enter the elements for %d*%d matrix:\n",m,n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    //process for transpose;
    printf("The transpose of given matrix is displayed below:\n");
    printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n\n");
    } 
}
void square()
{
    int a[10][10],s[10][10],i,j,m,n,k,sum;
    printf("Enter the no. of rows and columns you want:");
    scanf("%d%d",&m,&n);
    printf("Enter the elements for %d*%d matrix:\n",m,n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    //process for square;
    printf("The square of given matrix is displayed below:\n");
    printf("\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {   sum=0;
            for(k=0;k<m;k++)
            {
                sum+=a[i][k]*a[k][j];
            }
            s[i][j]=sum;
        }
        
    } 
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf(("%d\t"),s[i][j]);
        }
        printf("\n\n");
    }
}
void sum()
{   
    int a[10][10],b[10][10],i,j,m,n;
    printf("------ONLY FOR SUM OF 2 MATRICES------\n\n");
    printf("Enter the order (m*n) of both matrix:\n");
    scanf("%d%d",&m,&n);
    printf("Enter the values for first %d*%d matrix:\n",m,n);
    {
    for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
    }
    printf("Enter the values for second %d*%d matrix:\n",m,n);
    {
    for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
    }
    printf("The sum of given two matrices are displayed below:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
    
}
void multiply()
{
    int a[10][10],b[10][10],s[10][10],i,j,m1,n1,m2,n2,k,sum;
    printf("Enter the no. of rows and columns you want for first matrix:\n");
    scanf("%d%d",&m1,&n1);
    printf("Enter the no of rows and columns you want for second matrix:\n");
    scanf("%d%d",&m2,&n2);
    if(n1 != m2)
    {
        printf("Process imcompatible\n The no of columns of first matrix and no or rows of second matrix must be equal for multiplication\n");
        exit(0);
    }
    printf("Enter the elements for first %d*%d matrix:\n",m1,n1);
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements for second %d*%d matrix:\n",m2,n2);
    for(i=0;i<m2;i++)
    {
        for(j=0;j<n2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    //process for multiplication;
    printf("The multiplication of given two matrix is displayed below:\n");
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n2;j++)
        {   sum=0;
            for(k=0;k<m2;k++)
            {
                sum+=a[i][k]*b[k][j];
            }
            s[i][j]=sum;
        }
        
    } 
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n2;j++)
        {
            printf(("%d\t"),s[i][j]);
        }
        printf("\n\n");
    }
}
void difference()
{
    int a[10][10],b[10][10],i,j,m,n;
    printf("------ONLY FOR DIFFERENCES OF 2 MATRICES------\n\n");
    printf("Enter the order (m*n) of both matrix:\n");
    scanf("%d%d",&m,&n);
    printf("Enter the values for first %d*%d matrix:\n",m,n);
    {
    for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
    }
    printf("Enter the values for second %d*%d matrix:\n",m,n);
    {
    for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
    }
    printf("The difference of given two matrices are displayed below:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]-b[i][j]);
        }
        printf("\n");
    }
}
void inverse3()
{
    int a[3][3],b[3][3],i,j;
    float c[3][3],det;
    printf("Enter elements for 3*3 matrix:");
    { 
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
    }
    det=a[0][0]*(a[1][1]*a[2][2]-a[1][2]*a[2][1])-a[0][1]*(a[1][0]*a[2][2]-a[1][2]*a[2][0])+a[0][2]*(a[1][0]*a[2][1]-a[1][1]*a[2][0]);
    if(det==0)
    {
        printf("Inverse is not possible\n");
        exit(99);
    }
    printf("%f\n",det);
    
    b[0][0]=(a[1][1]*a[2][2]-a[1][2]*a[2][1]);
    b[0][1]=(-1*(a[1][0]*a[2][2]-a[1][2]*a[2][0]));
    b[0][2]=(a[1][0]*a[2][1]-a[1][1]*a[2][0]);
    b[1][0]=(-1*(a[0][1]*a[2][2]-a[0][2]*a[2][1]));
    b[1][1]=(a[0][2]*a[2][0]-a[0][0]*a[2][2]);
    b[1][2]=(-1*(a[0][0]*a[2][1]-a[0][1]*a[2][0]));
    b[2][0]=(a[0][1]*a[1][2]-a[0][2]*a[1][1]);
    b[2][1]=(-1*(a[0][0]*a[1][2]-a[0][2]*a[1][0]));
    b[2][2]=(a[0][0]*a[1][1]-a[0][1]*a[1][0]);
        
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%.2f\t",b[i][j]/det);
        }
        printf("\n");
    }    
}
void inverse2()
{
    int a[2][2],b[2][2],i,j,k;
    float c[2][2],det;
    printf("Enter the elements for 2*2 matrix:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    det=(a[0][0]*a[1][1]-a[0][1]*a[1][0]);
            
    if(det==0)
    {
        printf("Inverse not possible!!!!\n");
        exit(99);
    }
     
    b[0][0]=a[1][1];
    b[0][1]=((-1)*a[0][1]);
    b[1][0]=((-1)*a[1][0]);
    b[1][1]=a[0][0];
        
    printf("The inverse of given 2*2 matrix is displayed below:\n");
        
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%.2f\t",b[i][j]/det);
        }
        printf("\n");
    }
}
int main()
{   
    int ch,ih;
    printf("\n\n\n");
    printf("****** Simple Program for different calculation of Matrix ******\n\n");
    while(1){
    printf("\n______________________________\n1. For Sum\n______________________________\n2. For difference\n______________________________\n3. For multiplication\n______________________________\n4. For transpose\n______________________________\n5. For Square\n______________________________\n6. For Inverse\n______________________________\n7. Exit\n______________________________\nChoose Option: ");
    scanf("%d",&ch);
    switch(ch)
    {   
        case 1: sum();
            break;
        case 2: difference();
            break;
        case 3: multiply();
            break;
        case 4: trasnpose();
            break;
        case 5: square();
            break;
        case 6: 
                {
                printf("\n");
                printf("\n______________________\n");
                printf("1. For 2*2\n______________________\n");
                printf("2. For 3*3\n______________________\n");
                scanf("%d",&ih);
                switch(ih)
                {
                case 1: inverse2();
                    break;
                case 2: inverse3();
                    break;
                }
                }
                
            case 7:
            {
                exit(1);
            }
    }
    }
    return 0;
}