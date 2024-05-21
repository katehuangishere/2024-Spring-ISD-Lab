#include <iostream>
#include <string>
using namespace std;
class StudentAccount
{
public:
	 
	StudentAccount(string ID, string name, double initbal);
	StudentAccount();

	 
	void charge(double amount);
	void payment(double amount);  

								  
	string getID() const;        
	string getName() const;     
	double getBalance() const;    

private:
	 
	string studentID;     
	string studentName;   
	double balance;       
	
								  

	void readAccount(istream& istr = cin);

	 

	void writeAccount(ostream& ostr = cout) const;
};

 
 
 

 
StudentAccount::StudentAccount(string ID, string name,
	double initbal) :
	studentID(ID), studentName(name), balance(initbal)
{}

 
StudentAccount::StudentAccount() : studentID(""), studentName(""), balance(0)
{}

 
 
void StudentAccount::charge(double amount)
{
	if (amount < 0)
	{
		cerr << "Charge must not be negative" << endl;
		exit(1);
	}
	balance -= amount;
}

 
 
void StudentAccount::payment(double amount)
{
	if (amount < 0)
	{
		cerr << "Payment must not be negative" << endl;
		exit(1);
	}
	balance += amount;
}

 
double StudentAccount::getBalance() const
{
	return balance;
}

 
string StudentAccount::getID() const
{
	return studentID;
}
 
string StudentAccount::getName() const
{
	return studentName;
}


void StudentAccount::readAccount(istream& istr)
{
	istr >> studentID >> studentName >> balance;
}

 
void StudentAccount::writeAccount(ostream& ostr) const
{
	ostr << "ID:       " << studentID << endl;
	ostr << "Name:     " << studentName << endl;
	ostr << "Balance:  " << '$' << balance << endl;
}