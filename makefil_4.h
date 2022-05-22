#include<iostream>
#include<dir.h>
#include<windows.h>
#include<sstream>
#include<conio.h>
#include<process.h>
#include<stdio.h>
#include<fstream>

using namespace std;

int makefil_4(){
	string filename;
	cin>>filename;
	 ostringstream buffer;
        buffer<<".\\Outputs\\"<<filename;
        if(ifstream(buffer.str().c_str())){
         cout << "Error:File '"<<filename<<"' already exists in current directory" <<endl;cout<<endl;
	    return false;}
        ofstream file(buffer.str().c_str());
        if(!file){
        cout<<"Error in creating file\n"<<endl;cout<<endl;
        }else if(file){
        cout<<"File '"<<filename<<"'created\n"<<endl;cout<<endl;}
        file.close();
}


