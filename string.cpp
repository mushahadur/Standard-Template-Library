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



    /// Max element & Min element print
/*
    string s = "wzcbss";
    cout<<"Max Element : "<<*max_element(s.begin(),s.end())<<endl;
    cout<<"Min Element : "<<*min_element(s.begin(),s.end())<<endl;
*/



    /// String erase ..
/*
    string s = "wzcbs";
    s.erase(s.end()-1);
    cout<<s<<endl;

    s.erase(s.begin());
    cout<<s<<endl;

    s.erase(s.begin()+2);
    cout<<s<<endl;
*/



    /// String comparizom ....
/*
    string s="eemon",t="eeemo";
    if(s<t)cout<<s<<" "<<"is Smallest"<<endl;
    else cout<<t<<" "<<"is largest  "<<endl;
*/




    /// String dictionary sort..
/*
    vector<string> v;
    v.push_back("AAAAA");
    v.push_back("AA");
    v.push_back("Ponik");
    v.push_back("Pulock");
    v.push_back("Alif");
    v.push_back("Rifat");
    v.push_back("Samiul");
    v.push_back("Nirob");
    v.push_back("mrk pulock");
    v.push_back("lilo");
    sort(v.begin(),v.end());
    for(auto i:v)cout<<i<<endl;

    cout<<"               is          a"<<endl<<endl;
    sort(v.rbegin(),v.rend());
    for(auto i:v)cout<<i<<endl;
*/



    /// specific same character remove from string
/*
    string s = "ASdfKKKLm";
    s.erase(remove(s.begin(),s.end(), 'K'),s.end());
    cout<<s<<endl;
*/



    /// Find the Unique String indevidual and double string
/*
    vector<string> v;
    v.push_back("AAAAA");
    v.push_back("AAAAA");
    v.push_back("momo");
    v.push_back("Pulock");
    v.push_back("Nirob");
    v.push_back("Rifat");
    v.push_back("momo");
    v.push_back("Nirob");
    sort(v.begin(),v.end());
    int sz = unique(v.begin(),v.end())-v.begin();
    cout<<sz<<endl;
    for(int i=0; i<sz; i++)cout<<v[i]<<endl;
*/





    /// int to string
/*
    int n = 1234;
    string s = to_string(n);
    cout<<s<<endl;
    s[0] = '9';
    cout<<s<<endl;
*/


    /// string to integer
/*
    string s = "12345";
    int a = stoi(s);
    cout<<a<<endl;
    a++;
    cout<<a<<endl;
*/





























    return 0;
}


