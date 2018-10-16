#include "blockchain.h"
#include <string>
#include "picosha2.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

using namespace std;

int main(){
	Blockchain b1;
	cout<<"ADDING TRANSACTION \n"<<endl;
	b1.addTransaction(50,"bob","sam");
	cout<<"ADDING TRANSACTION \n"<<endl;
	b1.addTransaction(30,"Alex","luke");
  cout<<"ADDING TRANSACTION \n"<<endl;
	b1.addTransaction(50,"bob","sam");
  cout<<"ADDING TRANSACTION \n"<<endl;
	b1.addTransaction(30,"Alex","luke");
  cout<<"ADDING TRANSACTION \n"<<endl;
	b1.addTransaction(50,"bob","sam");
  cout<<"ADDING TRANSACTION \n"<<endl;
 	b1.addTransaction(30,"Alex","luke");
  cout<<"ADDING TRANSACTION \n"<<endl;
	b1.addTransaction(30,"Alex","luke");
  b1.findTransaction("bob");
	//string test = "50bobsam"
}

