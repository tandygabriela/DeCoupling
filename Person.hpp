//
//  person.hpp
//  test_gtest_2
//
//  Created by Kyle Griffin on 6/12/20.
//  Copyright © 2020 Kyle Griffin. All rights reserved.
//

#ifndef person_hpp
#define person_hpp

#include <stdio.h>
#include <string>
#include <iostream>
#include "PersonDao.hpp"

using namespace std;

class PersonDao;

class Person {
public:
    Person(string name, int age, PersonDao* pd);
    ~Person();
    string getName() const;
    int getAge() const;
    void setAge(int age);
    string toString() const;
    friend ostream& operator<<(ostream& os, const Person& person);
    void save();
    void update();
    void remove();
    static Person find(string name, PersonDao* pd);
private:
    string name;
    int age;
    PersonDao* dao;
    PersonDao* dao2;
};

#endif /* person_hpp */
