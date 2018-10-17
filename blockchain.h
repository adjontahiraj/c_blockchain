#include "transaction.h"
#include <string>
#include <iostream>
#include <string.h>
#include <cstdio>
#include <cstdlib>


using namespace std;

class Blockchain {
	public:
		Blockchain();
		void addTransaction(int amount, string sender, string receiver);
		void findTransaction(string sender);
		bool verifyAndPrint();
		string findNonce(int amount, string sender, string receiver);
		string hashCode(string transaction);
		string transToString(Transaction* t);
		Transaction* getHead();
	private:
		Transaction* head;
};

