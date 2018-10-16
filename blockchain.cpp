#include "blockchain.h"
#include "picosha2.h"
using namespace std;

Blockchain::Blockchain(){
    head=NULL;
}

void Blockchain::addTransaction(int amount, string sender, string receiver) {
    Transaction t1;
    t1.setAmount(amount);
    t1.setSender(sender);
    t1.setReceiver(receiver);
    t1.setNonce(findNonce(amount,sender,receiver));
    if(head!=NULL) {
        t1.setHash(hashCode(to_string(head->getAmount())+head->getSender()+head->getReceiver()+head->getNonce()));
    }
    t1.setNext(head);
    Transaction tmp(t1.getNext(),t1.getAmount(),t1.getSender(),t1.getReceiver(),t1.getNonce(),t1.getHash());
    head = &tmp;
    t1.printTransaction();
}

void Blockchain::findTransaction(string sender) {
    cout<<"\nHere are all the transactions from " + sender +":"<<endl;
    Transaction* tmp = head;
    while(tmp->getNext() != NULL){
      cout<<"Nice"<<endl;
      if(tmp->getSender().compare(sender) == 0){
        cout<<"YUSSS"<<endl;
        tmp->printTransaction();
      }
      tmp = tmp->getNext();
    }
}

bool Blockchain::verifyAndPrint() {
    return true; //STUB
}

string Blockchain::findNonce(int amount, string sender, string receiver) {
    string nonce;
    srand(time(NULL));
    nonce = char(rand() % 26 + 97);
    nonce += char(rand() % 26 + 97);
    string full = to_string(amount) + sender + receiver + nonce;
    string code = hashCode(full);
    while(isalpha(code[code.length()-1]) || (code[code.length()-1] - '0' > 4 )) {
        nonce = char(rand() % 26 + 97);
        nonce += char(rand() % 26 + 97);
        full = to_string(amount) + sender + receiver + nonce;
        code = hashCode(full);
    }
    return nonce;
}

string Blockchain::hashCode(string transaction) {
    string hash;
    picosha2::hash256_hex_string(transaction,hash);
    return hash;
}

string Blockchain::transToString(Transaction * t) {
    return "STUB";
}
