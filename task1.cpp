#include<iostream>
using namespace std;
void meters( float length,float width,float height,string unit ,float vol);
void kilometers( float length,float width,float height,string unit,float vol);
void centimeters( float length,float width,float height,string unit,float vol);
void millimeters( float length,float width,float height,string unit,float vol);


main(){
    float length,width,height;
   

    string unit;
    cout<<"Enter the length of the pyramid (in meters): " ;
   cin>>length;
    cout<<"Enter the width of the pyramid (in meters): " ;
    cin>>width;
    cout<<"Enter the height of the pyramid (in meters): " ;
    cin>>height;
    cout<<"Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
cin>>unit;
 float vol=(length*width*height)/3;
if(unit=="millimeters"){
 millimeters(  length, width, height, unit,vol);
}
if(unit=="centimeters"){
 centimeters(  length, width, height, unit,vol);
}
if(unit=="kilometers"){
 kilometers(  length, width, height, unit,vol);
}
if(unit=="meters"){
 meters(  length, width, height, unit,vol);
}


}
void millimeters( float length,float width,float height,string unit ,float vol){
    float volume =vol;
    cout<<"The volume of the pyramid is: "<<volume<<"000000000.000 cubic millimeters";
}

void centimeters( float length,float width,float height,string unit ,float vol){
    double volume =vol;
    cout<<"The volume of the pyramid is: "<<volume<<"000000.000 cubic "<<unit;
}

void kilometers( float length,float width,float height,string unit ,float vol){
    float div=length/1000;
    cout<<div;
    float div1=width/1000;
    cout<<div1;
    float div2=height/1000;
    cout<<div2;
    float volume =(div*div1*div2)/3;
    cout<<"The volume of the pyramid is: "<<volume<<" cubic "<<unit;
}
void meters( float length,float width,float height,string unit ,float vol){
    int volume =vol;
   
    cout<<"The volume of the pyramid is: "<<volume<<".000000 cubic meters                ";
}

