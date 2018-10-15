#include "blockchain.h"

using namespace std;

Blockchain::Blockchain(){
    head=NULL;
}

void Blockchain::addTransaction(int amount, string sender, string receiver) {
    //STUB
}

void Blockchain::findTransaction(string sender) {
    //STUB
}

bool Blockchain::verifyAndPrint() {
    return true; //STUB
}

string Blockchain::findNonce(int amount, string sender, string receiver) {
    return "STUB";
}

string Blockchain::hashCode(string transaction) {
    return "STUB";
}

string Blockchain::transToString(Transaction * t) {
    return "STUB";
}
