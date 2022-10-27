#include <iostream>
using namespace std;

void pyramid(int rows){
	int row = 0;
	int column = 0;
	char add_letter[2] = {' ','a'};
	string letter = "a";
	for (row; row < rows; ++row){
		cout << letter << " " << "\n";
		letter += add_letter;
	}
	
}

int main(){
	int user_input;
	cout << "How many rows for your pyramid? ";
	cin >> user_input;
	pyramid(user_input);
	cout << endl;
}	

