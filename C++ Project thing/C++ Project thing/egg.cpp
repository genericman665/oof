#include <iostream>
#include <string>
#include <fstream>
#include <random>
#include <vector>

using namespace std;

/*int main(int argc, char** argv) {
	cout << "Hello world, type a word." << endl;
	string in;
	cin >> in;
	cout << "Thanks for your input." << endl;
	ofstream fout;
	fout.open("output.txt", ios::app);
	if (fout.fail()) {
		cerr << "Failed to open file" << endl;
		system("pause");
		return 1;
	}
	fout << in << endl;
	fout.close();
	ifstream fin;
	fin.open("input.txt");
	if (fin.fail()) {
		cerr << "Failed to open file" << endl;
		system("pause");
		return 2;
	}
	string in_1;
	fin >> in_1;
	cout << in_1 << endl;
	fin.close();
	system("pause");
	return 0;
}*/

void swap(int&, int&);

void selection_sort(vector<int>&);

int main(int argc, char** argv) {
	random_device generator;
	uniform_int_distribution<> distribution(0, 1000);
	vector<int> list;
	for (int i = 0; i < 10; ++i) {
		list.push_back(distribution(generator));
		cout << list[i] << ", ";
	}
	cout << endl;
	selection_sort(list);
	for (int i = 0; i < 10; ++i) {
		cout << list[i] << ", ";
	}
	cout << endl;
	system("pause");
	return 0;
}

void swap(int& a, int& b) {
	int c = a;
	a = b;
	b = c;
}

void selection_sort(vector<int>& input) {
	for (size_t i = 0; i < input.size() - 1; ++i) {
		int mindex = i;
		for (size_t j = i; j < input.size(); ++j) {
			if (input[j] < input[mindex]) {
				mindex = j;
			}
		}
		if (mindex != i) {
			swap(input[mindex], input[i]);
		}
	}
}