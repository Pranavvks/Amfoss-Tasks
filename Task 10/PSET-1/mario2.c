#include<cs50.h>
#include<stdio.h>
int main(void)
{
// For left pyramid
for(int i=0;i<5;i++) // No of rows
{
    for(int j=0;j<=5-i-1;j++)
    {
        printf(" "); // No of spaces
    }
    // Right sided pyramid
for(int j=0;j<=i;j++) 
{
    printf("#");
}
for(int j=2;j<3;j++)
{
    printf("  "); // Constant no of spaces 
}
for(int j=0;j<=i;j++)
 {
  printf("#");   
 }
 printf("\n");
} 
}