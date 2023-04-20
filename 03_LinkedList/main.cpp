#include <iostream>
#include "LinkedList.h"
using namespace std;


int main(int argc, char** argv) {
	
	LinkedList lk1;
	
	lk1.insertToHead(20);
	lk1.insertToHead(50);
	lk1.insertToTail(89);
	lk1.deleteFromTail();
	lk1.deleteByValue(50);
	
	lk1.printAll();
	
	return 0;
}