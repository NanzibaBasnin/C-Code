#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
       vector<int> v1, v2, v3;
        for(int i=0; i<5; i++)
        {
            int x;
            cin>> x;
            v1.push_back(x);
        }
        for(int i=0; i<5; i++)
        {
            cout <<v1[i];
            cout<<" ";
        }
        int trr[10], frr[10], c=0, d=0;
        for(int i=0; i<4; i++)
        {

              int y= v1[i]+1
        }
        cout <<endl;
        for(int i=0; i<4; i++)
        {
            cout <<trr[i];

            cout<<" ";

        }
        cout <<endl;
        //cout <<endl;
        for(int i=0;i<4; i++)
        {cout<<frr[i];
            cout<<" ";

        }
        int  f=0;
        for(int i=0; i<4; i++)
        {
            if(frr[i] == trr[i])
            {
                f=1;
            }
        }

        if(f==1)
        {
            printf("Y\n");
        }
        if(f==0)
        {
            printf("N\n");
        }
        arr.clear();
        trr.clear();
        frr.clear();
    }
}
