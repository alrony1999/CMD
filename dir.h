#include <stdio.h> 
#include<iostream>
#include <dirent.h> 
using namespace std;


int direct(void) 

{ struct dirent *de; 
DIR *dr = opendir(".\\Outputs\\"); 
    if (dr == NULL) 
	{ printf("Could not open current directory" ); } 
    while ((de = readdir(dr)) != NULL) 
			printf("%s\n", de->d_name); 

	closedir(dr);	 
cout<<endl;
} 

