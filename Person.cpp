//
//  person.cpp
//  test_gtest_2
//
//  Created by Kyle Griffin on 6/12/20.
//  Copyright © 2020 Kyle Griffin. All rights reserved.
//

#include <sstream>
#include <iostream>
#include "Person.hpp"
#include "PersonDao.hpp"
#include "PersonImpl.h"

Person::Person(string name, int age, PersonDao* pd): dao(pd)  {
    this->name = name;
    this->age = age;
    dao = new PersonImpl();
    }

Person::~Person(){
    //nothing to do
    dao = NULL;
    delete dao;
}

string Person::getName() const {
    return name;
}

int Person::getAge() const {
    return age;
}

void Person::setAge(int age) {
    this->age = age;
}

void Person::save() {
    cout << "This is Person save function" << endl;
    dao->save(this);
}

void Person::update() {
    dao->update(this);
}

void Person::remove() {
    dao->remove(this);
}

Person Person::find(string name, PersonDao* pd) {
    Person p("",1, pd);
    return p.dao->find(name, pd);
}

string Person::toString() const {
    std::ostringstream oss;
    oss << name << " is " << age << " years old.";
    return oss.str();
}

ostream& operator<<(ostream& os, const Person& person) {
    return os << person.toString();
}
