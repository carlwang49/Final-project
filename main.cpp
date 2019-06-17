//
//  main.cpp
//  Finalproject_librarysystem
//
//  Created by 王奐揚 on 2019/6/15.
//  Copyright © 2019年 NCTU. All rights reserved.
//




#include <iostream>
#include<string>
#include"Student.cpp"
#include <curses.h>
#include <stdlib.h>


using namespace std;

void Home_screen_user();
void login_screen();
void Home_screen_manager();
void New(int,string,string);
void New_screen();
int i = 0;



void login_screen(){
    string _password;
    
    cout<<"welcome to library system"<<endl;
    cout<<"enter your passsword:";
    cin>>_password;
    while(_password != "0000"){
        cout<<"密碼錯誤";
    };
    Home_screen_user();
}


void Home_screen_user(){
    cout<<"1.借書"<<endl;
    cout<<"2.還書"<<endl;
    cout<<"3.查詢"<<endl;
    cout<<"4.登出"<<endl;
}


void Home_screen_manager(){
    int temp;
    cout<<"1.新增"<<endl;
    cout<<"2.修改"<<endl;
    cout<<"3.查詢"<<endl;
    cout<<"4.登出"<<endl;
    cout<<"請選擇1~4:";
    cin>>temp;
    if(temp == 1){
        New_screen();
    }
}


void New_screen(){
    int id;
    system("clear");
    string student;
    string dept;
    cout<<"請輸入學號，姓名，系所：";
    cin>>id>>student>>dept;
    New(id,student,dept);
}





void New(int id,string student,string dept){
    Student n_student[i];
    n_student[i].S_New(id,student,dept);
    n_student[i].S_get();
    i++;
}




int main() {
    Home_screen_manager();
    return 0;
}
