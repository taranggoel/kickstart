#include <iostream>
using namespace std ;
int main()
{
int T,n,i;
cin>>T;
int y=1;
while(T--)
{
cin>>n;
int num[n];
for(i=0;i<n;i++)
{
    cin>>num[i];

}
int flag=0;
for(i=1;i<n-1;i++)
{
    if(num[i] > num[i-1] && num[i] > num[i+1])
    flag++;
}
cout<<"Case #"<<y<<":"<<' '<<flag<<endl;
y++;
}
}
