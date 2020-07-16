//Practice Program
//Ian Maze
//Calculate Monthy Paycheck

#include <iostream>
#include <string>
using namespace std;

int main() {
	int pay, hours, answer;
	
	cout << "How much are you paid per hour?\n";
	cin >> pay;

	cout << "\nHow many hours do you work a month?\n";
	cin >> hours;

	answer = pay * hours;

	cout << "\nYour monthly paycheck before taxes is " << answer << " dollars";
	return 0;
}