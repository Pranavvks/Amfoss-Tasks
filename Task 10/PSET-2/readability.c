#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
int main (void)
{
    // Part-I of readability counts number of letters :
    string s = get_string("Text:  ");
    int letter=0 , words =1 , sentence=0 ;
    for(int i=0 , n=strlen(s);i<n;i++)
        {
     if (isalpha(s[i]))
        {
            letter ++ ;
         }
         
       // Part-II of readability counts number of words :
    if(isspace(s[i]))
        {
        words++ ;
    }
    if(s[i]=='.'|| s[i]=='?'|| s[i]=='!')
    {
        sentence ++ ;
    }
        }
//   printf("%i, %i, %i",letter , words, sentence);
   
  // To implement  
  float L = 100*(letter/(float)words);
  float S = 100*(sentence/(float)words);
  int index = 0.0588 * L - 0.296 * S - 15.8 ;
  int grade = ceil(index);
  if(grade<1)
  {
      printf("Before Grade 1\n");
  }
  else if (grade>16)
  {
      printf("Grade greater than 16\n");
  }
  else
  {
      printf("Grade: ");
      printf("%i\n",grade+1);
  }
}
