//
//  Student.h
//  Finalproject_librarysystem
//
//  Created by 王奐揚 on 2019/6/16.
//  Copyright © 2019年 NCTU. All rights reserved.
//

#ifndef Student_h
#define Student_h
#include<string>

using namespace std;

class Student{
private:
    int _ID;
    string _student;
    string _dept;
public:
    void S_New(int,string,string);
    void S_get();
};

#endif /* Student_h */

