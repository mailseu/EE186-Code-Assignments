//Henry Samala
//Midterm Question #3
//SID #3522
//10.6.22

#include <stdio.h>

int main() {

	int num, i;

	printf("\n\tHow many times do you want to repeat your mantra:  ");
	scanf_s("%d", &num);

	printf("\n\tNumber inputed = %d", num);

	for (i = 0; i < num; i++) {
		printf("\n\n\tI am enjoying my EE186 class\n\tI am\n\tgoing to do\n\tgreat \n\ton this test\n\tbecause\n\tI studied\n\thard\n\tinstead of\n\tpartying");
	}

	// system pause -- leo
	char xyz;
	while ((xyz = getchar()) != '\n' && xyz != EOF)
		xyz = getchar();
	getchar();

	//system pause -- leo

	return 0;
}
