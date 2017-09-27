/*
Noosrat Rahman 9/25/2017 2nd period

Take In Data

Display Data, Accept User Response, Display changed data

*/

#include <iostream>
#include <conio.h>

using namespace std;

void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';

}

void main() {
	int too_many_hamburgers;
		char answer_choice;
	bool answersmatched = false;
	double guesspi;
	int calc_1, calc_2, calc_3, calc_4, calc_5, calc_6;

		cout << "How many hamburgers are too many for small \"children\" : ";
		cin >> too_many_hamburgers;
		cout << "What answer did you get for number 32 (a/b/c/d/e) : ";
		cin >> answer_choice;
		if (answer_choice == 'e') {
			answersmatched = true;
	}
		cout << "Guess what pi is :";
		cin >> guesspi;
		cout << "Give me 5 random whole numbers : " << "\n";
		cout << "Number 1 : ";
		cin >> calc_1;
		cout << "Number 2 : ";
		cin >> calc_2;
		cout << "Number 3 : ";
		cin >> calc_3;
		cout << "Number 4 : ";
		cin >> calc_4;
		cout << "Number 5 : ";
		cin >> calc_5;

		cout << "I think that " << too_many_hamburgers << " is too many for small children \n";
		cout << boolalpha << "I think that is " << answersmatched << " for question 32" << endl;
		cout << "So you think pi is : " << guesspi << endl;

		cout << calc_1 << " + " << calc_2 << " = " << calc_1 + calc_2 << endl;
		cout << calc_4 << " * " << calc_5 << " = " << calc_4 * calc_5 << endl;

		pause();



}

