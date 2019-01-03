//
// Created by peleg on 1/3/19.
//

#ifndef PROJECT_CLIENTMESSAGEFACTORY_H
#define PROJECT_CLIENTMESSAGEFACTORY_H


class ClientMessageFactory {
public:
	byte[] getMessageToSendServer(string input);

private:
	byte[] shortToBytes(short num);
	short bytesToShort(byte[] byteArr);
};


#endif //PROJECT_CLIENTMESSAGEFACTORY_H
