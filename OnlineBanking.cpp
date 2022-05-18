//IT21266300-Bandara K.M.V.T.
//MLB_04.02_11
//Transactions and Loan class
#include<iostream>
#include<iomanip>
#include<cstring>

using namespace std;

class Transactions{
  privet: 
     char transactionID[10];
     double transactionsAmount;
     string transactionDate;
  Public:
     int AccountNO[10];
     void  getTransactionsDetails(string tDate , char tID, int aNo);
     void DisplayTransactions();
     
};
//define public functions
void Transaction::getTransactionDetails(string tDate , char tID, int aNo)
{
  AccountNO = aNo;
	strcpy(transactionID , tID);
	transactionDate = tDate;
  transactionsAmount = tAmount;
}
void Transaction::DisplayTransations()
{
  cout<<"Account No:"<<AccountNO<<endl
  cout<<"Transaction ID:"<<transactionsID<<endl;
  cout<<"Transaction Date:"<<transactionDate<<endl;
  cout<<"Transaction Amount:"<<transactionsAmount<<endl
  
}

class Loan{
  privet: 
     char LoanID[10];
     char LoanType;
     int AccountNo[10];
     double balance;
     double payment;
     double loanAmount;
     string paymentDate;
     
  Public:
     void getLoandetails(double Lamount, char Ltype, int aNo, double Abalance, char LID);
     void displayLoanDetails();
     void getpaymentDetails(double Pment , char LID, int aNo, string Pdate);
     void displayPaymentDetails();
         
};
//define public functions
void loan::getLoandetails(double Lamount, char Ltype, int aNo, double Abalance, char LID)
{
  AccountNo = aNo;
  LoanID = LID;
  LoanType = Ltype;
  balance = Abalance;
  loanAmount = Lamount;
}

void loan::displayLoanDetails();
{
  cout<<"Account No:"<<AccountNO<<endl
  cout<<"Loan ID:"<<LoanID<<endl;
  cout<<"Loan Type:"<<LoanType<<endl;
  cout<<"Loan Amount:"<<loanAmount<<endl;
  cout<<"Have to pay:"<<balance<<endl;
  
}
void loan::getpaymentDetails(double Pment , char LID, int aNo, string Pdate)
{
  payment = Pment;
  LoanID = LID;
  AccountNo = aNo;
  paymentDate = Pdate;
}

void loan::displayPaymentDetails();
{
  cout<<"Account No:"<<AccountNO<<endl
  cout<<"Loan ID:"<<LoanID<<endl;
  cout<<"Payment Date:"<<LoanType<<endl;
  cout<<"Payment Amount:"<<loanAmount<<endl;
  cout<<"Have to pay:"<<balance<<endl;
}


