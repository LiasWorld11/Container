#include <iostream>
#include "list_proDS.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

#ifndef _CONTAINER_
#define _CONTAINER_

int main(int argc, char** argv) {
	
	//c1:
    // Create container 1 that have the argument of 50 
    
    Container<int> c1(50);
    
    //add data in the c1 container
  	c1.addData(40);
	c1.addData(20);
	c1.addData(10);
	c1.addData(24);
	
	//print c1
    c1.print();
    
    // Delete data in c1 
    c1.deleteData(20);
    
    //print c1
    c1.print();
    
	//****************************************************
	
	//c2:
    // Create container 2 that have the argument of 50 
    Container<double> c2(50);
    
   //add data in the c2 container
  	c2.addData(20.40);
	c2.addData(31.33);
	c2.addData(43.22);
	
	//print c1
    c2.print();
    
    // Delete data in c1 
    c2.deleteData(31.33);
 
    //print c1
    c2.print();
	
	/* *****************EEROR PART***********************
	
	c1:
    Container<int> c1(50);
    //add data in the c1 container
  	c1.addData(1);
	c1.addData(2);
	c1.addData(3);
	c1.addData(4);
	c1.addData(5);
	c1.addData(6);
	c1.addData(7);
	c1.addData(8);
	c1.addData(9);
	c1.addData(10);
	
	c1.addData(1);
	c1.addData(2);
	c1.addData(3);
	c1.addData(4);
	c1.addData(5);
	c1.addData(6);
	c1.addData(7);
	c1.addData(8);
	c1.addData(9);
	c1.addData(10);
	
	c1.addData(1);
	c1.addData(2);
	c1.addData(3);
	c1.addData(4);
	c1.addData(5);
	c1.addData(6);
	c1.addData(7);
	c1.addData(8);
	c1.addData(9);
	c1.addData(10);
	
	c1.addData(1);
	c1.addData(2);
	c1.addData(3);
	c1.addData(4);
	c1.addData(5);
	c1.addData(6);
	c1.addData(7);
	c1.addData(8);
	c1.addData(9);
	c1.addData(10);
	
	c1.addData(1);
	c1.addData(2);
	c1.addData(3);
	c1.addData(4);
	c1.addData(5);
	c1.addData(6);
	c1.addData(7);
	c1.addData(8);
	c1.addData(9);
	c1.addData(10);
	
	c1.addData(11);
	c1.addData(12);
	
	//print c1
    c1.print();
    
    //****************************************************
    
    //c2:
    Container<double> c2(50);
    //add data in the c2 container
    c2.addData(1.4);
    c2.addData(3.33);
    c2.addData(4.22);
    
    //print c2
    c2.print();
    
    //delete data in c2
    c2.deleteData(1.33);
    
    //print 
    c2.print();
    
    */ 
    
    return 0;
    
}
#endif
