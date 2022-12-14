#define _USE_MATH_DEFINES // for C++
#include <cmath>
#include <iostream>
#include <regex>
#include <fstream>
#include <string>
#include <vector>
#include "Header.h"



using namespace std;

void func1(vector<float> v0) {
	for (int i = 0; i < v0.size(); i++) { cout << v0[i] << endl; }
	cout << "----------\n";
}

void z1() {
	//Вопрос 1
	setlocale(LC_ALL, "rus");
	cout << "Введите строку: ";
	string str1;
	cin >> str1; cout << endl;
	cout << "Подстрока с символами со 2-го по 4-й включительно: " << str1.substr(1, 3) << endl;
	if ((str1.find('a'))) cout << "Символа a не найдено" << endl;
}
void z2() {
	//Вопрос 2
	setlocale(LC_ALL, "rus");

m1:cout << "Введите свое имя на латинице: ";
	string name;
	cin >> name;
	regex reg1("^[A-Z][a-z]{1,19}$");
	if (regex_search(name, reg1)) {
	}
	else {
		goto m1;
	}

}
void z3() {
	//Вопрос 3
	cout << "Введите радиус окружности: ";
	int r;
	cin >> r;
	double l;
	l = 2 * M_PI * r;
	cout << "Длина окружности = " << l << endl;
	double rl = trunc(l * 1000 + 0.5) / 1000;
	cout << "Длина окружности, округленная до трех знаков = " << rl << endl;
	string str3;
	fstream file1;
	string data;
	string line;
	//const int count = 0;
	bool flag = true;
	while (flag) {
		cout << "Введите произвольную строку: ";
		cin >> str3;

		if (str3 == "exit") {
			flag = false;
		}
		else if (str3 == "read") {
			file1.open("new_file.txt", ios::in);
			while (getline(file1, line)) {
				data += line + "\n";
			}
			file1.close();
			cout << data << endl;
		}
		else if (str3 == "erase") {
			file1.open("new_file.txt", ios::out);
			file1.close();
		}
		else {
			file1.open("new_file.txt", ios::app);
			file1 << str3 << endl;
			file1.close();
		}
	}
}


void z4() {
	vector<float> v1;
	for (int i = 0; i <= 4; i++) { v1.push_back(i); }
	func1(v1);
	auto i = v1.begin();
	i++;
	i++;
	i++;
	v1.insert(i, -100); func1(v1);
	v1.pop_back(); func1(v1);

	string test_string1 = "Анатолий";
	string test_string2 = "Хорошенький мальчик";

	string test_string1_2 = "Семенчик";
	string test_string2_2 = "Тоже очень хорошенький мальчик";

	Settings* test1 = new Settings();
	test1->add(test_string1, test_string2);
	test1->print(test_string1);

	Settings* test2 = new Settings();
	test1->add(test_string1_2, test_string2_2);
	test1->print(test_string1_2);
	cout << "*********" << endl;
	cout << Settings::map["Семенчик"] << endl;
	cout << Settings::map["Анатолий"] << endl;
}



std::map<std::string, std::string> Settings::map;

void main(){
	setlocale(LC_ALL, "rus");
	//Вопрос 1
	//z1();

	//Вопрос 2
	//z2();
	//Вопрос 3
	//z3();
	//Вопрос 4
	//z4();
	bool flag0 = false;
	while (!flag0) {
		cout << "Выберите номер задания (1, 2, 3, 4) -> ";
		int n;
		cin >> n;
		if (n == 1) { z1(); flag0 = true;}
		else if (n == 2) { z2(); flag0 = true;}
		else if (n == 3) { z3(); flag0 = true;}
		else if (n == 4) { z4(); flag0 = true;}
		else { cout << "Вероятно вы опечатались" << endl; }
	}
}
