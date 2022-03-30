#include <iostream>
using namespace std;

int main() {
   float a=0, b=0, s=0;
   cout<<"inserire due valori reali a e b"<<endl;
   cin>>a>>b;
   int opzione;
   cout<<"inserire un valore intero opzione"<<endl;
   cin>>opzione;
   
   switch(opzione){
      case 0:
         s=(a*b)*0,5;
         cout<<s<<endl;
         break;
      case 1:
         s=a*a;
         cout<<s<<endl;
         break;
      case 2:
         s=a*b;
         cout<<s<<endl;
         break;
      default:
         cout<<"opzione non valida"<<endl;
         
      }      
   return 0;
}
