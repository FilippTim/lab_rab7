#define _USE_MATH_DEFINES // for C++
#include <cmath>
#include <iostream>
#include <regex>
#include <fstream>
#include <string>
#include <vector>
#include <map>

using namespace std;

class Settings {
public:
	static void add(string key, string value) {
		map[key] = value;
	}
	 static string Getmap(string key) {
		return(map[key]);
	}
	static void print(string key) {
		cout << Getmap(key)<<endl;
	}
public:
	 static map <std::string, string> map;
};
