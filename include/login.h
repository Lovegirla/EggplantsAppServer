#pragma once
#include <mysql/mysql.h>
class Login
{
private:
    MYSQL* m_database;
public:
    Login(/* args */);
    ~Login();
};