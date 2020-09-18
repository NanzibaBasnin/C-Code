#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;

    int n;
    cin>> n;
      int a;
    for(int i=0; i<n; i++)
    {
        cin>> a;
        st.push(a);
    }
    while(st.size()>0)
    {
        cout << st.top() <<" " <<endl;
        st.pop();
    }
    return 0;
}
