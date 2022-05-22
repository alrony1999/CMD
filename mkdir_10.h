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

int mkdir_10(string &command_4 , string &command_5,string &g){
	
        
	     cin>>g;
        ostringstream buff;
        buff<<".\\Outputs\\"<<command_4<<"\\"<<command_5<<"\\"<<g,
        CreateDirectory(buff.str().c_str(),NULL);
        if(CreateDirectory(buff.str().c_str(),NULL)!=0){
        cout<<"Directory"<<"'"<<g<<"'"<<" already exist"<<endl;}
		else{cout<<"Directory"<<"'"<<g<<"'"<<"created "<<"\n"<<endl;}}
