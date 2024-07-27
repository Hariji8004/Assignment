#include<iostream>
using namespace std;
int main()
{
    int sizen,av=0;
    cout<<"Number of elements:";
    cin>>sizen;
    int array1[sizen];
    for(int i=0;i<sizen;i++)
    {
        cin>>array1[i];
        av+=array1[i];

    }
    cout<<"Average=";
    cout<<av/sizen<<endl;

}
