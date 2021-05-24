
// #include <bits/stdc++.h>

// using namespace std;


// string findSum(string s1,string s2){

//     if(s1.length()>s2.length()){
//         swap(s1,s2);
//     }

//     reverse(s1.begin(),s1.end());
//     reverse(s2.begin(),s2.end());

//     int n1 = s1.length();
//     int n2 = s2.length();

//     int carry = 0;
//     string s;

//     for(int i=0;i<n1;i++){


//         int sum = ((s1[i]-'0')+(s2[i]-'0')+carry);

//         carry = sum/10;
//         s.push_back((sum%10)+'0');

        
//     }

//     for(int i=n1;i<n2;i++){

//         int sum  = ((s2[i]-'0')+carry);

//         s.push_back(sum+'0');

//         carry = sum/10;



//     }
//     if(carry){
//         s.push_back(carry+'0');
//     }
//     reverse(s.begin(), s.end()); 
//     return s;

// }

// int main(){

//     string s1;
//     string s2 ;

//     cout<<"Enter Nos."<<endl;
//     cin>>s1;
//     cin>>s2;

//     string sum;

    

//     sum = findSum(s1,s2);

//     cout<<"Addition is:"<<sum;

//     return 0;


// }

//=====================////Method-2==================================================================

#include <bits/stdc++.h>

using namespace std;


string findSum(string s1,string s2){

    if(s1.length()>s2.length()){
        swap(s1,s2);
    }

    // reverse(s1.begin(),s1.end());
    // reverse(s2.begin(),s2.end());

    int n1 = s1.length();
    int n2 = s2.length();

    int diff = n2-n1;

    int carry = 0;
    string s;

    for(int i=n1-1;i>=0;i--){


        int sum = ((s1[i]-'0')+(s2[i+diff]-'0')+carry);

        carry = sum/10;
        s.push_back((sum%10)+'0');

        
    }

    for(int i=n2-1-n1;i>=0;i--){

        int sum  = ((s2[i]-'0')+carry);

        s.push_back(sum+'0');

        carry = sum/10;



    }
    if(carry){
        s.push_back(carry+'0');
    }
     reverse(s.begin(), s.end());
    return s;

}

int main(){

    string s1 = "12";
    string s2  = "198111";

    

    string sum;

    

    sum = findSum(s1,s2);

    cout<<"Addition is:"<<sum;

    return 0;


}