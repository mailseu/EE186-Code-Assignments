//Age Math Problem
//Henry Samala
//SID # 3522
//Due Date 9.7.22

#include <stdio.h>

int main()
{
	int age, b, d, f, h, k, m, o; //integer variables 
	int c, e, g, i, j, l, n; //result variables

	float p, q, r, s; //decimal variables
	char xyz; //system pause

	b = 2;
	d = 3;
	f = 4;
	h = 5;
	k = 6;
	m = 7;
	o = 8;
	q = 9;
	s = 10;

	printf("\n\n\tEnter Age: "); //inital age statemnet
	scanf_s("%d", &age); 
		
		printf("\n\t_________________________\n");
		printf("\n\tAge Inputed = %d", age); //age = #
		printf("\n\t_________________________\n");

	c = age * b;
		printf("\n\t%d * 2 = %d", age, c); //age * 2 = #

	e = age * d;
		printf("\n\t%d * 3 = %d", age, e); //age * 3 = #
	
	g = age * f;
		printf("\n\t%d * 4 = %d", age, g); //age * 4 = #

	i = age + h;
		printf("\n\t%d + 5 = %d", age, i); //age + 5 = #

	j = age + k;
		printf("\n\t%d + 6 = %d", age, j); //age + 6 = #

	l = age - m;
		printf("\n\t%d - 7 = %d", age, l); //age - 7 = #

	n = age - o;
		printf("\n\t%d - 8 = %d", age, n); //age - 8 = #

	p = age / q;
		printf("\n\t%d / 9 = %.2f", age, p); //age / 9 = #

	r = age / s;
		printf("\n\t%d / 10 = %.2f", age, r); //age / 10 = #
		
		printf("\n\t_________________________");


		//system pause

	while ((xyz = getchar()) != '\n' && xyz != EOF)
		xyz = getchar();
	getchar();

	return 0;

}
