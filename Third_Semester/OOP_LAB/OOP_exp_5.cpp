#include<iostream>
#include<cmath>
#define PI 3.1416
using namespace std;
int volume (int, int, int);
int volume(int);
float volume (float,float);
int main(){
    long long length, width, height;
    long side;
    double r,h;
    cout<<"Enter length, width and height of rectangle: ";
    cin>>length>>width>>height;
    cout<<"Volume of rectangle: "<<volume(length, width, height);
    cout<<"\nEnter the side of cube: ";
    cin>>side;
    cout<<"Volume of cube: "<<volume(side);
    cout<<"\nEnter the radius and height of cylinder: ";
    cin>>r>>h;
    cout<<"Volume of cylinder: "<<volume(r, h)<<endl;
}
int volume (int length, int width, int height){
    return (length*width*height);
}
int volume (int side){
    return (side*side*side);
}
float volume (float r, float h){
    return (PI*r*r*h);
}