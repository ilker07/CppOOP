
#ifndef NOKTAOOP_H
#define NOKTAOOP_H


#include <iostream> 
using namespace std;



class noktaoop
{
	private:
		int x;
		int y;
		static int j;
	public:
		noktaoop uzaklikHesapla(noktaoop n1, noktaoop n2);
		//noktaoop();
		int *ptr;
		static int i;
		noktaoop(int=0,int=0);
		void setX(int);
		int getX()const;
		void setY(int);
		int getY()const;
	//	~noktaoop();
	    static int getJ();
	    static void  setJ(int);
	   
	
		
	
		
	
	
};

#endif

