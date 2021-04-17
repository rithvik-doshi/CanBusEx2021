#include <iostream>
#include <math.h>
#include <string>
using std::cout;
using std::string;

int main(int argc, char **argv){
	int num;
	try {
		//cout << argv[1] << "\n";
		num = atoi(argv[1]);
	}
	catch (...) {
		cout << "Invalid input\n";
		return 1;
	}

	//Decimal to Binary

	string bin;
	while (num > 0){
		bin = (num%2==0?"0":"1")+bin;
		num/=2;
	}
	int binnum = stoi(bin);

	// cout << binnum << "\n";

	string SOF = "0";
	string ID = new char[11];
	string RTR = "1";
	string control = new char[6];
	string data = bin;
	string CRC = "0000000000000000";
	string ACK = "00";
	string EOF = new char[7];

	return 0;
}