#include <iostream>
#include<dir.h>
#include<dirent.h>
#include  <windows.h>
#include<sstream>
#include <string>
#include<conio.h>
#include<process.h>
#include<stdio.h>
#include <fstream>  

using namespace std;

void destroy_3(string &command, string &command_1,string &command_2){
string filename;
 cin>>filename;
      ostringstream buffer;
   buffer<<".\\Outputs\\"<<command<<"\\"<<command_1<<"\\"<<command_2<<"\\"<<filename;
    remove(buffer.str().c_str());
   if (remove(buffer.str().c_str())!= 0){
   cout<<"File deleted"<<endl;cout<<endl;}else{
   cout<<"Error: File '"<<filename<<"' does not exist in current directory"<<endl;cout<<endl;}}
