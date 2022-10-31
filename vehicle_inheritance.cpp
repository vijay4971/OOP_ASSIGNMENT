#include<bits/stdc++.h>

using namespace std;



class vehicle
{
    float mileage,price;
    
    public :
            void set_data()
            {
                cout<<"\nEnter the mileage : ";
                cin>>mileage;
                cout<<"\nEnter the price : ";
                cin>>price;
            }
            
            void display_data()
            {
                cout<<"\nMileage = "<<mileage<<"\n"<<"Price = "<<price<<endl;;
            }
};

class car : public vehicle
{
    float own_cost;
    int warranty,s_cap;
    char fuel_type[6];
    public :
            void set_data()
            {
                cout<<"\nEnter the ownership cost : ";
                cin>>own_cost;
                cout<<"\nEnter the warranty in year  : ";
                cin>>warranty;
                cout<<"\nEnter the seat capacity of car : ";
                cin>>s_cap;
                cout<<"\nEnter the fuel type of car : ";
                fflush(stdin);
                cin>>fuel_type;
            }
            
            void display_data()
            {
                cout<<"\nOwnerShip Cost = "<<own_cost<<"\n"<<"Warranty on car = "<<warranty<<"\n"<<"Seat Capacity Of Car = "<<s_cap<<"\n"<<"Fuel type of car = "<<fuel_type<<endl;
            }
};

class bike : public vehicle
{
    int no_cylnd;
    float f_tank_size;
    char cool_type[10],wheel_type[6];
    public :
            void set_data()
            {
                cout<<"\nEnter the number of cylinder bike have : ";
                cin>>no_cylnd;
                cout<<"\nEnter the fuel tank size in inches  : ";
                cin>>f_tank_size;
                cout<<"\nEnter the cooling type of bike : ";
                fflush(stdin);
                cin>>cool_type;
                cout<<"\nEnter the wheel type of bike : ";
                fflush(stdin);
                cin>>wheel_type;
            }
            
            void display_data()
            {
                cout<<"\nNumber of cylinders = "<<no_cylnd<<"\n"<<"Fuel tank size in inches = "<<f_tank_size<<"\n"<<"Cooling type of bike = "<<cool_type<<"\n"<<"Wheel type of bike = "<<wheel_type<<endl;
            }
};

class audi : public car
{
  char model_type[60];
  
  public :
      void set_data()
      {
        cout<<"\nEnter the make type of car : ";
        fflush(stdin);
        cin>>model_type;  
      }
      void display_data()
      {
          cout<<"\nMake type = "<<model_type<<endl;
      }
};

class ford : public car
{
  char model_type[60];
  
  public :
      void set_data()
      {
        cout<<"\nEnter the make type of car : ";
        fflush(stdin);
        cin>>model_type;  
      }
      void display_data()
      {
          cout<<"\nMake type = "<<model_type<<endl;
      }
};

class bajaj : public bike
{
  char make_type[60];
  
  public :
      void set_data()
      {
        cout<<"\nEnter the make type of car : ";
        fflush(stdin);
        cin>>make_type;  
      }
      void display_data()
      {
          cout<<"\nMake type = "<<make_type<<endl;
      }
};

class tvs : public bike
{
  char make_type[60];
  
  public :
      void set_data()
      {
        cout<<"\nEnter the make type of car : ";
        fflush(stdin);
        cin>>make_type;  
      }
      void display_data()
      {
          cout<<"\nMake type = "<<make_type<<endl;
      }
};

int main()
{
    int v,v_brand;
    cout<<"\n1.CAR\n2.BIKE"<<endl;
    cout<<"\nWhich type of vehicle you have ?"<<endl;
    cin>>v;
    
    if(v==1)
    {
        cout<<"\n1.audi\n2.ford"<<endl;
        cout<<"\nWhich brand of vehicle you have ?"<<endl;
        cin>>v_brand;
        
        if(v_brand==1)
        {
            audi car1;
    
            cout<<"\n For an audi car : \n"<<endl;
            car1.vehicle::set_data();
            car1.car::set_data();
            car1.vehicle::display_data();
            car1.car::display_data();
        }
    
        else if(v_brand==2)
        {
            ford car2;
            cout<<"\n For an ford car : \n"<<endl;
            car2.vehicle::set_data();
            car2.car::set_data();
            car2.vehicle::display_data();
            car2.car::display_data();
        }
        else
        {
            cout<<"\nPlese select one of this two brands!"<<endl;
        }
    
    }
    else if(v==2)
    {
        cout<<"\n1.bajaj\n2.tvs"<<endl;
        cout<<"\nWhich brand of vehicle you have ?"<<endl;
        cin>>v_brand;
    
        if(v_brand==1)
        {
            bajaj b1;
            cout<<"\n For an bajaj bike : \n"<<endl;
            b1.vehicle::set_data();
            b1.bike::set_data();
            b1.vehicle::display_data();
            b1.bike::display_data();
        }
    
        else if(v_brand==2)
        {
            tvs b2; 
            cout<<"\n For an tvs bike : \n"<<endl;
            b2.vehicle::set_data();
            b2.bike::set_data();
            b2.vehicle::display_data();
            b2.bike::display_data();
        }
        else 
        {
            cout<<"\nPlese select one of this two brands!"<<endl;
        }
    }
    else 
    {
        cout<<"\nPlese enter a proper choice!"<<endl;
    }
    return 0;
}

