#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<math.h>


int count_letters(char text0[]);
int count_words(char text1[]);
int count_sentences(char text2[]);

int main(void)
    {
        string x = get_string("Enter your text here:\n");
        int y=count_letters(x);
        int z=count_words(x);
        int a= count_sentences(x);
        float W=(float)z/100;
        float L=(y)/W;
        float S=(a)/W;
        float index = (0.0588 * L) - (0.296 * S) - (15.8);
        int ind = round(index);
        printf("Grade: %d \n",ind);
        //printf("number of letters are : %i \n",y);
        //printf("number of words are : %i \n",z);
        //printf("number of sentences: %i\n",a);
        //printf("L: %f \n",W);
        //printf("S: %f \n",S);

    }


int count_letters(char text0[]) // counts letters in a string
    {
        int count0=0;
        int len0=strlen(text0);
        for(int i=0;i<=len0;i++)
            {
                if ( ((int)text0[i]>=65 && (int)text0[i]<=90) ||((int)text0[i]>=97 && (int)text0[i]<=122) )
                    {
                        count0=count0+1;
                    }
                else continue;
            }
        return count0;
    }
int count_words(char text1[])
    {
        int count1=1;
        int len1=strlen(text1);
        for(int j=0;j<=len1;j++)
            {
                if ((int)text1[j]==32)
                    {
                        count1 +=1;
                    }
                else continue;
            }
        return count1;
    }
int count_sentences(char text2[])
    {
        int count2=0;
        int len2=strlen(text2);
        for (int k=0;k<=len2;k++)
            {
                if ((int)text2[k]==33||(int)text2[k]==46||(int)text2[k]==63)
                    {
                        count2 +=1;
                    }
                    else continue;
            }
        return count2;
    }
