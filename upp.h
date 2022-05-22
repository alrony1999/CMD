#include <iostream>

using namespace std;

void capitalize(string &command)
{
	bool check;
	check=false;		
	for(int j=0;j<command.length();j++)
	{
		if(check==false && (command.at(j)>='a' && command.at(j)<='z')  )//check if its a new word. 
			command.at(j)=command.at(j)+'A'-'a';
		
		if((command.at(j)>='a' && command.at(j)<='z') || (command.at(j)>='A' && command.at(j)<='Z') )//you can also change this condition to check for a space in the string
			check=true;							//if(str.at(i)!=' ')		
		else 									//true... if character at i is an alphabet and false if not
			check=false;							//it reiterates and changes the case of the next character depending on the condition
	}
}



