#include "iostream"
#include "string"
#include <algorithm>
#include <vector>

using namespace std;

struct Node {
	string name;
	int numbers_of_instances;
	Node(string name) {
		this->name = name;
		numbers_of_instances = 1;
	}
};


int main() {

	//No. Surname Name
	vector<Node> tab;
	string str;
	while (cin >> str >> str >> str) {
		transform(str.begin(), str.end(), str.begin(), ::toupper);
		for (Node n : tab) {
			if (n.name == str) {
				n.numbers_of_instances++;
				break;
			}
		}



	}
	cout << str;

	return 0;
}