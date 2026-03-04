//Reverse a string
#include <stdio.h>
int main(){

	char s[50], s1[50];
	int i, l=0;
	printf("Enter your string: ");
	scanf("%s", s);
	for(i=0; s[i]!='\0'; i++){
		l++;
	}
        for(i=0;i<l;i++){
                s1[i]=s[l-1-i];
        }

	printf("%s\n", s1);
	return 0;
}
