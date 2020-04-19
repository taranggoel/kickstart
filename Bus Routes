#include <iostream>
using namespace std;
int main()
{
long long int T,n,i,d;
long long int s=1;
cin>>T;
while(T--)
{
cin>>n;
cin>>d;
long long int num[n];
for(i=0;i<n;i++)
{
cin>>num[i];
}
long long int y=d/num[n-1];
if(y>0)
{
num[n-1]=y * num[n-1];
}
for(i=n-2;i>=0;i--)
{
     long long int x = num[i+1]/num[i];
     if(x>0)
{
     num[i] = x * num[i];

}
}
cout<<"Case #"<<s<<":"<<' '<<num[0]<<endl;
s++;
}
}
