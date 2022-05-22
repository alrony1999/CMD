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

void destroy_2(string &command, string &command_1,string &x){

 cin>>x;
      ostringstream buffer;
   buffer<<".\\Outputs\\"<<command<<"\\"<<command_1<<"\\"<<x;
    remove(buffer.str().c_str());
   if (remove(buffer.str().c_str())!= 0){
   cout<<"File deleted"<<endl;cout<<endl;}else{
   cout<<"Error: File '"<<x<<"' does not exist in current directory"<<endl;cout<<endl;}}
