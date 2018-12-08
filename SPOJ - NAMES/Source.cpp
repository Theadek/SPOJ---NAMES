#include "iostream"
#include "string"
#include "algorithm"



using namespace std;
int main() {

	//1. imie nazwisko
	string buffor;
	string str;
	cin >> buffor >> buffor >> str;

	transform(str.begin(), str.end(), str.begin(), ::toupper);
	cout << str;


	return 0;
}