#include<iostream>
#include<dir.h>
#include<windows.h>
#include<sstream>
#include<conio.h>
#include<process.h>
#include<stdio.h>
#include<fstream>

using namespace std;

int makefil_9(string &command_4,string &b){
	
	cin>>b;
	 ostringstream buff;
        buff<<".\\Outputs\\"<<command_4<<"\\"<<b;
     if(ifstream(buff.str().c_str())){
        cout << "Error:File '"<<b<<"' already exists in current directory" <<endl;cout<<endl;
         return false;}
         ofstream file(buff.str().c_str());
        if(!file){
        cout<<"Error in creating file\n"<<endl;cout<<endl;
        }else if(file){
        cout<<"File '"<<b<<"' created"<<endl;cout<<endl;}
        file.close();
}


       
