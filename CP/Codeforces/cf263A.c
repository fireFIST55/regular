#include<stdio.h>
int row_gtr(int array[][5],int row);
int col_gtr(int array[][5],int col);
int row_sml(int array[][5],int row);
int col_sml(int array[][5],int col);
int main(void)
{
    int array[5][5];
    int i,j,row,col,x,temp[5],total=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&array[i][j]);
            if(array[i][j]==1)
            {
                row=i;
                col=j;
            }
        }
    }
    if(row>2&&col>2)
    {
        total=row_gtr(array,row);
        total+=col_gtr(array,col);
    }
    else if(row<2&&col<2)
    {
        total=col_sml(array,col);
        total+=row_sml(array,row);
    }
    else if(row>2&&col<2)
    {
        total=row_gtr(array,row);
        total+=col_sml(array,col);
    }
    else if(row<2&&col>2)
    {
        total=row_sml(array,row);
        total+=col_gtr(array,col);
    }
    else if(row==2&&col==2)
    {
        total=total;
    }
    else if(row>2&&col==2)
    {
        total=row_gtr(array,row);
    }
    else if(row==2&&col>2)
    {
        total=col_gtr(array,col);
    }
    else if(row==2&&col<2)
    {
        total=col_sml(array,col);
    }
    else if(row<2&&col==2)
    {
        total=row_sml(array,row);
    }
    printf("%d",total);
    return 0;
}
int row_gtr(int array[][5],int row)
{
    int temp[5],i,j,result=0;
    for(i=row;i>2;i--)
    {
        for(j=0;j<5;j++)
        {
            temp[j]=array[i][j];
            array[i][j]=array[i-1][j];
            array[i-1][j]=temp[j];
        }
        result++;
    }
    return result;
}
int col_gtr(int array[][5],int col)
{
    int i,j,temp[5],result=0;
    for(i=col;i>2;i--)
    {
        for(j=0;j<5;j++)
        {
            temp[j]=array[j][i];
            array[j][i]=array[j][i-1];
            array[j][i-1]=temp[j];
        }
        result++;
    }
    return result;
}
int row_sml(int array[][5],int row)
{
    int i,j,temp[5],result=0;
    for(i=row;i<2;i++)
    {
        for(j=0;j<5;j++)
        {
            temp[j]=array[i][j];
            array[i][j]=array[i+1][j];
            array[i+1][j]=temp[j];
        }
        result++;
    }
    return result;
}
int col_sml(int array[][5],int col)
{
    int i,j,temp[5],result=0;
    for(i=col;i<2;i++)
    {
        for(j=0;j<5;j++)
        {
            temp[j]=array[j][i];
            array[j][i]=array[j][i+1];
            array[j][i+1]=temp[j];
        }
        result++;
    }
    return result;
}

