#include "Item.h"
#include <iostream>
using namespace std;

// 4. Implement Default Constructor Implementation
Item:: Item(){
  itemCode = 0;
  unitPrice = 0;
  discount = 0;
}

// 5. Implement Overloaded Constructor Implementation
Item::Item(int pitemCode, float puPrice){
  itemCode = pitemCode;
  unitPrice = puPrice;
}

// 6. Implement Destructor (display "Destructor Called")
Item::~Item(){
  cout<< "Destructor Called" << endl;
}
//will automatically be called when the program terminates as 2 static objects where created. so the Destructor is called twice to delete both objects

void Item::setDiscount(float pDiscount) {
  discount = pDiscount;
}

float Item::getDiscount() {
  return discount;
}

float Item::discountedPrice() {
   return unitPrice - (unitPrice * discount/100);
}

void Item::display() {
  cout << "Item : " << itemCode << endl;
  cout << "Discounted Price " << discountedPrice() << endl;
}
