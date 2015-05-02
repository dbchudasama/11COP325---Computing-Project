#include <stdio.h>
#include "std_lib_facilities.h"
#include<iostream>
#include<math.h>
#include<list>

using namespace std;

int extended_euclidean(int a, int n) // Function extended_euclidean 

{
    // Using the extended Euclidean algorithm to find integers x such and y such
    // that ax+ny = d, where d=gcd(a,n)

    int x,y,d,q,r;
    
    //Step 1.  
    if(n==0){ 
    d=a; // d<-a
    x=1; // x<-1
    y=0; // y<-0
        
    return d; // return result
}
    
    //Step 2.
    int x2=1; // x2<-1
    int x1=0; // x1<-0
    int y2=0; // y2<-0
    int y1=1; // y1<-1
   
    
    //Step 3.
    while (n>0) { // While n>0 do the following:
          
          q=a/n; // q<-a/n
          r=a-(q*n); // r<-a-(q*n)
          x =(x2-(q*x1)); // x<-(x2-(q*x1))
          y=y2-(q*y1); // y<-y2-(q*y1)
          a=n; // a<-n
          n=r; // n<-r
          x2=x1; // x2<-x1
          x1=x; // x1<-x
          y2=y1; // y2<-y1
          y1=y; // y1<-y
    }
    
    //Step 4.
    d=a; // d<-a
    x=x2; // x<-x2
    y=y2; // y<-y2
    
    return d; // return result
    
}   // This ends the extended Euclidean's algorithm

int main(){
    
int a;
int n;
    
    cout<<"\n a:";
    cin>>a;
    
    cout<<"\n n:";
    cin>>n;
    
    int x=extended_euclidean(a,n);
    
    cout<<"gcd("<<a<<","<<n<<")is:"<<x<<endl;
    
    keep_window_open();
    
    return 0;
    
}
