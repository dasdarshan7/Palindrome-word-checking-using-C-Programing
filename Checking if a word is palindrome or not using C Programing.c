// Checking if a word is palindrome or not using C Programing

#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000];  
    int i,n,c=0;
 
    printf("Enter a word : ");
    gets(s);
    
// Reversing the word 
    n=strlen(s);
  for(i=0;i<n/2;i++)  
    {
    	if(s[i]==s[n-i-1])
    	c++;
 	}

// Palindrome if orignal and reversed are equal
 	if(c==i)
 	    printf("%s is a palindrome word",s);
    else
        printf("%s is not a palindrome word",s);
    
	getch();
    return 0;
}
