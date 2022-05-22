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

int mkdir_9(string &command_4,string &c){
	

	     cin>>c;
        ostringstream buff;
        buff<<".\\Outputs\\"<<command_4<<"//"<<c,
        CreateDirectory(buff.str().c_str(),NULL);
        if(CreateDirectory(buff.str().c_str(),NULL)!=0){
        cout<<"Directory"<<"'"<<c<<"'"<<" already exist"<<endl;}
		else{cout<<"Directory"<<"'"<<c<<"'"<<"created "<<"\n"<<endl;}}
