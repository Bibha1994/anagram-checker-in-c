#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void sortstring1(char*);
void sortstring2(char*);
int main()
{
	char s1[100],s2[100];
	printf("enter the first string\n");
	gets(s1);
		printf("enter the second string\n");
	gets(s2);
	sortstring1(s1);
	printf("%s\n",s1);
		sortstring1(s2);
	printf("%s\n",s2);
	if(strcmp(s1,s2)==0)
	
	
	printf("the strings are anagram\n");
	else
	
	
		printf("the strings are not anagram\n");
	

	return 0;
	
}
void sortstring1(char*s1)
{
	int c,d=0,len;
	char*pointer,*result,ch;
	len=strlen(s1);
	result=(char*)malloc(len+1);
	pointer=s1;
	for(ch='a';ch<'z';ch++)
	{
		for(c=0;c<len;c++)
		{
			if(*pointer==ch)
			{
				*(result+d)= *pointer;
				d++;
			}
			pointer++;
				}
				pointer=s1;		
	}
	*(result+d)='\0';
	strcpy(s1,result);
	free(result);
	
}
void sortstring2(char*s2)
{
	int c,d=0,len;
	char*pointer,*result,ch;
	len=strlen(s2);
	result=(char*)malloc(len+1);
	pointer=s2;
	for(ch='a';ch<'z';ch++)
	{
		for(c=0;c<len;c++)
		{
			if(*pointer==ch)
			{
				*(result+d)= *pointer;
				d++;
			}
			pointer++;
				}
				pointer=s2;		
	}
	*(result+d)='\0';
	strcpy(s2,result);
	free(result);
	
}