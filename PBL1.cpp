#include<bits/stdc++.h>
using namespace std;

class bank
{
  int acc_no;
  string name, type;
  float balance;

public:
    bank ()
  {
  }
  bank (int a, string b, string c, float d)
  {
    acc_no = a;
    name = b;
    type = c;
    balance = d;
  }
  void deposit (float a)
  {
    balance = balance + a;
  }
  void withdraw (float b)
  {
    if (balance >= b)
      {
	balance = balance - b;
	display (0, b);
      }
    else
      {
	cout <<"\n*INSUFFICIENT BALANCE*\n" <<endl;
	display (0, 0);
      }
  }
  void display (float depo, float withdr)
  {
    cout << "\nNAME : " << name << endl;
    cout << "\nACCOUNT NUMBER : " << acc_no << endl;
    cout << "\nAMOUNT WITHDRAW : " << withdr << endl;
    cout << "\nAMOUNT DEPOSIT : " << depo << endl;
    cout << "\nCURRENT BALANCE : " << balance << endl;
  }
};

int main ()
{
  string s, type;
  
  int accno, choice;
  
  float bal, depo, withdr;
  
  cout << "\nENTER NAME : ";
  cin >> s;
  
  cout << "\nENTER ACCOUNT NO. : ";
  cin >> accno;
  
  cout << "\nENTER TYPE : ";
  cin >> type;
  
  cout << "\nENTER BALANCE : ";
  cin >> bal;
  
  bank b1 (accno, s, type, bal);
  
  while (choice != 3)
    {
      cout << "\nENTER CHOICE:" << endl;
      cout << "\n1.DEPOSIT \n2.WITHDRAW \n3.EXIT" << endl;
      cin >> choice;
      
      if (choice == 1)
	    {
	    cout << "\nAMOUNT TO DEPOSIT : ";
	    cin >> depo;
	    b1.deposit (depo);
	    b1.display (depo, 0);
	    }
      else if (choice == 2)
	    {
	    cout << "\nAMOUNT TO WITHDRAW : ";
	    cin >> withdr;
	    b1.withdraw (withdr);
	    b1.display (depo, 0);
	    }
    }
}
