//Henry Samala
//Random Final Presentation Date
//SID #3522
//11.14.22

int randomStorage[3][24];

#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 
#include <stdbool.h>

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
			system("pause");
			break;


		case 'y':
			printf("\n\n\t[Resuming Program...]\n\n");
			system("pause");
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
int errorCheckRandom(int num[], int i, int newNum, bool test) {
	for (int x = 0; x < i; x++) { //for loops checks if generated number is equal to any number in array
		if (num[x] == newNum) {
			test = false;
		}
	}
	return test;
}
int uniqueNumber (int input[]) {
	int newNum;
	bool test;

	for (int i = 0; i < 24; i++) { //generates number according to i count
		do {
			newNum = (rand() % 24) + 1; //generates random number from 1- 60
			test = true;
			test = errorCheckRandom(input, i, newNum, test);

		} while (!test);
		input[i] = newNum; //places number into array
	}
}
int matrixPlacement(int input[], int outputTrack) {
	for (int i = 0; i < 24; i++) {
		randomStorage[outputTrack][i] = input[i];
	}
}
int printingMatrix(int input[3][24]) {
	printf("\n\n\tRandom Numbers Generated:");
	for (int i = 0; i < 3; i++) {
		printf("\n\t#%d Run: ", i+1);
		for (int x = 0; x < 24; x++) {
			printf("%-4d", input[i][x]);
		}
	}
}

int printingList(char ssid[24][6], int randomNumbers[], int listCount) {


	printf("\n\n\t[List Number #%d]", listCount + 1);
	for (int row = 0; row < 24; row++) {

		printf("\n\t# ");
		for (int column = 0; column < 6; column++) {
			printf("%c", ssid[row][column]);
		}
		printf(" is presenter #%3d on", randomNumbers[row]);

		if (randomNumbers[row] >= 1 && randomNumbers[row] <= 8) {
			printf(" 11_30");
		}
		else if (randomNumbers[row] >= 9 && randomNumbers[row] <= 16) {
			printf(" 12_5");
		}
		else if (randomNumbers[row] >= 17 && randomNumbers[row] <= 24) {
			printf(" 12_7");
		}
	}
}

int main(void) {
	int randomOutput[24];
	bool programContinue;
	char ssidStorage[24][6] = {"3800", "2467", "0992", "3761", "4896", "2044", "5455", "8739", "3250", "1383", "1672", "4954", "7191", "7501",
		"2838", "3323", "5750", "3522", "6728", "7496", "6116", "9578", "6974", "6858"};

	do {
		programContinue = true;

		for (int i = 0; i < 3; i++) {
			uniqueNumber(randomOutput);
			matrixPlacement(randomOutput, i);

			printingList(ssidStorage, randomOutput, i);
		}
		printingMatrix(randomStorage);
		programContinue = programRestart();

	} while (programContinue);

	systemPause();
}
