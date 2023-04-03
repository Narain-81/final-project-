
#include <iostream>
using namespace std;

float mango(){
    cout<<"Mango  1kg = rs 50";
    float quantity ;
    cout<<"\n enter the quantity:";cin>>quantity;
    cout<<"the total cost is:"<<quantity*50;
    return quantity*50;
}

float orange(){
    cout<<"Orange 1kg = rs 40";
    float quantity ;
    cout<<"\n enter the quantity:";cin>>quantity;
    cout<<"the total cost is:"<<quantity*40;
        return quantity*40;
}
float grapes(){
    cout<<"Grapes 1kg = rs 35";
    float quantity ;
    cout<<"\n enter the quantity:";cin>>quantity;
    cout<<"the total cost is:"<<quantity*35;
        return quantity*35;
}
int main()
{
     int option;
    float baseamount, totalamount,a,b,c;
    
    cout<<"\t\tWelcome to Nk Supermarket ";
    start:
    cout<<"\n 1.Mango \n 2.Orange \n 3.Grapes \n";
     cout<<"Enter your choice:";cin>>option;
      switch(option){
          case 1:
          a=mango();
          break;
          case 2:
          b=orange();
          break;
          case 3:
          c=grapes();
          break;
          default:
            exit(0);
      }
      
      totalamount=a+b+c;
      cout<<"\nThe total cost is:"<<totalamount;
      goto start;
    
    

    return 0;
}
