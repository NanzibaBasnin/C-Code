#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string temp;
    while(ss>>temp)
    {


        reverse(temp.begin(), temp.end());
        cout<<temp<<" ";


    }
    cout <<endl;
}

