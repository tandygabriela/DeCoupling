#pragma once

class PersonDao;

class PersonImpl : public PersonDao {
public:
	PersonImpl();
	~PersonImpl();
    void save(Person* p);
    Person find(std::string name, PersonDao* pd);
    void update(Person* p);
    void remove(Person* p);
};
