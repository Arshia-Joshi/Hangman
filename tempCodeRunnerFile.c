#include<stdio.h>
#include<string.h>

void swap(char word1,char word2,char temp1)
{
	temp1=word1;
	word1[i]=word2[i];
	word2=temp1;

}



int main()
{
	char word1[3];
	char word2[3];
	chat temp1=0;
	printf("Enter 1st word:");
	scanf("%s",word1);
	printf("\n Enter 2nd word:");
	scanf("%s",word2);
	swap(word1,word2,temp1);
	printf("s ","s ",word1,word2);

	return 0;
}