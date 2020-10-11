#include <iostream>
using namespace std;

bool check(string s,int n)
{

    // creating a frequency array
    int freq[26] = {0};


    for (int i = 0; i < n; i++)

        freq[s[i] - 97]++; 


    for (int i = 0; i < 26; i++)
        if (freq[i] % 2 == 1)
        return false;
    return true;
}

int main()
{
    int t,n;
    char s[10000];
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        check(s,n) ? cout << "YES" << endl :
                 cout << "NO" << endl;
    }
    return 0;
}
