//
// Created by peleg on 1/3/19.
//
#include <string>
using namespace std;

#include "../include/ClientEncoderDecoder.h"

	byte[] ClientEncoderDecoder :: encode (string s){
        ClientMessageFactory factory=new ClientEncoderDecoder();
        return factory.getMessageToSendServer(s);
    }

    string ClientEncoderDecoder:: decode (byte[] bytes){

    }

    short ClientEncoderDecoder:: bytesToShort(char* bytesArr)
    {
        short result = (short)((bytesArr[0] & 0xff) << 8);
        result += (short)(bytesArr[1] & 0xff);
        return result;
    }

    void ClientEncoderDecoder:: shortToBytes(short num, char* bytesArr)
    {
        bytesArr[0] = ((num >> 8) & 0xFF);
        bytesArr[1] = (num & 0xFF);
    }
