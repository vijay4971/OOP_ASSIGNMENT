#include <iostream>
using namespace std;

class database
{
  friend void display (database);
  int roll_no, telephone;
  string name, blood_gr, contact_add, dob;

public:
  static int std_no;

    database ()
  {
    cout << "\n-------------------------------------\n" << endl;
    cout << "\nName : ";
    cin >> name;
    cout << "\nRoll no : ";
    cin >> roll_no;
    cout << "\nDate of Birth : ";
    cin >> dob;
    cout << "\nblood group : ";
    cin >> blood_gr;
    cout << "\nPhone number : ";
    cin >> telephone;
    cout << "\nCity : ";
    cin >> contact_add;
    cout << "\n-------------------------------------" << endl;

    std_no++;
  }

  static void getcount ()
  {
    cout << "\nTotal students are " << std_no << endl;
  }
  
  inline void call ()
  {
    cout << "\ninline function" << endl;
  }
  
  ~database ()
  {
    cout << "\ndestructor invoked " << endl;
  }
  
};

int database::std_no = 1;

void display (database a)
{
  cout << "\n\n\n\n-------------------------------------" << endl;
  cout << "\nInformation " << endl;
  cout << "\nName : " << a.name << endl;
  cout << "\nRoll NO. : " << a.roll_no << endl;
  cout << "\nDate of Birth : " << a.dob << endl;
  cout << "\nBlood group : " << a.blood_gr << endl;
  cout << "\nPhone Number : " << a.telephone << endl;
  cout << "\nCity : " << a.contact_add << endl;
  cout << "\n-------------------------------------" << endl;
}

int main ()
{
  int num;

  cout << "\nEnter Number of students : ";
  cin >> num;

  database d[num];
  
  for (int i = 0; i < num; i++)
    {
      display (d[i]);
    }
    
  cout << "\nTotal students : " << database::getcount << endl;

  return 0;
}
