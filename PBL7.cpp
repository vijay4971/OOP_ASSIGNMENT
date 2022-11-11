#include<iostream>
using namespace std;

template <class V>
class vector
{
    private:
            int n;
            V *arr;
    
    public:
            
            void read();
            void display();
            void modify(int ,int);
            void scalar_multipliaction(int);
};

template <class V> void vector <V>::read()
{
   {
                cout<<"Enter the size of vector : ";
                cin>>n;
                arr = new int[n];
                cout<<"\n******************************\n";
                
                for(int i=0;i<n;i++)
                {
                    cout<<"\nEnter the element "<<i+1<<" : ";
                    cin>>*(arr+i);
                }
            } 
}

template <class V> void vector<V>::modify(int temp, int num)
{
    int count=0;
    
    for(int i=0;i<n;i++)
    {
        if(temp == *(arr+i))
        {
            *(arr+i) = num;
            cout<<"\nModified successfully !"<<endl;
            break;
        }
        else
        count++;
    }
    
    if(count==n)
    {
        cout<<"\nElement not found!\n";
    }
     
}

template <class V> void vector<V>::display()
{
    cout<<"\nElements are as following : \n"<<endl;
    
    cout<<"(";         
    for(int i=0;i<n;i++)
    {
        cout<<*(arr+i)<<" ";
    }
    cout<<")";
}

template <class T> void vector<T>::scalar_multipliaction(int p)
{
    for(int i=0;i<n;i++)
    {
        arr[i] *= p;
    }
    
    cout<<"\nScalar multiplication done successfully!";
}

int main()
{
    vector <int>V1;
    int choice=0,x,y,z;
    
    V1.read();
    
    while(choice!=4)
    {
        cout<<endl<<"\n****************************************************\n"<<endl;
        cout<<"\n1.Display Elements\n2.Modify an Element\n3.Scalar Multiplication\n4.Exit"<<endl;
        cout<<"\nEnter your choice : ";
        cin>>choice;
    
        switch(choice)
        {
            case 1:
                    V1.display();
                    break;
            
            case 2:
                    cout<<"\nEnter the number you want to replace : ";
                    cin>>y;
                    cout<<"\nEnter the number you want to store : ";
                    cin>>z;
                    
                    V1.modify(y,z);
                    break;
            
            case 3:
                    cout<<"\nEnter the scalar qauntity you want to multiply : ";
                    cin>>x;
                    
                    V1.scalar_multipliaction(x);
                    break;
            
            case 4:
                    break;
            
            default:
                    cout<<"\nPlease enter a proper choice !";
        }
    }
    
    
    cout<<"\nThank you!";
}

