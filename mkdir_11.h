#include<iostream>
#include<dir.h>
#include<windows.h>
#include<sstream>
#include<dirent.h>
#include<conio.h>
#include<process.h>
#include<stdio.h>
#include<fstream>

using namespace std;

int mkdir_11( string &command_6,string &command_7,string &p){
	
        
	     cin>>p;
        ostringstream buff;
        buff<<".\\Outputs\\"<<command_6<<"\\"<<command_7<<"\\"<<p,
        CreateDirectory(buff.str().c_str(),NULL);
        if(CreateDirectory(buff.str().c_str(),NULL)!=0){
        cout<<"Directory"<<"'"<<p<<"'"<<" already exist"<<endl;}
		else{cout<<"Directory"<<"'"<<p<<"'"<<"created "<<"\n"<<endl;}}
