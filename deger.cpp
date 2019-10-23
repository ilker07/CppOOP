
#include "noktaoop.h"
#include "deger.h"

noktaoop deger::uzaklikHesapla(noktaoop *n1, noktaoop *n2)
{
  
    noktaoop uretilen(n1->getX()+n2->getX(),n1->getY()+n2->getY());
   	return uretilen;
}
