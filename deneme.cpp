#include <iostream>

#include "noktaoop.h"
#include "deger.h"
using namespace std;


int main(int argc, char** argv) {

    noktaoop n1(5,4);
    noktaoop n2(3,6);
    
    
    //noktaoop n3(5,2);
    
    deger d;
    
    //cout<<noktaoop::i<<endl;
    //cout<<noktaoop::getJ()<<endl;
    
    cout <<(d.uzaklikHesapla(&n1,&n2)).getX()<<" ,"<<(d.uzaklikHesapla(&n1,&n2)).getY()<<endl;
    
    
    
    //noktaoop *ptr=new noktaoop(10,15);
    
    //cout<<ptr->getX();
    
   
 
  
	
return 0;	
}
