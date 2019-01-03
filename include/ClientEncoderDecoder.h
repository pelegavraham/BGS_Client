//
// Created by peleg on 1/3/19.
//
#include <string>
using namespace std;

#ifndef PROJECT_CLIENTENCODERDECODER_H
#define PROJECT_CLIENTENCODERDECODER_H


class ClientEncoderDecoder {

public:

	byte[] encode(string s);
	string decode(byte[] bytes);
	short bytesToShort(char* bytesArr);
	void shortToBytes(short num, char* bytesArr);

};


#endif //PROJECT_CLIENTENCODERDECODER_H
