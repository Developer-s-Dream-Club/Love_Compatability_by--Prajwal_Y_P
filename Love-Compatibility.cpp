#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int s(string p)
{
    int x=(count(p.begin(),p.end(),'l')+count(p.begin(),p.end(),'o')+count(p.begin(),p.end(),'v')+count(p.begin(),p.end(),'e'));
    return x;
}

void prints(int x)
{
    switch(x)
    {
        case 4:
        case 5: cout<<"\nYour score is "<<x<<", you are alright together."; break;
        case 1:
        case 2:
        case 3:
        case 6:
        case 7:
        case 8:
        case 9: cout<<"\nYour score is "<<x; break;
        default : cout<<"\nYour score is "<<x<<", you go together like coke and mentos."; break;
    }
}
    

int main()
{
    string p1,p2;
    cout<<"\nLove Compatibility Program\nEnter Person-1 name : "; cin>>p1;
    cout<<"\nEnter Person-2 name : "; cin>>p2;
    prints(s(p1)+s(p2));
    return 0;
}
