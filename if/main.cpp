#include <iostream>

using namespace std;

int main()
{
    {

        cout << "Hello world!" << endl;
        int x;
        cout<<"enter x :"<<endl;
        cin>>x;
        if(x>0)
        {
            cout<<"this number is positve "<<endl;
        }


    else
        cout<<"this number is negtive"<<endl;
    }
cout<<"------------------------------------------"<<endl;
{


    int x, y ;
    cout<<"enter two number :"<<endl;
    cin>>x>>y;
    if (x>y)
    {
        cout<<"x greater than y "<<endl;
    }
    else if (x<y)
    {
        cout<<"y greater than x "<<endl;
    }
    else
        cout<<"x = y "<<endl;
}
cout<<"-----------------------------------"<<endl;
{
    int x ;
    cout<<"enter number : "<<endl;
    cin>>x;
    if(x%2==0)
    {
        cout<<"the number is even "<<endl;
    }
    else
        cout<<"the number is  odd "<<endl;

}
cout<<"------------------------"<<endl;
{
    int x,y;
    cin>>x>>y;
    if(x==y)
        cout<<"ok"<<endl;
    else
        cout<<"not ok "<<endl;
}
cout<<"------------------------"<<endl;
{
    int x;
    cout<<x;
}

return 0;
}
