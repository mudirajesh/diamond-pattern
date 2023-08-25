// C++ code to demonstrate pattern printing
#include <iostream>
using namespace std;

// Driver Code
int main()
{
   
   int n=5,space=0;

   for(int i=1;i<=n;i++){

    //alphabets 
    for(int j=i;j<=n;j++){
        cout<<"* ";
    }

    for(int j=1;j<=space;j++){
    cout<<"  "; 
    }

    for(int j=i;j<=n;j++){
    cout<<"*"<<" "; 
    }

   

    space+=2;
    cout<<endl;
   }

   space = 8;

   for(int i=1;i<=n;i++){

    //alphabets 
    for(int j=1;j<=i;j++){
        cout<<"* ";
    }

    
    for(int j=1;j<=space;j++){
    cout<<"  "; 
    }

    for(int j=1;j<=i;j++){
    cout<<"* "; 
    }


    space-=2;

    cout<<endl;  // next line
    
    }
    
    return 0;
    
}