#include <iostream>
#include <cstdlib>
#include <cmath>
#include <Windows.h>




int main()
{
	char op; // operator
	float zahl1 = 0.0f; // erster operand
	float zahl2 = 0.0f; // zweiter operand
	float result = 0.0f; // ergebnis


	std::cout << R"(
   _____          _               
  / ____|        (_)              
 | |     __ _ ___ ___      _____  
 | |    / _` / __| \ \ /\ / / _ \ 
 | |___| (_| \__ \ |\ V  V / (_) |
  \_____\__,_|___/_| \_/\_/ \___/ 
                                  
                                       
)" << '\n';

	Sleep(500);
	system("cls");
	std::cout << "Bitte einen Operator eingeben: \n";
	std::cin >> op; // input vom operator
	std::cout << "Bitte erste Zahl eingeben: \n"; std::cin >> zahl1; // input vom ersten operand

	switch (op) {


	case '+':

		std::cout << "Und nun ihre zu addierende Zahl: \n"; // angepasste anfrage
		std::cin >> zahl2; // input vom zweiten operand
		break;


	case '-':

		std::cout << "Und nun ihre zu subtrahierende Zahl: \n"; // angepasste anfrage
		std::cin >> zahl2; // input vom zweiten operand
		break;

	case ':':

		std::cout << "Und nun ihre zu dividierende Zahl: \n"; // angepasste anfrage
		std::cin >> zahl2; // input vom zweiten operand
		break;

	case 'x':

		std::cout << "Und nun ihre zu multiplizierende Zahl: \n"; // angepasste anfrage
		std::cin >> zahl2; // input vom zweiten operand
		break;

	case '^':

		std::cout << "Und nun ihre zu Potenzierende Zahl: \n"; // angepasste anfrage
		std::cin >> zahl2; // input vom zweiten operand
		break;
	}

	switch (op) { // Berechnung

	case '+':

		result = zahl1 + zahl2;
		break;

	case '-':

		result = zahl1 - zahl2;
		break;

	case ':':

		result = zahl1 / zahl2;
		break;

	case 'x':

		result = zahl1 * zahl2;
		break;

	case '^':

		result = pow(zahl1, zahl2);
		break;
	}

	std::cout << "Ihre ergebnis lautet: " << result << " \n";

	system("pause");
	return main(); // Return zum Anfang 
}

// 22/11/2023