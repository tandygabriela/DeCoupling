//
//  PersonDaoImpl.hpp
//  test_gtest_2
//
//  Created by Kyle Griffin on 6/12/20.
//  Copyright © 2020 Kyle Griffin. All rights reserved.
//

#ifndef PersonDaoImpl_hpp
#define PersonDaoImpl_hpp

#include <stdio.h>
#include "PersonDao.hpp"

class Person;

class PersonDao {
public:
    virtual void save(Person *p) = 0;
    virtual Person find(std::string name, PersonDao* pd) = 0;
    virtual void update(Person *p) = 0;
    virtual void remove(Person *p) = 0;
    virtual ~PersonDao() {};
};


#endif /* PersonDaoImpl_hpp */
