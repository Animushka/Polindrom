#include <iostream>
#include <string>
#include <algorithm>

/* Написать программу которая будет определять
 * является ли слово или цифра палиндромом */

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Проверить слово, является ли палиндромом" << endl;
	string text;
	cin >> text;
	if (string(text.begin(), text.end()) == string(text.rbegin(), text.rend()))
		cout << "Слово палиндром";
	else
		cout << "Не является палиндромом";
}