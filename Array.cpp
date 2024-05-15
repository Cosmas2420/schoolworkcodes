#include <iostream>
using namespace std;
int main(){

 //int array[4]={201,205,400,600};
 //for (int i=0; i<4; i++)
 int array[4];
//array[0]=201;
//array[1]=205;
//array[2]=400;
//array[3]=600;

//for(int i=0; i<4; i++)
 
cout<<"enter the numbers"<<endl;
for(int i=0; i<4; i++)
 {cin>>array[i];
 }
 cout<<"the array element are;"<<endl;
 for (int i=0;i<4;i++)
{cout<<array[i];
}

return 0;
}