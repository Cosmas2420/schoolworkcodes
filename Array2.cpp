#include <iostream>
using namespace std;
int main(){

int x;

cout <<"specify the size of the array"<<endl;
cin>> x;

int* arr =new int[x];
cout <<"Enter elements:"<< endl;

for(int i =0; i< x; i++)
{
    cin>>arr[i];

}
cout <<"Elements in this array are:"<<endl;
for(int i=0; i< x; i++)

{
    cout << arr[i]<< endl;
}

}

