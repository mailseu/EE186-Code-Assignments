//Moive Age Code
//Henry Samala
//SID # 3522
//Due Date 9.21.22

#include <stdio.h>

int main() {

	int age;

	printf("\n\n\tHow old are you?:");
	scanf_s("%d", &age);

	printf("\n\t___________________________________________");
	printf("\n\n\tSince you are %d Years Old.", age); 
	printf("\n\tYou can watch the following rated Movies:");

	if (age <= 0) {
		printf("\n\n\t%d IS AN INVALID AGE", age);
	}
	else if (age > 0 && age <= 10 ) {
		printf("\n\n\t* Baby");
	}
	else if (age <= 20) {
		printf("\n\n\t* Baby");
		printf("\n\t* Teen");
	}
	else if (age <= 40) {
		printf("\n\n\t* Baby");
		printf("\n\t* Teen");
		printf("\n\t* Adult");
	}
	else if (age <= 60) {
		printf("\n\n\t* Baby");
		printf("\n\t* Teen");
		printf("\n\t* Adult");
		printf("\n\t* Adult+");
	}
	else {
		printf("\n\n\t* Baby");
		printf("\n\t* Teen");
		printf("\n\t* Adult");
		printf("\n\t* Adult+");
		printf("\n\t* Adult++");
	}
	printf("\n\n\t___________________________________________");
	printf("\n\n");

	//system pause

	char xyz;
	while ((xyz = getchar()) != '\n' && xyz != EOF)
		xyz = getchar();
	getchar();

	return 0;
}
