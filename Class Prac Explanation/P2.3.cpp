#include <iostream>
#include <string>

using namespace std;

int main() {

cout<<"2.Sum of Even Numbers from Array Example"<<endl;

 int A[15]={2,6,5,11,9,12,21,19,35,20,6,9,7,15,3};

 int even_sum=0;

 for(int i=0; i<15; i++)
 {
   if(A[i]%2==0)
   {
     even_sum+=A[i];
     //cout<<A[i]<<"\n";
   }
 }

 cout<<endl<<"Even Sum= "<<even_sum;

cout<<endl<<endl;
cout<<"3.Temperatures Greater than 70 Example"<<endl;

int B[14]={30,59,80,22,34,71,27,72,80,95,60,67,62,66};

int count=0;

for (int i=0; i<14; i++)
{
  if(B[i]>70)
  {
    cout<<B[i]<<"\n";
    count++;
   }
}
cout<<endl<< "Count = "<<count;
 return 0;
}
