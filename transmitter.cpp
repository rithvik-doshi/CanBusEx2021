#include <iostream>
#include <math.h>
#include <string>
#include <fstream>
using std::cout;
using std::string;
using std::to_string;

string inttobin(long int num){
	string bin;
	while (num > 0){
		bin = (num%2==0?"0":"1")+bin;
		num/=2;
	}
	return bin;
}


int main(int argc, char **argv){
	
	string bin = inttobin(atoi(argv[1]));
	string len = inttobin(bin.size()/8);

	while (len.size() < 4){
		len = "0"+len;
	}
	//int binnum = stoi(bin);

	// cout << binnum << "\n";

	string StartOF = "0"; //Dominant Bit detected
	string ID = "00100110010";
	string RTR = "1";
	string control = ",00"+len+","; //length of data
	string data = bin+",";
	string CRC = "0000000000000000";
	string ACK = "11"; //ACK Slot: transmitter sends recessive and receiver asserts dominant, ACK delimited always recessive;
	string EndOF = "1111111";

	string CAN_message = StartOF+ID+RTR+control+data+CRC+ACK+EndOF;

	cout << CAN_message << "\n";

	//std::ifstream file("can_buffer.txt");


	return 0;
}