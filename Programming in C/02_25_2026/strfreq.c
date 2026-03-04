//Character frequency count in a string ignore case sensitivity and ignore other characters
#include <stdio.h>
#include <ctype.h>

int main(){
	char s1[50], lower;
	int i, count[26]={0};
    printf("Enter your string: ");
    scanf("%s", s1);
	for(i=0; s1[i]!='\0'; i++){
		lower = tolower(s1[i]);
		if(lower >= 'a' && lower <= 'z'){
			count[lower - 'a']++; //(lower - ASCII value of 'a') gives index of count array
		}
	}
	printf("\nCharacter Frequency:\n");
    for(i = 0; i < 26; i++) {
        if(count[i] > 0) {
            printf("%c : %d\n", i + 'a', count[i]);
		}
	}

	return 0;
}
