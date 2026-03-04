//To read strings and display them using various methods
#include<stdio.h>

int main() {
	char name[50], c;
	printf("--Using scanf and printf---\n");
	printf("Enter your full name: ");
	scanf("%s", name);
	printf("Your name is: %s\n", name);
	scanf("%c", &c);
        printf("\n---Using gets and puts---\n");
        printf("Enter your full name: ");
	gets(name);
        printf("Your name is: ");
	puts(name);
        scanf("%c", &c);
        printf("\n---Using fgets and puts---\n");
        printf("Enter your full name: ");
        fgets(name, sizeof(name),stdin);
        printf("Your name is: ");
        puts(name);

	return 0;
}
