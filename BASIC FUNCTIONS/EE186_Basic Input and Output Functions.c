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
int characterCheck(char input[]) { //provided chracter checker by me (henry samala)
	bool charInput = true;
	int stringLength;

	stringLength = strlen(input);

	for (int i = 0; i < stringLength; i++) {
		if (isalpha(input[i])) {
			printf("\t[Input Invalid, Please Try Again]\n");
			charInput = false;
			break;
		}
	}
	return charInput;
}
int userInputDIGIT() { //provided digit input by me (henry)
	char userInput[10];
	bool flagInput, validInput;
	int valueOutput;

	do {
		flagInput = true;
		validInput = true;

		do {

			printf("\n\n\tInput: ");
			scanf_s("%s", &userInput, 10);
			sscanf_s(userInput, "%d", &valueOutput);

			validInput = characterCheck(userInput);

		} while (!validInput);

		if (valueOutput < 0 || valueOutput > 9) { //change according to input reqiurements
			printf("\t[Input Invalid, Please Try Again]");
			flagInput = false;
		}

	} while (!flagInput);
	printf("\n\t[User Inputed Value = %d]\n", valueOutput);
	return valueOutput;
}
int userInputCHARACTER() { //provided character input by me (henry)
	char userInput[10], valueOutput;
	bool flagInput, validInput;

	do {
		flagInput = true;
		validInput = true;

		do {

			printf("\n\n\tInput: ");
			scanf_s("%s", &userInput, 10);
			sscanf_s(userInput, "%c", &valueOutput);

			validInput = digitCheck(userInput);

		} while (!validInput);

		if ((valueOutput < 65 || valueOutput > 90) && (valueOutput < 97 || valueOutput > 122)) { //change according to input reqiurements A-Z and a-z (ascii code)
			printf("\t[Input Invalid, Please Try Again]");
			flagInput = false;
		}

	} while (!flagInput);
	printf("\n\t[User Inputed Value = %c]\n", valueOutput);

	return valueOutput;
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
