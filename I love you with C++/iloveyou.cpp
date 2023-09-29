#include<iostream>
using namespace std;

int main()

{
   string input;

   cout<< "Do you love me? ";
   cout<< "If Yes, then Enter 'Yes' or if the answe is no then enter 'No' :] ";

   cin>> input;

   if(input=="yes" || input=="Yes")
   cout<< "I Love you";

   if(input=="no" || input=="No")
   cout<< "Its ok no problem " << "\n" << "Have a nice day";



}
