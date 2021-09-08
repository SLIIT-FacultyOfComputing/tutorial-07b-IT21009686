class Item {
   private:
      int itemCode;
      float unitPrice;
      float discount; // out of 100 e.g. discount = 15
   public:
      Item();//default constructor
      Item(int pitemCode, float puPrice);//overloaded constructor
      ~Item();//destructor
      void setDiscount(float pDiscount);
      float getDiscount();
      float discountedPrice();
      void display();      
};
