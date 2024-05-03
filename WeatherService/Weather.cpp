#include "Weather.h"

void Weather::print()
{
	cout << "Город: " << city << endl;
	cout << "Долгота: " << lon << endl;
	cout << "Широта: " << lat << endl;
	cout << "Температура: " << temperature<< endl;
	cout << "Погода: " << weather << endl;
	cout << "Скорость ветра: " << windSpeed<< endl;
	cout << "Облака: " << clouds << endl;

}
