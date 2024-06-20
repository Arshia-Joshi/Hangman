#include<stdio.h>
#include<string.h>
void game_word( int word_len,char guess_word,char word[100],char user_choice[word_len])
    {
    int i;
    int d;
    for(i=0;i<=word_len-1;i++)
    {
       // printf("\nlen: %d\ni: %d",word_len,i);
       // printf("\nguess: %c\nword_letter:%c",guess_word,word[i]);


        if(user_choice[i]!=0)
            {
                printf("%c",user_choice[i]);
            }
    
        
        else
        {
             printf("-");
        }
        
    }

    
}

int main()
{
    char word[100];
    char guess_word;
    
    int i;
    int j;
    int lives=5;

    //p1 input word
    printf("Enter the first word for p2:");
    scanf("%s",word);
    int word_len=strlen(word);
    char user_choice[word_len];
    for (int d = 0;d<word_len;d++){
        user_choice[d] = 0;
     }

   // system("cls");
   for(j=0;j<=10;j++)
   {
    printf("\nEnter letter:");
    scanf("%c",&guess_word);
    guess_word=getchar();

    int flag=0;
    for (int g=0;g<word_len;g++)
    {
        printf("\n%d",lives);
        if(guess_word == word[g])
        {
            flag = 1;
            break;
        }
        else{
            flag = 2;
        }
    }
     if(flag == 2)
    {
        lives--;
        printf("lives = %d",lives);
    }

   if(flag == 1){
    for(int h = 0;h<word_len;h++)
    {
    if (guess_word == word[h])
        {
                user_choice[h] = guess_word;
        }
    }
    
   
        /*for(,user_choiceint y=0;y<word_len;y++)
        {
            printf("\nuser_choice[%d]: %c",y,user_choice[y]);
        }*/
    game_word(word_len,guess_word,word,user_choice);
   }

     if (strcmp(word,user_choice) == 0 )
    {
         printf("\nYou won!");
        break;
    }
 
    if(lives=0)
    {
        printf("You have lost!");
        printf("%s",word);
        break;
       
    }

    
   return 0;
}
}
    