#pragma once
#include "login.h"
class serverController
{
private:
    Login* m_login;
public:
    serverController(/* args */);
    ~serverController();
    void process(int& fd,char* buff,int size);
};

