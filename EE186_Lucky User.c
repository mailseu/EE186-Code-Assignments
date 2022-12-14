//Henry Samala
//Lucky User Program
//SID #3522
//11.16.22

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

int digitCheck(char input[]) { //provided integer checker by me (henry samala)
	bool digitInput = true;
	int stringLength;

	stringLength = strlen(input);

	for (int i = 0; i < stringLength; i++) {
		if (isdigit(input[i])) {
			printf("\t[Input Invalid, Please Try Again]\n");
			digitInput = false;
			break;
		}
	}
	return digitInput;
}
int programRestart() { //provided by me (henry samala)
	char valueOutput;
	char userChoice[10];
	bool validInput, validEnding;

	do {
		validInput = true;

		do {

			printf("\n\n\tWould you like to conitnue program, input Y for YES, input N for NO: ");
			scanf_s("%s", &userChoice, 10);
			sscanf_s(userChoice, "%c", &valueOutput);

			validInput = digitCheck(userChoice);

		} while (!validInput);

		validEnding = true;

		switch (valueOutput) {

		case 'N':
			printf("\n\n\t[Exiting Program...]\n\n");
			validEnding = false;
			break;

		case 'n':
			printf("\n\n\t[Exiting Program...]\n\n");
			validEnding = false;
			break;

		case 'Y':
			printf("\n\n\t[Resuming Program...]\n\n");
			break;


		case 'y':
			printf("\n\n\t[Resuming Program...]\n\n");
			break;


		default:
			printf("\n\t[Invalid Input, Please Try Again]\n");
			validInput = false;
		}

	} while (!validInput);

	return validEnding;
}
int systemPause() { // system pause provided by leo
	char xyz;
	while ((xyz = getchar()) != '\n' && xyz != EOF)
		xyz = getchar();
	getchar();
}

int inputStringChar(char input[]) { //user input character string provided by me (henry samala)
	char tempInput[100];
	bool flagInput;

	do {

		flagInput = true;

		printf("\n\tWhat is your name?");
		printf("\n\tInput: ");
		gets(input, sizeof(input));
		flagInput = digitCheck(input);

	} while (!flagInput);
}
int nameCondition(char input[]) {
	int spaceCount = 0, vowelCount = 0, upperCase = 0;
	bool output = false;

	for (int i = 0; i < strlen(input); i++) {
		if (input[i] == ' ') {
			spaceCount++;
		}
		else if (input[i] == 'A' || input[i] == 'E' || input[i] == 'I' || input[i] == 'O' || input[i] == 'U') {
			vowelCount++;
		}
		else if (isupper(input[i])) {
			upperCase++;
		}
	}

	if (spaceCount = 1 && vowelCount > 3 && upperCase > 5) {
		output = true;
	}

	//uncoomment for testing
	//printf("\n\tTesting: SpaceCount = %d, VowelCount = %d, UpperCase = %d", spaceCount, vowelCount, upperCase);

	return output;
}
int testUser(bool input) {
	if (input) {
		printf("\n\t[Lucky User Found!]");
	}
	else {
		printf("\n\t[Not a lucky user...]");
	}
}

int main(void) {
	char userName[100];
	bool specialUser = false, programContinue;

	//Lucky User must input (EXACTLY 1 SPACE, MORE THAN 5 UPPERCASE LETTERS, AND MORE THAN 3 UPPERCASE VOWELS)

	do {

		programContinue = true;

		inputStringChar(userName);
		specialUser = nameCondition(userName); 
		testUser(specialUser);

		programContinue = programRestart();

	} while (programContinue);

	systemPause();
}
