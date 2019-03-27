# c_blockchain

This is a project in which I programmed a blockchain application system.This project was done for my cs130a class (Data Structures and Algorithms I)

The blockchain is modeled by a linked list which contains nodes of Transactions. Each Transaction node holds the sender, receiver, transaction ammount.In addition each transaction holds the hash code of the previous transaction in the blockchain, and a "nonce" for the current transactions. The nonce is specific as it generates a hashcode using SHA256 algorithm from picosha2.h but the nonce has to be found such as the last character of the SHA256 is a digit between 0-4 as we were instructed in the assignmnet. This is supposed to model the process of mining currency as the algorithm needs to randomize a nonce for each transaction in order to match the requirements.

The main program workflow is as follows: a new blockchain is created using the blockchain class from blockchain.cpp, when a transaction is added the transaction class from transaction.cpp creates a transaction node with the information that the user inputs. If this is not the first transaction in the blockchain, it will contain the hash of the previous transaction.

The user can preform these functionalities by running ./main:

1 ) Add a transaction to the chain.
2 ) Find a transaction with name of receiver or sender.
3 ) Verify and print the chain.
4 ) Exit the application.

The veryfy and print function checked the hashcode of each transaction node with the previous transaction to make sure the blockchain has not been compromised.
