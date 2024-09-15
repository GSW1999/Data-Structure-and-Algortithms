#include<iostream>
using namespace std;
int main(){
/* 
// Print Pattern

// ****      **
// ****      **
// ****      

    int i=1,j,n;
    cout<<"Enter n : ";
    cin>>n;
    while(i<=n){
        j=1;
        while(j<=n){
            cout<<"*";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
*/

 /*
 // Print Pattern
    
// 111      1111
// 222      2222
// 333      3333
//          4444

    int i=1,j,n;
    cout<<"Enter n : ";
    cin>>n;
    while(i<=n){
        j=1;
        while(j<=n){
            cout<<i;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
*/

/*
// Print Pattern

// 123      1234
// 123      1234
// 123      1234
//          1234

    int i=1,j,n;
    cout<<"Enter n : ";
    cin>>n;
    while(i<=n){
        j=1;
        while(j<=n){
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
*/

/*
// Print Pattern
  
// 321      4321
// 321      4321
// 321      4321
//          4321

    // int i=1,j,n;
    // cout<<"Enter n : ";
    // cin>>n;
    // while(i<=n){
    //     j=4;
    //  while(j>=1){
    //     cout<<j;
    //     j--;
    //  }
    //     i++;
    //     cout<<endl;
    // }

    //or

    int i=1,j,n;
    cout<<"Enter n : ";
    cin>>n;
    while(i<=n){
        j=1;
    while(j<=n){
        cout<<n-j+1;
        j++;
    }
        i++;
        cout<<endl;
    }
*/

/*
// Print Pattern
    
// 123      
// 456      
// 789              

    int i=1,j=1,counter=1,n;
    cout<<"Enter n : ";
    cin>>n;
    while(i<=n){
        j=1;
        while(j<=n){
            cout<<counter;
            counter++;
            j++;
        }
        i++;
        cout<<endl;
    }
*/

/*
// Print Pattern
   
// *     
// **      
// ***      
// ****         

    int i=1,j,n;
    cout<<"Enter n : ";
    cin>>n;
    while(i<=n){
    j=1;
    while(j<=i)
    {
        cout<<"*";
        j++;
    }
        cout<<endl;
        i++;
    }
*/

/*
// Print Pattern
    
// 1     
// 22      
// 333      
// 4444

    int i = 1, j, n;
    cout << "Enter n : ";
    cin >> n;
    while (i <= n)
    {

        j = 1;
        while (j <= i)
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
    */

/*
// Print Pattern
    
// ****     
// ***      
// **      
// *
   int i = 1, j, n;
    cout << "Enter n : ";
    cin >> n;
    while (i <= n)
    {
        j = 1;
        while (j <= n-i+1)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
*/

/*
// Print Pattern
   
// 1  
// 23      
// 345      
// 4567

    int i = 1, j,val, n;
    cout << "Enter n : ";
    cin >> n;
    while (i <= n)
    {
        //with variable
            // j=1;
            // val=i;
            // while (j <=i)
            // {
            //     cout << val;
            //     val++;
            //     j++;
            // }
            // cout << endl;
            // i++;

        //Without varible
            // j=1;
            // while(j<=i){
            //     cout<<i+j-1;
            //     j++;
            // }
            // cout<<endl;
            // i++;

            //or

            // j=0;
            // while(j<i){
            //     cout<<i+j;
            //     j++;
            // }
            // cout<<endl;
            // i++;

    }
*/

/*
// Print Pattern
 
// 1  
// 21      
// 321      
// 4567

    int i = 1, j,val, n;
    cout << "Enter n : ";
    cin >> n;
    while (i <= n){
    //with variable
        //     val=i;
        //     j=1;
        //     while(j<=i){
        //         cout<<val;
        //         val--;
        //         j++;
        //     }
        //     cout<<endl;
        //     i++;
        

    //Witout variable
    j=1;
    while(j<=i){
        cout<<i-j+1;
        j++;
    }
    cout<<endl;
    i++;
   }

*/

/* 
// Print Pattern
 
// AAAA  
// BBBB      
// CCCC      
// DDDD

    int i = 1, j, n;
    cout << "Enter n : ";
    cin >> n;
    while (i <= n){
    j=1;
    while(j<=n){
        char a='A'+i-1;
        cout<<a;
        j++;
    }
    cout<<endl;
    i++;
    }
*/

/*
// Print Pattern
 
// ABC  
// ABC      
// ABC      

    int i = 1, j, n;
    cout << "Enter n : ";
    cin >> n;
    while (i <= n){
        j=1;
        while(j<=n){
            char ch='A'+j-1;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }
*/

/*
// Print Pattern
 
// ABC  
// BCD      
// DEF      

    int i = 1, j, n;
    cout << "Enter n : ";
    cin >> n;
    while (i <= n){
        j=1;
        // char ch='A'+i-1;
        // while(j<=n){                            //or if you poluate value of ch in  341 then formula will be 'A'+i+j-2
        //     char ch1=ch+j-1;
        //     cout<<ch1;
        //     j++;
        // }

        //or 

        // while(j<=n){
        // char ch='A'+i+j-2;
        // cout<<ch;
        // j++;
        // }

        //or 
        
        char ch='A'+i-1;
        while(j<=n){
            cout<<ch;
            ch++;
            j++;
        }


        cout<<endl;
        i++;
    }  
*/

/*
// Print Pattern
 
// D 
// CD      
// BCD
// ABCD      

    int i = 1, j, n;
    cout << "Enter n : ";
    cin >> n;
    while (i <= n){
    // j=1;
    // while(j<=i){
    //     char ch='A'+n-i+j-1;
    //     cout<<ch;
    //     j++;
    // }

    //or 
    j=1;
    char ch='A'+n-i;
    while(j<=i){
        cout<<ch;
        j++;
        ch+=1;
    }
    cout<<endl;
    i++;
    }
*/

/* 
// Print Pattern
 
//     *  
//    ** 
//   ***      
//  ****
// *****

    int i = 1, j, n, s;
    cout << "Enter n : ";
    cin >> n;
    while (i <= n)
    {
        j = 1;
        s = 1;
        while (s <= n - i)
        {
            cout << " ";
            s++;
        }
        while (j <= i)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
*/

/*
// Print Pattern
 
// 1111  
//  222 
//   33     
//    4

    int i = 1, j, n, s;
    cout << "Enter n : ";
    cin >> n;
    while (i <= n)
    {
        j = 1;
        s = 1;
        while (s <= i-1)
        {
            cout << " ";
            s++;
        }
        while (j <= n-i+1)
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
*/

/*
// Print Pattern
 
//    1  
//   22 
//  333     
// 4444

    int i = 1, j, n, s;
    cout << "Enter n : ";
    cin >> n;
    while (i <= n)
    {
        j = 1;
        s = 1;
        while (s <= n-i)
        {
            cout << " ";
            s++;
        }
        while (j <= i)
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
*/

/*
// Print Pattern
 
// 1234  
//  234 
//   34     
//    4

    int i = 1, j, n, s;
    cout << "Enter n : ";
    cin >> n;
    while (i <= n)
    {
        j = 1;
        s = 1;
        while (s <= i-1)
        {
            cout << " ";
            s++;
        }
        while (j <= n-i+1)
        {
            cout << i+j-1;
            j++;
        }
        cout << endl;
        i++;
    }
*/

/*
// Print Pattern
 
//        1    
//      2 3 
//    4 5 6     
// 7 8 9 10

    int i = 1, j, n, s,counter=1;
    cout << "Enter n : ";
    cin >> n;
    while (i <= n)
    {
        j = 1;
        s = 1;
        while (s <= n-i)
        {
            cout << "  ";
            s++;
        }
        while (j <= i)
        {
            cout << counter<<" ";
            j++;
            counter++;

        }
        cout << endl;
        i++;
    }
*/

/*
// Print Pattern
 
//    1    
//   121 
//  12321    
// 1234321

    int i = 1, j,k, n, s;
    cout << "Enter n : ";
    cin >> n;
    while (i <= n)
    {
        s = 1;
        while (s <= n-i)
        {
            cout << " ";
            s++;
        }
        j = 1;
        while (j <= i)
        {
            cout <<j;
            j++;
        }
        k=i-1;
        while(k){
            cout<<k;
            k--;
        }
        cout << endl;
        i++;
    }
*/

/*
// Print Pattern
 
// 12345677654321
// 123456**654321
// 12345****54321
// 1234******4321
// 123********321
// 12**********21
// 1************1

    int i = 1, j, k, n, s;
    cout << "Enter n : ";
    cin >> n;
    while (i <= n)
    {
        j = 1;
        while (j <= n-i+1)
        {
            cout << j;
            j++;
        }

        j=i-1;
        while(j){
            cout<<"*";
            j--;
        }
        j=i-1;
        while(j){
            cout<<"*";
            j--;
        }
        j = n - i + 1;
        while (j)
        {
            cout << j;
            j--;
        }
        cout << endl;
        i++;
    }
*/
   
}