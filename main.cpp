#include <iostream>
#include "StackType.cpp"

using namespace std;

int main()
{
    StackType<char> s1;

    char a='(';
    char b=')';
    char c;
     int n;
    cout<<"Enter the number of the element n:";
    cin>>n;

    cout<<endl<<"Enter the input"<<endl;
    for(int i=0;i<n;i++){
        cin>>c;
        if(c==a){
            s1.Push(c);
        }
        else{
            s1.Pop();
        }
    }
    int t;
    t=s1.IsEmpty();
    if(t==true){
        cout<<"Stack is Balanced"<<endl;
    }
    else{
        cout<<"Stack is not Balanced"<<endl;
    }



    cout << "Hello world!" << endl;
    return 0;
}
