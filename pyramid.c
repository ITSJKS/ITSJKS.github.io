#include<stdio.h>
int main(int argc, char const *argv[]){
    int i,j,rows,columns, num=1;
    printf("Enter number of rows and columns\n");
    scanf("%d,%d",&rows,&columns);
for(int i=1; i<=rows; i++)
{

for(int j=1; j<=i; j++)
{
    printf(" %d ",num++);    
}
printf("\n");
}
return 0;
}
