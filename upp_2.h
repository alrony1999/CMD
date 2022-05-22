#include <iostream>

using namespace std;

void cap_4_4(string &command_4)
{
	bool check;
	check=false;		
	for(int j=0;j<command_4.length();j++)
	{
		if(check==false && (command_4.at(j)>='a' && command_4.at(j)<='z')  )//check if its a new word. 
			command_4.at(j)=command_4.at(j)+'A'-'a';
		
		if((command_4.at(j)>='a' && command_4.at(j)<='z') || (command_4.at(j)>='A' && command_4.at(j)<='Z') )//you can also change this condition to check for a space in the string
			check=true;							//if(str.at(i)!=' ')		
		else 									//true... if character at i is an alphabet and false if not
			check=false;							//it reiterates and changes the case of the next character depending on the condition
	}
}



