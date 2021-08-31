//! Game - Over.
/** ========================================**
 ** @Author:   Md. Mushahadur Rahaman Khan
               ( City University of Bangladesh, CSE 49th )
 ** @Category: The Standard Template Library. (string)
/** ========================================**/

#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
using namespace std;
int main()
{
    optimize();
/*
      string str;
      str = "Mrk pulock";
      cout<<str<<endl;

        string s,s1,s2;
        s = s+'a';
        s1='b';
        s2+='c';
        s1+=s2;
        s+=s1;
        cout<<s<<endl;
        string p,r,k;
        p = "Mushahadur ";
        r = p;
        k = "Rahaman Khan ";
        p = r+k;
        cout<<p<<endl;

*/


        /// clear of string ....
/*
        string s,s1,s2;
        s = s+'a';
        s1='b';
        s2+='c';
        s1+=s2;
        s+=s1;
        cout<<s<<endl;
        s.clear();
        cout<<"Clear  : "<<endl<<s<<endl;
*/



    /// string first to last print with iterator..
/*
    string s = "Mushashadur Rahaman Khan Pulock";
    string :: iterator i;
    for(i=s.begin(); i!=s.end();i++)cout<<*i;
        cout<<endl;
        // for each loop
        for(auto i:s)cout<<i;
        cout<<endl;
*/



    /// String compare
/*
    string s1="mrk pulock", s2="Mrk Pulcok";
    if(s1==s2)cout<<"equal"<<endl;  ///   O(N)
    else cout<<"Not equal"<<endl;

    string ss, sa;
    cin>>ss>>sa;
    if(ss==sa)cout<<"equal"<<endl;
    else cout<<"Not equal"<<endl;
*/




    /// String reverse f: reverse()
/*
     string s1="mrk pulock", s2="Mrk Pulcok";
     reverse(s1.begin(),s1.end());
     cout<<s1<<endl<<endl;

     cout<<s2<<endl;
     reverse(s2.begin(),s2.end());
     cout<<s2<<endl;
     reverse(s2.begin(),s2.end());
     cout<<s2<<endl;
*/



    /// string Palindrom Or Not palindrom
/*
    string s = "aadaa";
    string temp = s;
    reverse(s.begin(),s.end());

    if(s==temp) cout<<"Palindrom"<<endl;
    else cout<<"Not palindrom"<<endl;


    string s1 = "aadAa";
    string temp1 = s1;
    reverse(s1.begin(),s1.end());

    if(s1==temp1) cout<<"Palindrom"<<endl;
    else cout<<"Not palindrom"<<endl;
*/




    /// Optimize()
//    #difine optimize() ios_base ::sync_with_stdio(0);cout.tie(0);
//    #define end '\n'



    /// string getline .....
/*
    string s;
    getline(cin, s);
    cout<<s<<endl;
    int t;
    cin>>t;
    for(int i=1; i<=t; i++){
        string ss;
        scanf("%*d");
        getline(cin, ss);
        cout<<"Case : "<<i<<"   "<<ss<<endl;
    }

    int t1;
    cin>>t1;
    for(int i=1; i<=t1; i++){
        string ss1;
        char c1;
        cin>>c1;
        getline(cin, ss1);
        ss1 = c1+ss1;
        cout<<"Case : "<<i<<"   "<<ss1<<endl;
    }
*/





    /// ‍string Sort
/*
    string s = "fcbaedGHK";
    sort(s.begin(),s.end());
    cout<<s<<endl;
*/


    /// string unique ..
/*
    string s="ddffessAAA";
    int sz = unique(s.begin(),s.end())-s.begin();
    for(int i=0; i<sz; i++)cout<<s[i];
        cout<<endl;
*/



    ///



























    return 0;
}


