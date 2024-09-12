#include "login.h"
#include <stdio.h>
#include <errno.h>
Login::Login(/* args */)
{
    auto database = mysql_init(m_database);
    if(database == nullptr)
    {
        perror("database error");
    }
    auto res = mysql_real_connect(database,"localhost","root","root","information_schem",0,nullptr,0);
    if(res == nullptr)
    {
        perror("m_database error");
    }
    auto ret = mysql_query(database,"show tables;");
    if(ret!=0)
    {
        perror("query error");
    }
    mysql_store_result(database);
}

Login::~Login()
{
    mysql_close(m_database);
    delete m_database;
}

