#include <iostream>
#include <conio.h>
#include "My_vector.h"

using namespace std;

int main() {
	// пример работы с данным классом векторов

	Vector first_vector(3, 4, 5), second_vector(4, 6, 8);
	Vector third_vector = first_vector + second_vector;
	Vector fourth_vector = first_vector - second_vector;
	third_vector.vectShowParams();
	fourth_vector.vectShowParams();
	_getch();
	return 0;
}