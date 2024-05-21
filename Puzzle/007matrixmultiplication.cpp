#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main() {
	vector<int> matrixA, matrixB;
	string dimensionA, dimensionB;

	cout << "dimension of matrix A (eg: 2*3): ";
	getline(cin, dimensionA);
	stringstream bacastring(dimensionA);
	string container;
	while (getline(bacastring, container, '*')) {
		matrixA.push_back(stoi(container));
	}

	cout << "dimension of matrix B (eg: 2*3): ";
	getline(cin, dimensionB);
	bacastring(dimensionB);
}