#include<bits/stdc++.h>
using namespace std;
template <typename  T>
T cong(const T& t, const T& u)
{
 auto x=t+u;
 return x;
}
int main()
{
int a=9,b=9;
auto x=cong<int>(a,b);
cout<<" "<<x<<" "<<endl;
return 0;
}
