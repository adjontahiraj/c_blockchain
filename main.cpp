#include "blockchain.h"
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <sstream>

using namespace std;

int main() {
	
	Blockchain* b1 = new Blockchain();
   /*
	cout<<"ADDING TRANSACTION \n"<<endl;
	b1->addTransaction(85,"Dave","Rocky");
	cout<<"ADDING TRANSACTION \n"<<endl;
	b1->addTransaction(70,"Chad","Steve");
  cout<<"ADDING TRANSACTION \n"<<endl;
	b1->addTransaction(50,"Stew","Cody");
  cout<<"ADDING TRANSACTION \n"<<endl;
	b1->addTransaction(10,"Ron","Van");
  cout<<"ADDING TRANSACTION \n"<<endl;
	b1->addTransaction(50,"Bob","Sam");
  cout<<"ADDING TRANSACTION \n"<<endl;
 	b1->addTransaction(30,"Alex","luke");
  cout<<"ADDING TRANSACTION \n"<<endl;
	b1->addTransaction(25,"Eric","Leroy");
	Transaction* tmp = b1->getHead();
	tmp->setHash("123");
  b1.findTransaction("Bob");
	cout<<"\nChecking for hackers...\n"<<endl;
	b1.verifyAndPrint();

	string hash;
	string input = "50BobSamgt";
  picosha2::hash256_hex_string(input,hash);
	cout<<"\n\n" + hash<<endl;
	Blockchain* b1 = new Blockchain();*/
	string ssender;//sender to look up trans
	int choice;//initial choice
	int amount;//trans amt
	string sender;//trans sender
	string receiver;//trans receiver
	string cont;//continue addint transactions
	int c = 1;
	cout<<"Welcome to the transaction-chain application...."<<endl;

	while(true) {
		cout<<"Here are the choices of operations: "<<endl;
		cout<<"1) Add a transaction to the chain."<<endl;
		cout<<"2) Find a transaction with name of sender."<<endl;
		cout<<"3) Verify and print the chain."<<endl;
		cout<<"4) Exit."<<endl;
		cout<<"Which operation do you want to make? (1,2,3,4): ";
		cin>>choice;
		while(cin.fail() || choice<1 || choice>4) {
			cout<<"Invalid input, try again\n"<<endl;
			cout<<"Which operation do you want to make? (1,2,3,4): ";
			cin.clear();
			std::cin.ignore(256,'\n');
			cin>>choice;
		}
		if(choice == 1) {
			c = 1;
			while(c!=0) {
				cout<<"Enter a valid amount: ";
				cin>>amount;
				while(cin.fail()) {
					cin.clear();
					cin.ignore(256,'\n');
					cout<<"Invalid input, try again\n"<<endl;
					cout<<"Enter a valid amount: ";
					cin>>amount;
				}
				cout<<"Enter the sender: ";
				cin>>sender;
				while(cin.fail()) {
					cin.clear();
					cin.ignore(256,'\n');
					cout<<"Invalid input, try again\n"<<endl;
					cout<<"Enter a valid sender: ";
					cin>>sender;
				}
				cout<<"Enter the receiver: ";
				cin>>receiver;
				while(cin.fail()) {
					cin.clear();
					cin.ignore(256,'\n');
					cout<<"Invalid input, try again\n"<<endl;
					cout<<"Enter a valid sender: ";
					cin>>receiver;
				}
				cout<<"Here is the transaction you just added: \n";
				b1->addTransaction(amount,sender,receiver);
				cout<<"Would you like to add another transaction(Y/N): ";
				cin>>cont;
				while((cont!="Y")&&(cont!="N")&&(cont!="y")&&(cont!="n")) {
					cin.clear();
					cin.ignore(256,'\n');
					cout<<"Invalid input, try again\n"<<endl;
					cout<<"Enter a valid input: ";
					cin>>cont;
				}
				if(cont == "Y" || cont == "y") {
					c = 1;
				}else {
					c = 0;
				}
			}
		}else if(choice == 2) {
			c=1;
			while(c!=0) {
				cout<<"Enter the sender to look up the transaction: ";
				cin>>ssender;
				while(cin.fail()) {
					cin.clear();
					cin.ignore(256,'\n');
					cout<<"Invalid input, try again\n"<<endl;
					cout<<"Enter a valid sender: ";
					cin>>ssender;
				}
				b1->findTransaction(ssender);
				cout<<"Would you like to find another transaction(Y/N): ";
				cin>>cont;
				while((cont!="Y")&&(cont!="N")&&(cont!="y")&&(cont!="n")) {
					cin.clear();
					cin.ignore(256,'\n');
					cout<<"Invalid input, try again\n"<<endl;
					cout<<"Enter a valid input: ";
					cin>>cont;
				}
				if(cont == "Y" || cont == "y") {
					c = 1;
				}else {
					c = 0;
				}
			}
		}else if(choice == 3) {
			b1->verifyAndPrint();
		}
		else if(choice == 4){
			break;
		}

	}
}

