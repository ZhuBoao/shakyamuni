//
// Created by kakarotto on 1/3/17.
//

#ifndef SHAKYAMUNI_TEST_H
#define SHAKYAMUNI_TEST_H

class Test{
private:
    int id;
public:
    Test &setid(const int &id){
        this->id = id;
        return *this;
    }
    const int &getid(){
        return this->id;
    }
};

#endif //SHAKYAMUNI_TEST_H
