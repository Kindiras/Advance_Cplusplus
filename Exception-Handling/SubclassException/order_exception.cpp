#include <iostream>
#include <exception>
using namespace std;

void Detection() {
	bool err1 = true;
	bool err2 = false;

	if (err1) {
		throw bad_alloc();
	}

	if (err2) {
		throw exception();
	}
}

int main() {

	try {
		Detection();
	} catch (bad_alloc &e) {
		cout << "Catching bad_alloc: " << e.what() << endl;
	} catch (exception &e) {
		cout << "Catching exception: " << e.what() << endl;
	}

	return 0;
}
