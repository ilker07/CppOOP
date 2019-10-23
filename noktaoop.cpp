#include "noktaoop.h" 
#include <iostream> 

int noktaoop::i=0;
int noktaoop::j=0;



noktaoop::noktaoop(int x,int y)
{
	
	this->x=x;
	this->y=y;
	i++;
	j++;
	//ptr=new int(5);
}
/*noktaoop::~noktaoop()
{
	delete ptr;
}
*/
void noktaoop::setX(int x)
{
	this->x=x;
}

int noktaoop::getX()const
{
	return x;
}

void noktaoop::setY(int y)
{
	this->y=y;
}

int noktaoop::getY()const
{
	return y;
}




int noktaoop:: getJ()
{
	return j;
}


void noktaoop::setJ(int _j)  //staticlerde this yok.
{
	j=_j;
}

noktaoop noktaoop ::uzaklikHesapla(noktaoop n1, noktaoop n2)
{
  
    noktaoop uretilen(n1.getX()+n2.getX(),n1.getY()+n2.getY());
   	return uretilen;
}


