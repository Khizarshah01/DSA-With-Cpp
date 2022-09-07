#include <iostream>

using namespace std;

int main() {

   //Write your code here

 int n;

   cin >> n;

   int arr[ n ] ;

   for( int i=0 ; i<n ; i++ )   {

       cin >> arr[i];

   }

   

   int x;

   cin >> x ;

   int i;

   for( i=0 ; i<n ; i++ )  {     //Finding The Element..

       if ( arr[i] == x ) {    // If Find Then Return Index Of I...

           cout << i ; 

           break ;

       }

   }

   if( arr[i] != x )   {        // If Not Found Then Return -1...

       cout << -1 ;

   }

    

   return 0;

}

