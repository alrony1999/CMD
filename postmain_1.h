#include<iostream>
#include<dir.h>
#include<windows.h>
#include<sstream>
#include<conio.h>
#include<process.h>
#include<stdio.h>
#include<fstream>
using namespace std;
#include "makefil_4.h"
#include "makefil_5.h"
#include "makefil_6.h"
#include "makefil_7.h"

#include "mkdir_4.h"
#include "mkdir_5.h"
#include "mkdir_6.h"
#include "mkdir_7.h"

#include "remove_4.h"
#include "remove_5.h"
#include "remove_6.h"
#include "remove_7.h"

#include "dir_4.h"
#include "dir_5.h"
#include "dir_6.h"
#include "dir_7.h"

#include "describe_4.h"
#include "describe_5.h"
#include "describe_6.h"
#include "describe_7.h"


#include "upp_1.h"


string command,command_1,command_2;
string task;
string cd_2="cd",mkfile_2="mkfile",mkdir_13="mkdir",rm_2="rm",dir_2="dir",des_2="des",cd_21="cd..";
ostringstream buffer;

void postmain_1(){
	
	
	    cout<<"/>";cin>>task;cout<<endl;

		    if(task==dir_2){direct_4();cout<<"/>";cin>>task;cout<<endl;}
		    if(task==mkfile_2){makefil_4();cout<<"/>";cin>>task;cout<<endl;
			if(task==dir_2){direct_4();cout<<"/>";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_4();cout<<"/>";cin>>task;cout<<endl;
			if(task==dir_2){direct_4();cout<<"/>";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_4();cout<<"/>";cin>>task;cout<<endl;
			if(task==dir_2){direct_4();cout<<"/>";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_4();cout<<"/>";cin>>task;cout<<endl;
			if(task==dir_2){direct_4();cout<<"/>";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_4();cout<<"/>";cin>>task;cout<<endl;
			if(task==dir_2){direct_4();cout<<"/>";cin>>task;cout<<endl;}}
		

        if(task==cd_2){
         if(cin>>command){
		 cap(command);
		 ostringstream buffer;
		 buffer<<".\\Outputs\\"<<command<<"\\";
		 CreateDirectory(buffer.str().c_str(),NULL);
	    cout<<"/"<<command<<">";cin>>task;cout<<endl;
	    
	    if(task==mkfile_2){
	    	makefil_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
	      
		   if(task==mkfile_2){
	       	makefil_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
	       	
	       	if(task==mkfile_2){
			makefil_5(command);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}}
			
	       	
	       		       	
	       	if(task==mkdir_13){
			mkdir_5(command);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}}
		   
		   	if(task==des_2){
			describe_5(command);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	
	       	if(task==rm_2){
			destroy_5(command);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}}
	       	
	       	if(task==dir_2){
			direct_5(command);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}}
			
		
			
	else if(task==mkdir_13){
		mkdir_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
	
	     if(task==mkfile_2){
	       	makefil_5(command);
	       	cout<<"/"<<command<<">";cin>>task;cout<<endl;
	       	if(task==mkfile_2){makefil_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}}
	       	
	       	if(task==mkdir_13){
			mkdir_5(command);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}}
		   
		   	if(task==des_2){
			describe_5(command);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	
	       	if(task==rm_2){
			destroy_5(command);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}}
	       	
	       	if(task==dir_2){
			direct_5(command);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}}}
			
			else if(task==des_2){
			describe_5(command);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			     if(task==mkfile_2){
	       	makefil_5(command);
	       	cout<<"/"<<command<<">";cin>>task;cout<<endl;
	       	if(task==mkfile_2){makefil_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}}
	       	
	       	if(task==mkdir_13){
			mkdir_5(command);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}}
		   
		   	if(task==des_2){
			describe_5(command);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	
	       	if(task==rm_2){
			destroy_5(command);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}}
	       	
	       	if(task==dir_2){
			direct_5(command);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}}}
			
			else if(task==rm_2){
			destroy_5(command);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			
	        if(task==mkfile_2){
	       	makefil_5(command);
	       	cout<<"/"<<command<<">";cin>>task;cout<<endl;
	       	if(task==mkfile_2){makefil_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}}
	       	
	       	if(task==mkdir_13){
			mkdir_5(command);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}}
		   
		   	if(task==des_2){
			describe_5(command);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	
	       	if(task==rm_2){
			destroy_5(command);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}}
	       	
	       	if(task==dir_2){
			direct_5(command);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}}}
			
			else if(task==dir_2){
			direct_5(command);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			
			if(task==mkfile_2){
	       	makefil_5(command);
	       	cout<<"/"<<command<<">";cin>>task;cout<<endl;
	       	if(task==mkfile_2){makefil_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}}
	       	
	       	if(task==mkdir_13){
			mkdir_5(command);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}}
		   
		   	if(task==des_2){
			describe_5(command);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	
	       	if(task==rm_2){
			destroy_5(command);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}}
	       	
	       	if(task==dir_2){
			direct_5(command);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_5(command);cout<<"/"<<command<<">";cin>>task;cout<<endl;}}}}}}		
				  
		if(cin>>command_1){
		cap(command_1);
	     ostringstream buff;
		 buff<<".\\Outputs"<<"\\"<<command<<"\\"<<command_1<<"\\";
		 CreateDirectory(buffer.str().c_str(),NULL);
		 cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
		 if(task==mkfile_2){
	    	makefil_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
	      if(task==mkfile_2){
			makefil_6(command,command_1);
			cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}}
	       	
	       		       	
	       	if(task==mkdir_13){
			mkdir_6(command,command_1);
			cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}}
		   
		   	if(task==des_2){
			describe_6(command,command_1);
			cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}}
	       	
	       	if(task==rm_2){
			destroy_6(command,command_1);
			cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}}
	       	
	       	if(task==dir_2){
			direct_6(command,command_1);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}}
			
			}else if(task==mkdir_13){
				mkdir_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
				if(task==mkfile_2){
	        makefil_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
	       	if(task==mkfile_2){
			makefil_6(command,command_1);
			cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}}
	       	
	       		       	
	       	if(task==mkdir_13){
			mkdir_6(command,command_1);
			cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}}
		   
		   	if(task==des_2){
			describe_6(command,command_1);
			cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}}
	       	
	       	if(task==rm_2){
			destroy_6(command,command_1);
			cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}}
	       	
	       	if(task==dir_2){
			direct_6(command,command_1);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}}}}
			
		else if(task==des_2){
			describe_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){
	       makefil_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
	       	
	       	if(task==mkfile_2){
			makefil_6(command,command_1);
			cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}}
	       	
	       		       	
	       	if(task==mkdir_13){
			mkdir_6(command,command_1);
			cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}}
		   
		   	if(task==des_2){
			describe_6(command,command_1);
			cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}}
	       	
	       	if(task==rm_2){
			destroy_6(command,command_1);
			cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}}
	       	
	       	if(task==dir_2){
			direct_6(command,command_1);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}}}}
			
		else if(task==rm_2){
			destroy_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			
		if(task==mkfile_2){
			makefil_6(command,command_1);
			cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}}
	       	
	       		       	
	       	if(task==mkdir_13){
			mkdir_6(command,command_1);
			cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}}
		   
		   	if(task==des_2){
			describe_6(command,command_1);
			cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}}
	       	
	       	if(task==rm_2){
			destroy_6(command,command_1);
			cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}}
	       	
	       	if(task==dir_2){
			direct_6(command,command_1);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}}}
			
		else if(task==dir_2){
			direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;		
			
			if(task==mkfile_2){
			makefil_6(command,command_1);
			cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}}
	       	
	       		       	
	       	if(task==mkdir_13){
			mkdir_6(command,command_1);
			cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}}
		   
		   	if(task==des_2){
			describe_6(command,command_1);
			cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}}
	       	
	       	if(task==rm_2){
			destroy_6(command,command_1);
			cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}}
	       	
	       	if(task==dir_2){
			direct_6(command,command_1);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_6(command,command_1);cout<<"/"<<command<<"/"<<command_1<<">";cin>>task;cout<<endl;}}}}}			

		 
	   if(cin>>command_2){
	   cap(command_2);
       cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
     
        if(task==mkfile_2){
	    	makefil_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
	      if(task==mkfile_2){
			makefil_7(command,command_1,command_2);
			cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}}
	       	
	       		       	
	       	if(task==mkdir_13){
			mkdir_7(command,command_1,command_2);
			cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}}
		   
		   	if(task==des_2){
			describe_7(command,command_1,command_2);
			cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}}
	       	
	       	if(task==rm_2){
			destroy_7(command,command_1,command_2);
			cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}}
	       	
	       	if(task==dir_2){
			direct_7(command,command_1,command_2);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}}
			
			}else if(task==mkdir_13){
				mkdir_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
				if(task==mkfile_2){
	        makefil_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
	       	if(task==mkfile_2){
			makefil_7(command,command_1,command_2);
			cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}}
	       	
	       		       	
	       	if(task==mkdir_13){
			mkdir_7(command,command_1,command_2);
			cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}}
		   
		   	if(task==des_2){
			describe_7(command,command_1,command_2);
			cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}}
	       	
	       	if(task==rm_2){
			destroy_7(command,command_1,command_2);
			cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}}
	       	
	       	if(task==dir_2){
			direct_7(command,command_1,command_2);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}}}}
			
		else if(task==des_2){
			describe_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){
	       makefil_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
	       	
	       	if(task==mkfile_2){
			makefil_7(command,command_1,command_2);
			cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}}
	       	
	       		       	
	       	if(task==mkdir_13){
			mkdir_7(command,command_1,command_2);
			cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}}
		   
		   	if(task==des_2){
			describe_7(command,command_1,command_2);
			cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}}
	       	
	       	if(task==rm_2){
			destroy_7(command,command_1,command_2);
			cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}}
	       	
	       	if(task==dir_2){
			direct_7(command,command_1,command_2);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}}}}
			
		else if(task==rm_2){
			destroy_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			
		if(task==mkfile_2){
			makefil_7(command,command_1,command_2);
			cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}}
	       	
	       		       	
	       	if(task==mkdir_13){
			mkdir_7(command,command_1,command_2);
			cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}}
		   
		   	if(task==des_2){
			describe_7(command,command_1,command_2);
			cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}}
	       	
	       	if(task==rm_2){
			destroy_7(command,command_1,command_2);
			cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}}
	       	
	       	if(task==dir_2){
			direct_7(command,command_1,command_2);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}}}
			
		else if(task==dir_2){
			direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;		
			
			if(task==mkfile_2){
			makefil_7(command,command_1,command_2);
			cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}}
	       	
	       		       	
	       	if(task==mkdir_13){
			mkdir_7(command,command_1,command_2);
			cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}}
		   
		   	if(task==des_2){
			describe_7(command,command_1,command_2);
			cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}}
	       	
	       	if(task==rm_2){
			destroy_7(command,command_1,command_2);
			cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}}
	       	
	       	if(task==dir_2){
			direct_7(command,command_1,command_2);
			cout<<"/"<<command<<">";cin>>task;cout<<endl;
			if(task==mkfile_2){makefil_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==mkdir_13){mkdir_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==des_2){describe_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==rm_2){destroy_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}
	       	if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;
			if(task==dir_2){direct_7(command,command_1,command_2);cout<<"/"<<command<<"/"<<command_1<<"/"<<command_2<<">";cin>>task;cout<<endl;}}}}}}
	   }
}
