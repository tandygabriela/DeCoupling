//
//  PersonDaoImpl.cpp
//  test_gtest_2
//
//  Created by Kyle Griffin on 6/12/20.
//  Copyright © 2020 Kyle Griffin. All rights reserved.
//

#include "Person.hpp"
#include "PersonDao.hpp" 
#include "PersonImpl.h"

void PersonImpl::save(Person *p_ptr) {
    cout << "saved: " << *p_ptr << endl;
}

void PersonImpl::update(Person *p_ptr) {
    cout << "updating: " << *p_ptr << endl;
}

void PersonImpl::remove(Person *p_ptr) {
    cout << "removing: " << *p_ptr << endl;
}

Person PersonImpl::find(string name, PersonDao* pd) {
    Person p("Fred", 50, pd);
    cout << "found: " << p << endl;
    return p;
}
PersonImpl::PersonImpl() {}
PersonImpl::~PersonImpl() {}

