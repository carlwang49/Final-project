//
//  Student.cpp
//  Finalproject_librarysystem
//
//  Created by 王奐揚 on 2019/6/16.
//  Copyright © 2019年 NCTU. All rights reserved.
//

#include <stdio.h>
#include"Student.h"


void Student:: S_New(int id,string student, string dept){
    _ID = id;
    _student = student;
    _dept = dept;
}

void Student:: S_get(){
    cout<<_ID<<endl;
    cout<<_student<<endl;
    cout<<_dept<<endl;
}
