#include<iostream>
using namespace std;
void Mcode( float price,char code,float finalamount, float taxamount);
void Ecode( float price,char code,float finalamount, float taxamount);
void Scode( float price,char code,float finalamount, float taxamount);
void Vcode( float price,char code,float finalamount, float taxamount);
void Tcode( float price,char code,float finalamount, float taxamount);
main(){
float price,finalamount,taxamount;
char code;
    cout<<"Enter the vehicle type code (M, E, S, V, T): " ;
   cin>>code;
    cout<<"Enter the price of the vehicle: $" ;
    cin>>price;
if(code=='M'){
 Mcode(  price, code, finalamount,taxamount);
}
if(code=='E'){
 Ecode(  price, code, finalamount,taxamount);
}
if(code=='S'){
 Scode(  price, code, finalamount,taxamount);
}
if(code=='V'){
  Vcode(  price, code, finalamount,taxamount);
}
if(code=='T'){
 Tcode(  price, code, finalamount,taxamount);
}

}
void Mcode( float price,char code,float finalamount, float taxamount){
     taxamount=price*6/100;
finalamount=price+taxamount;
    cout<<"The final price of a vehicle of type "<<code<<" after adding the tax is $"<<finalamount<<".00.";
}
void Ecode( float price,char code,float finalamount, float taxamount){
     taxamount=price*8/100;
finalamount=price+taxamount;
    cout<<"The final price of a vehicle of type "<<code<<" after adding the tax is $"<<finalamount<<".00.";
}
void Scode( float price,char code,float finalamount, float taxamount){
     taxamount=price*10/100;
finalamount=price+taxamount;
    cout<<"The final price of a vehicle of type "<<code<<" after adding the tax is $"<<finalamount<<".00.";
}
void Vcode( float price,char code,float finalamount, float taxamount){
    taxamount=price*12/100;
finalamount=price+taxamount;
    cout<<"The final price of a vehicle of type "<<code<<" after adding the tax is $"<<finalamount<<".00.";
}
void Tcode( float price,char code,float finalamount, float taxamount){
     taxamount=price*15/100;
finalamount=price+taxamount;
    cout<<"The final price of a vehicle of type "<<code<<" after adding the tax is $"<<finalamount<<".00.";
}

