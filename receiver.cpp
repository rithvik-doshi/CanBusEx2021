#include <iostream>
#include <math.h>
#include <string>
#include <fstream>
using std::cout;
using std::string;
using std::to_string;
using std::ifstream;
using std::ofstream;

int main(){
	ifstream in;
	in.open("can_buffer.txt");
	string message;
	in >> message;
	cout << message << "\n";
	in.close();

	string ID = message.substr(1, 11);
	string data = message.substr(19, 6);

	cout << "ID: " << ID << "\nData: " << data << "\n";

	ofstream out("can_buffer.txt");
	out.close();
	return 0;
}