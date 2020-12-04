#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for(int i=0 ; i<height;i++)
    {
        for(int j=0 ; j<width ; j++)
        {
            RGBTRIPLE pixel = image[i][j];
            int average = round((pixel.rgbtRed+pixel.rgbtGreen+pixel.rgbtBlue)/3.0);
            image[i][j].rgbtRed=average;
            image[i][j].rgbtGreen=average;
            image[i][j].rgbtBlue =average;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for(int i=0 ; i<height ; i++)
    {
        for(int j=0 ; j<width ; j++)
        {
            RGBTRIPLE pixel = image[i][j];
            int SepiaRed =round(.393*pixel.rgbtRed + .769*pixel.rgbtGreen + .189*pixel.rgbtBlue);
            int SepiaGreen=round(.349*pixel.rgbtRed +.686 * pixel.rgbtGreen +.168*pixel.rgbtBlue);
            int SepiaBlue = round(.272*pixel.rgbtRed + .534*pixel.rgbtGreen + .131 *pixel.rgbtBlue);
            if(image[i][j].rgbtRed > 255)
            {
                image[i][j].rgbtRed=255;
            }
            else
            {
                image[i][j].rgbtRed=SepiaRed ;
            }
             if(image[i][j].rgbtBlue > 255)
            {
                image[i][j].rgbtBlue=255;
            }
            else
            {
                image[i][j].rgbtBlue=SepiaBlue ;
            }
             if(image[i][j].rgbtGreen > 255)
            {
                image[i][j].rgbtGreen=255;
            }
            else
            {
                image[i][j].rgbtGreen=SepiaGreen ;
            }
            
        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    RGBTRIPLE temp [height][width];
      for(int i=0 ; i<height ; i++)
    {
        int current_pos = 0 ;
        for(int j=width-1 ; j>=0; j-- , current_pos ++)
        {
            temp[current_pos]=image[i][j];
        }
  
      for(int i=0 ; i<height ; i++)
    {
        
        for(int j=0 ; j<width ; j++)
        {
            image[i][current_pos]=temp[i][j];
        }
// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    Counter = 0 ;
    for(int i =0 ; i<height ; i++)
     {
         for(j=0 ; j<width ; j++)
         {
             newimage[i][j]=image[i][j];
         }
     }
if(i-1 >= 0 && j+1 < width)
{
    totalred += image[i-1][j+1].rgbtRed;
    totalblue += image[i-1][j+1].rgbtBlue;
    totalgreen+=image[i-1][j+1].rgbtGreen;
    Counter ++ ;
}
if(j+1<width)
{
    totalred += image[i+1][j].rgbtRed;
    totalblue += image[i+1][j].rgbtBlue;
    totalgreen+=image[i+1][j].rgbtGreen;
    Counter ++ ;
}
else
{
totalRed += image[i[j].rgbtRed ;
totalBlue += image[i][j].rgbtBlue;
totalGreen += image[i][j].rgbtGreen ;
  Counter ++ ;
}
newImage[i][j].rgbtRed = round(totalRed / Counter);
newImage[i][j].rgbtBlue = round(totalBlue / Counter);
newImage[i][j].rgbtGreen = round(totalGreen / Counter);

 if(image[i][j].rgbtRed > 255)
            {
                image[i][j].rgbtRed=255;
            }
            else
            {
                image[i][j].rgbtRed=SepiaRed ;
            }
             if(image[i][j].rgbtBlue > 255)
            {
                image[i][j].rgbtBlue=255;
            }
            else
            {
                image[i][j].rgbtBlue=SepiaBlue ;
            }
             if(image[i][j].rgbtGreen > 255)
            {
                image[i][j].rgbtGreen=255;
            }
            else
            {
                image[i][j].rgbtGreen=SepiaGreen ;
            }
    
for(int k=0 ; k<height ; k++)
{
    for(int l=0 ; l<height ; l++ )
    {
        image[a][b].rgbtBlue=newImage[a][b].rgbtBlue;
        image[a][b].rgbtRed =newImage[a][b].rgbtRed;
        image[a][b].rgbtGreen=newImage[a][b].rgbtGreen
    }
}
return ;
}

   
    
