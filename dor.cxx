#include <iostream>
using namespace std;
string input;
int main()
{
	string input;
	
	for(; ;){
	    cout << "Enter your action ( W A S D  or w a s d): ";
	   getline(cin, input);
	   
	   if (input == "W"){
	       cout <<"Oh youre moving to the up"<< endl;
	   }
	   else if(input == "A"){
	       cout <<"Oh you're moving to the left"<< endl;        
	    }
	   else if(input == "S"){
	       cout <<"Oh you're moving down"<< endl ;  
	    }
	    else if(input == "D"){
	       cout <<"Oh you're moving to the right"<< endl;       
	     }
	     else if (input == "w"){
	       cout <<"Oh youre moving to the up"<< endl;
	   }
	   else if(input == "a"){
	       cout <<"Oh you're moving to the left"<< endl;        
	    }
	   else if(input == "s"){
	       cout <<"Oh you're moving down"<< endl ;  
	    }
	    else if(input == "d"){
	       cout <<"Oh you're moving to the right"<< endl;       
	     }
	    else{
	       cout <<"Youre not moving you're just typing"<< endl;
	     }
	     
	}
	  
	
	
	return 0;
}