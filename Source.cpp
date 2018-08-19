#include <iostream>
#include <ctime>
#include <thread>
#include <chrono>
using namespace std;

int main() {
	int randomNumber;
	for (int counter = 0; counter < 10; counter = counter + 1) {
		srand(time(NULL));
		randomNumber = rand() % 50;
		cout << randomNumber << endl;
		this_thread::sleep_for(chrono::seconds(2));
	}
	system("PAUSE");
	return 0;
}
