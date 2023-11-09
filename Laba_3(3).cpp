#include <iostream>
using namespace std;

int main() {
	const int height = 10;


	for (int i = 0; i < height - 1; i++) {
		for (int j = 0; j < height - i - 1; j++) {
			cout << "   ";
		}
		for (int j = 0; j < 2 * i + 1; j++) {
			cout << "  *";
		}
		cout << "\n";
	}

	for (int i = 0; i < height; i++) {
		for (int j = 0; j < height * 2 - 1; j++) {
			cout << "  *";
		}
		cout << "\n";
	}

	return 0;
}