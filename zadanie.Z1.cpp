//https://www.onlinegdb.com/online_c++_compiler

#include <iostream>

using namespace std;

int main(){
    int x=0;
   string tekst;  // potrzebna deklaracja zmiennej lancuchowej
    
    getline(  cin ,tekst  );
    
    for (int i = 0 ; i<=tekst.length()  ; i++ ){
if (tekst[i] == ' ')
x++;
}
//cout<<tekst;
 //   cout<<tekst<<"\n";
 //   cout<<tekst[3]<<"\n";
 //   cout<<tekst.length()<<"\n";
    cout<<"tekst zawiera "<< x << " spacje .\n";
    

    return 0;
}
