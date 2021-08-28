#include<bits/stdc++.h>
using namespace std;
int main()
{

//    vector<int>v;
//    v.push_back(3);
//    v.push_back(4);
//    v.push_back(35);
//    v.push_back(33);
//    v.push_back(32);
//    cout<<v[4]<<endl;
//    v[4] = 10;
//    cout<<v[3]<<endl;
//    cout<<v[4]<<endl;


    // Vector size()

//    cout<<v.size()<<endl;
//    for(int i=0; i<v.size(); i++)
//    {
//        cout<<v[i]<<"  ";
//    }
//    cout<<endl;






    ///comment out


/// vector input output

 /*
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++)
        {int a;
        cin>>a;
        v.push_back(a);
        }

    for(auto i:v)
        cout<<i<<"   ";

    cout<<endl;

  */
    // vector nth size ..
   /*
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
       int a;
       cin>>a;
       v.push_back(a);
       cout<<v[i]<<endl;
    }
    cout<<endl;
    for(int i=0; i<v.size(); i++)cout<<v[i]<<"  ";
    cout<<endl;
    */






    /// vector element print ..
/*
    vector<int>v = {23, 32, 43, 45, 55};
    cout<<v.size()<<endl;
    for(int i=0; i<v.size();i++)
        cout<<v[i]<<"  ";

    cout<<endl;
*/






    /// vector clear ... clear()
/*
    vector<int>v = {23, 32, 43, 45, 55};
    cout<<"Before Clear : "<<v.size()<<endl;
    v.clear();
    cout<<"After Clear : "<<v.size()<<endl;

    cout<<endl;
*/





    /// vector empty  ... empty() boolin return <if empty = 1 else = 0>
/*
    vector<int>v = {23, 32, 43, 45, 55};
    //cout<<"Before Clear : "<<v.size()<<endl;
    cout<<"Before empty  : "<<v.empty()<<endl;
    v.clear();
    //cout<<"After Clear : "<<v.size()<<endl;
    cout<<"After empty  : "<<v.empty()<<endl;

    cout<<endl;
*/






    /// vector resize .. resize()
/*
    vector<int>v = {23, 32, 43, 45, 55};
    cout<<v.size()<<endl;
    for(int i=0; i<v.size();i++)
        cout<<v[i]<<"  ";

    cout<<endl;

    cout<<"After resize "<<endl;
    v.resize(12);
    cout<<endl<<v.size()<<endl;
    for(int i=0; i<v.size();i++)
        cout<<v[i]<<"  ";

    cout<<endl;
    // v[10] take  input 12
    v[10]=12;
    for(int i=0; i<v.size();i++)
        cout<<v[i]<<"  ";

    cout<<endl;
    // no difference of array and vector like
    // vector<int>v(10) and array[10]


    cout<<endl<<"size th print "<<endl;
    vector<int>vec(10, 3);
    for(int i=0; i<vec.size();i++)
        cout<<vec[i]<<"    ";

    cout<<endl;
*/





    /// normal copy without function
/*
    vector<int>v = {23, 32, 43, 45, 55};
        cout<<v.size()<<endl;
    for(int i=0; i<v.size();i++)
        cout<<v[i]<<"  ";

    cout<<endl;
    vector<int>temp;
    temp = v;
    cout<<"After copy by temp :...."<<endl;
    cout<<temp.size()<<endl;
    for(int i=0; i<temp.size();i++)
        cout<<temp[i]<<"  ";

    cout<<endl;

*/





    /// vector iterator

    /**
    vector<int>v = {23, 32, 43, 45, 55,100};
    vector<int>::iterator it;
    for(it = v.begin(); it !=v.end(); it++){
        cout<<*it<<"  ";
    }
    cout<<endl;*/

    /// for each loop
/*
    vector<int>v = {23, 32, 43, 45, 55,100};

    for(int u:v){  // u = contener
        cout<<u<<"  ";
    }
    cout<<endl;
    /// vector auto ..
    for(auto u:v){  // u = contener
        cout<<u<<"  ";
    }
    cout<<endl;
*/





    /// vector sort ...
/*
    vector<int>v = {20, 50, 10, 10, 100, 200,150, 90, 15,5};

//    sort(v.begin(),v.end() );
//
//    for(auto u:v)
//        cout<<u<<"  ";

    cout<<endl;

    // n th sort ..
    sort(v.begin(),v.begin()+4 );/// Time complexity O(n log n)

    for(auto u:v)
        cout<<u<<"  ";

    cout<<endl;
 */






  /// Vector serial of Greatest number ... grater <int>
/*
  vector<int>v = {20, 50, 10, 10, 100, 200,150, 90, 15,5};

    sort(v.begin(),v.end(),greater<int>() );

    for(auto u:v)
        cout<<u<<"  ";
    cout<<endl;
*/





    /// Vector revers sort  for function rbegin()&rend()
/*

    vector<int>v = {20, 50, 10, 10, 100, 200,150, 90, 15,5};

    sort(v.rbegin(),v.rend() );

    for(auto u:v)
        cout<<u<<"  ";
    cout<<endl;
*/





    /// Vector revers   with function revers()

/*
    vector<int>v = {20, 50, 10, 10, 100, 200,150, 90, 15,5};

    reverse(v.begin(),v.end() );

    for(auto u:v)
        cout<<u<<"  ";
    cout<<endl;

    //reverse(v.rbegin(),v.rend() );

    for(auto u:v)
        cout<<u<<"  ";
    cout<<endl;
*/


    /// Sort for array []
/*
    int arr[11] = {20, 50, 10, 10, 100, 200,150, 90, 15,5};

    cout<<"Array : "<<endl;
    for(int i=0; i<10; i++)
        cout<<arr[i]<<"  ";
    cout<<endl;

    cout<<"Sort array : "<<endl;
    sort(arr,arr+10 );

    for(int i=0; i<10; i++)
        cout<<arr[i]<<"  ";
    cout<<endl;

    cout<<"Revers Sort array : "<<endl;
    sort(arr,arr+10,greater<int>() );

    for(int i=0; i<10; i++)
        cout<<arr[i]<<"  ";
    cout<<endl;

    /// revers  for array [] without sort..

    int ar[11] = {20, 50, 10, 10, 100, 200,150, 90, 15,5};

    reverse(ar,ar+10 );
    cout<<"Revers Number print : "<<endl;

    for(int i=0; i<10; i++)
        cout<<ar[i]<<"  ";
    cout<<endl;
*/





    /// Vector Last element print and delete ..
/*
    vector<int>v = {5, 10, 20, 50};
    for(auto i:v)
        cout<<i<<"   ";
    cout<<endl;
    cout<<v.back()<<endl;
    v.pop_back();
    cout<<v.back()<<endl;
*/



    /// Vector First element print and delete ..
/*
    vector<int>v = {5, 10, 20, 50};
    for(auto i:v)
        cout<<i<<"   ";
    cout<<endl;
    cout<<"Before Erase the first Value : "<<*v.begin()<<endl;/// TLE  O(1)
    cout<<"After erase first element :> "<<endl;
    v.erase(v.begin());
    cout<<"After Erase the first Value : "<<*v.begin()<<endl;
    for(auto i:v)
        cout<<i<<"   ";
    cout<<endl;
*/





    /// 5 10 12 20 30 50 45 100 25       :     input
    /// 5 12 30 45 25                    :     output

    vector<int>v = {5, 10,12, 20, 30, 50, 45, 100, 25, 150,200};
    int k=0,p=0;
    for(auto i:v){
        if(k==0)cout<<"Input : ";
        cout<<i<<"   ";
        k++;}
    cout<<endl;
    int siz,n=1,s;
    siz=v.size();
    cout<<"Size : "<<siz<<endl;
    for(n=1; n<=v.size(); n++){
    if(n%2!=0){
        v.erase(v.begin()+n);
        }
    }
    cout<<endl;
    s=v.size();
    cout<<"Size of vector : "<<s<<endl;
    for(auto i:v){
        if(p==0)cout<<"Output : ";
        cout<<i<<"   ";
        p++;}
    cout<<endl;















    return 0;
    /// Date : 28 August 2021.
}
