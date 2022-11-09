#include<iostream>
using namespace std;

class shape
{
public:
  int L, B;
  
  void get ()
  {
    cout << "Enter the following info\n";
    cout << "\nEnter the length : ";
    cin >> L;
    cout << "\nEnter the Breadth : ";
    cin >> B;
  }
  
  virtual void area ()
  {
      
  }
  
};

class triangle : public shape
{
  void area ()
  {
    cout << "\nArea of triangle is " << 0.5 * L * B << "\n";
  }
};

class rectangle : public shape
{
  void area ()
  {
    cout << "\nArea of rectangle is " << L * B << "\n";
  }
};

int main ()
{
  shape *ptr;
  
  triangle t;
  rectangle r;
  
  int choice;
  
  while(choice!=3)
  {
    cout<<"\n1.Triangles area \n2.Rectangles area \n3.exit";
    cout<<"\nPlease enter a choice : ";
    cin>>choice;
    
    switch(choice)
    {
        case 1: 
                cout<<"\n************Triangle*************\n"<<endl;
  
                ptr = &t;
                ptr->get ();
                ptr->area ();
                break;
        case 2:
                cout<<"\n************Rectangle*************\n"<<endl;
    
                ptr = &r;
                ptr->get ();
                ptr->area ();
                break;
    }
  }
  
  return 0;
}
