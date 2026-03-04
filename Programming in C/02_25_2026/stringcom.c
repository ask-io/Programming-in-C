//Compare two strings using strcmp
#include <stdio.h>
#include <string.h>

int main(){
	char s1[50], s2[50];

	printf("Enter your string 1: ");
	scanf("%s", s1);
        printf("Enter your string 2: ");
        scanf("%s", s2);
	if(strcmp(s1,s2) == 0){
		printf("Both the strings are same \n");
	}
	else{
		printf("Both strings are not same \n");
	}
	return 0;
}
