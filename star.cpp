#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
	for (size_t i = 0; i < 5; i++) {
		for (size_t j = 0; j < 5-i; j++) {
			cout << " ";
		}
		for (size_t k = 0; k < (( i * 2 ) + 1); k++) {
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
