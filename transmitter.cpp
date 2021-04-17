#include <iostream>
#include <math.h>
#include <string>
#include <fstream>
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
	//int binnum = stoi(bin);

	// cout << binnum << "\n";

	string SOF = "0"; //look up
	string ID = "00100110010"
	string RTR = "1";
	string control = "000000"
	string data = bin;
	string CRC = "0000000000000000";
	string ACK = "00";
	string EOF = "0000000"

	string CAN_message = SOF+ID+RTR+control+data+CRC+ACK+EOF;

	std::ifstream file("can_buffer.txt");
	

	return 0;
}