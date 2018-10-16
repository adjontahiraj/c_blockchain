#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cstdio>
#include <cstdlib>

using namespace std;

class Transaction {
        public:
        Transaction();
        Transaction(Transaction* next, int amount, string sender, string receiver, string nonce, string hash);
        void setNext(Transaction* next);
        Transaction* getNext();
        void setAmount(int amount);
        int getAmount();
        void setSender(string sender);
        string getSender();
        void setReceiver(string receiver);
        string getReceiver();
        void setNonce(string nonce);
        string getNonce();
        void setHash(string hash);
        string getHash();
        void printTransaction();


        private:
        Transaction* next;
        int amount;
        string sender;
        string receiver;
        string nonce;
        string hash;
};