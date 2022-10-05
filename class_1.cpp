//vijay4971
#include <iostream>

using namespace std;

class circle
{
    float r;
    public:
    
    void read()
    {
        cout<<"Enter the value of radius : ";
        cin>>r;
    }
    void display()
    {
        cout<<"\n Area of circle : "<<((22*(r*r))/7)<<endl;
    }
};
class rectangle
{
    float l,b;
    public:
    
    void read()
    {
        cout<<"\n Enter the length of reactangle : ";
        cin>>l;
        cout<<"\n Enter the breadth of reactangle : ";
        cin>>b;
    }
    void display()
    {
        cout<<" \n Area of rectangle : "<<(l*b)<<endl;
    }
};

int main()
{
    circle c1;
    rectangle r1;
    int choice;
    cout<<"\n Choices : \n 1.Area of circle \n 2.Area of rectangle \n 0.exit"<<endl;
    
    do
    {
        cout<<"\n********************************"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
    switch(choice)
    {
        case 1:
                c1.read();
                c1.display();
                break;
        case 2:
                r1.read();
                r1.display();
                break;
        case 0:
                break;
        default:
                cout<<"Please enter a valid choice !"<<endl;
    }
    }
    while(choice != 0);
    cout<<"\n\n\n THANK YOU !"<<endl;
    return 0;
}
