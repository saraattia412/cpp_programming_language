#include <iostream>
#define pi 3.14
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int x;
    cout<<"enter x= ";
    cin>>x;
    x=x*2;
    cout<<"x = "<<x<<"\n";
    cout<<"----------------------"<<endl;
    int a,b;
    cout<<"enter number "<<endl;
    cin>>a>>b;
    cout<<"a+b= "<<a+b<<endl;
    cout<<"----------------------"<<endl;
    cout<<pi<<endl;
    cout<<"----------------------"<<endl;
    //example :1
    int y,u;
    cout<<"enter numbers :"<<endl;
    cin>>y>>u;
    cout<<"y/u= "<<y/u<<"\n"<<"y%u= "<<y%u<<endl;
    cout<<"----------------------"<<endl;
    //example :2
    double radius;
    cout<<"enter radius : "<<endl;
    cin>>radius;
    cout<<"area= "<<3.14*radius*radius<<endl;
    cout<<"circumferences= "<<2*3.14*radius<<endl;
    cout<<"----------------------"<<endl;
//example :3
    double length,width;
    cout<<"enter the 1- length, 2- width "<<endl;
    cin>>length>>width;
    cout<<"area= "<<length*width<<"\n"<<"perimeter= "<<2*(length+width)<<endl;
    cout<<"----------------------"<<endl;
    double distance;
    cout<<"enter distance in meters : "<<endl;
    cin>>distance;
    cout<<"distance in meters to cm= "<<distance *100<<" cm "<<endl;
    cout<<"distance in meters to mm= "<<distance*1000<<" mm "<<endl;
    cout<<"----------------------"<<endl;


    return 0;
}
