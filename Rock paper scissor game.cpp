    #include<iostream>
#include<random>
using namespace std;

int main()
{
   while(1){
   cout<<"--------------------------------"<<endl;
    cout<<"1 .rock"<<endl;
    cout<<"2.paper"<<endl;
    cout<<"3.scissor"<<endl;
    cout<<"0 for end match"<<endl;
    int you,n;
    random_device v;
    uniform_int_distribution<int>computer(1,3);
    cout<<"Enter your choice : ";
    cin>>you;
    n=computer(v);
    cout<<"computer choice : "<<n<<endl;
    
        if(you==1 && n == 2) {
            cout<<"you lose"<<endl;
        }
        else if(you==1&&n==3) {
            cout<<"you win"<<endl;
        }
    
    
    else if(you==2&& n==1) {
            cout<<"you win"<<endl;
        }
        else if(you==2&& n==3) {
            cout<<"you lose"<<endl;
        }
    
    else if(you==3 && n==1) {
            cout<<"you lose"<<endl;
        }
        else if(you==3 && n==2) {
            cout<<"you win"<<endl;
        }
        else if(you==n){
        cout<<"match tie "<<endl;
        }
        else if(you>3){
        cout<<"invalid selection "<<endl;
        }
        else if(you==0){
        goto end;
        }
}
end:
cout<<"thank you....."<<endl;
    
    

    return 0;
}