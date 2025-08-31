#include <iostream>
#include <string>
using namespace std;

int main() {
     
     string countries[10] = {"France", "England", "Portugal", "Brazil", "China", "Nigeria", "Ghana", "Japan", "Argentina", "Australia"};
     string capitals[10]  = {"Paris", "London", "Lisbon", "Brasilia", "Beijing", "Abuja", "Accra", "Tokyo", "Buenos Aires", "Canberra"};
     
     string country;
     string capital;
     
     
     country = countries[0];
     
     cout << "What is the capital of " << country << "? ";
     cin>> capital;
     
     if (capital==capitals[0]){
     	cout<<"Well done, that's correct!";
     	} else {
		 cout<<"your answer is wrong, that's not the rigth capital";
	 }
     

     
     
     
     return 0;
}

