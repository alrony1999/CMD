#include<iostream>
#include<dir.h>
#include<dirent.h>
#include<windows.h>
#include<sstream>
#include<conio.h>
#include<process.h>
#include<stdio.h>
#include<fstream>
using namespace std;


int direct_2(string &command , string &command_1) 

{ struct dirent *de;
   string c=string(".//Outputs//")+command+"//"+command_1;
      DIR *dr = opendir(c.c_str()); 
    if (dr == NULL) 
	{ printf("Could not open current directory" ); } 
    while ((de = readdir(dr)) != NULL) 
			printf("%s\n", de->d_name); 

	closedir(dr);	 
cout<<endl;
} 

