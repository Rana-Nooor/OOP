#include <iostream>
#include <string>

class Invoice {

public:

   Invoice( std::string prtno, std::string prtdecp, int sqnt, int sprc ) :
      vat{ 0.2 },
      discount{ 0.0 } {
      setPartNumber( prtno );
      setPartDescription( prtdecp );
      setQuantity( sqnt );
      setItemPrice( sprc );
   }

   void setPartNumber( std::string prtno ) {
      partNumber = prtno;
   }

   void setPartDescription( std::string prtdecp ) {
      partDescription = prtdecp;
   }

   void setQuantity( int sqnt ) {
      if ( sqnt < 0 ) quantity = 0;
      if ( sqnt >= 0 ) quantity = sqnt;
   }

   void setItemPrice( int sprc ) {
      if ( sprc < 0 ) itemPrice = 0;
      if ( sprc >= 0 ) itemPrice = sprc;
   }

   void setVAT( double tax ) {
      if ( tax < 0 ) vat = 0.0;
      if ( tax >= 0 ) vat = tax;
   }

   void setDiscount( double dsc ) {
      if ( dsc < 0 ) discount = 0.0;
      if ( dsc >= 0 ) discount = dsc;
   }

   std::string getPartNumber() const {
      return partNumber;
   }

   std::string getPartDescription() const {
      return partDescription;
   }

   int getQuantity() const {
      return quantity;
   }

   int getItemPrice() const {
      return itemPrice;
   }

   double getVAT() const {
      return vat;
   }

   double getDiscount() const {
      return discount;
   }

   double getInvoiceAmount() const {
      return quantity * itemPrice * ( 1.0 - vat - discount );
   }

private:

   std::string partNumber;
   std::string partDescription;
   int quantity;
   int itemPrice;
   double vat;
   double discount;
};

using namespace std;

int main() {

   Invoice invoice( "AA", "Description", 100, -42 );

   cout << "INITIAL INVOICE"
      << "\n\n\nPart number:      " << invoice.getPartNumber()
      << "\n\n\nPart description: " << invoice.getPartDescription()
      << "\n\n\nQuantity:         " << invoice.getQuantity()
      << "\n\n\nItem price:       " << invoice.getItemPrice()
      << "\n\n\nVAT rate:         " << invoice.getVAT()
      << "\n\n\nDiscount rate:    " << invoice.getDiscount()
      << "\n\n\nInvoice amount:   " << invoice.getInvoiceAmount()
      << endl;

   invoice.setPartNumber( "AAA" );
   invoice.setPartDescription( "Modified description" );
   invoice.setQuantity( 10 );
   invoice.setItemPrice( 42 );
   invoice.setVAT( 0.15 );
   invoice.setDiscount( 0.05 );

   cout << "\n\n\nMODIFIED INVOICE"
      << "\n\n\nPart number:      " << invoice.getPartNumber()
      << "\n\n\nPart description: " << invoice.getPartDescription()
      << "\n\n\nQuantity:         " << invoice.getQuantity()
      << "\n\n\nItem price:       " << invoice.getItemPrice()
      << "\n\n\nVAT rate:         " << invoice.getVAT()
      << "\n\n\nDiscount rate:    " << invoice.getDiscount()
      << "\n\n\nInvoice amount:   " << invoice.getInvoiceAmount()
      << endl;

   return 0;
}
