//
//  MainBeforeMock.cpp
//  test_gtest_2
//
//  Created by Kyle Griffin on 6/12/20.
//  Copyright © 2020 Kyle Griffin. All rights reserved.
//

#include <stdio.h>
#include "Person.hpp"
#include "PersonDao.hpp"
#include "PersonImpl.h"
using namespace std;

int main(int argc, char* argv[]) {
    /*Person p("Dave", 40); 
    p.save();
    p.setAge(41);
    p.update();
    Person q = Person::find("Dave");
    cout << q << endl;
    p.remove();
    Person r = Person::find("Dave");
    cout << r << endl;*/
    PersonImpl pimp;

    Person p("Kevin", 9, &pimp);
    p.save();
    p.setAge(10);
    p.update();
    cout << Person::find("Kevin", &pimp) << endl;

    
}
