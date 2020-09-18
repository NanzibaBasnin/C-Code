#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(5);
    d.push_back(6);
    while(d.size()>0)
    {
        cout<<d[0]<<" "<<endl;
        d.pop_back();
    }
}
