#include "transaction.h"

using namespace std;

Transaction::Transaction(){
	this->next = NULL;
	this->amount = 0;
	this->sender = "";
	this->receiver = "";
	this->nonce = "";
	this->hash = "";
}

Transaction::Transaction(Transaction* next, int amount, string sender, string receiver, string nonce, string hash) {
	this->next = next;
	this->amount = amount;
	this->sender = sender;
	this->receiver = receiver;
	this->nonce = nonce;
	this->hash = hash;
}
void Transaction::setNext(Transaction* next) {
	this->next = next;
}

Transaction* Transaction::getNext() {
	return next;
}

void Transaction::setAmount(int amount) {
	this->amount = amount;
}

int Transaction::getAmount() {
	return amount;
}

void Transaction::setSender(string sender) {
	this->sender = sender;
}

string Transaction::getSender(){
	return sender;
}

void Transaction::setReceiver(string receiver) {
	this->receiver = receiver;
}

string Transaction::getReceiver() {
	return receiver;
}

void Transaction::setNonce(string nonce) {
	this->nonce = nonce;
}

string Transaction::getNonce() {
	return nonce;
}

void Transaction::setHash(string hash) {
	this->hash = hash;
}

string Transaction::getHash() {
	return hash;
}

void Transaction::printTransaction(){
  cout<<"Amount: " + to_string(this->getAmount())+ "\nSender: " + this->getSender() + "\nReceiver: " + this->getReceiver() + "\nNonce: "+ this->getNonce() + "\nHash: " +this->getHash()<<endl;
}


