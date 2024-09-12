#include "serverController.h"
#include<stdio.h>  
#include<string.h>  
#include<unistd.h>  
#include <time.h>
serverController::serverController(/* args */)
{
    m_login = new Login();
}

serverController::~serverController()
{
    delete m_login;
}
void serverController::process(int& fd,char* buff,int size)
{
    buff[size] = '\0';
    printf("recv the client msg : %s\n", buff);
    char reply_msg[4096] = "I have received the msg: ";
    time_t timep;
    time (&timep);
    strftime(reply_msg,sizeof(reply_msg), "服务器当前时间%Y-%m-%d %H:%M:%S",localtime(&timep));
    // strcat(reply_msg + strlen(reply_msg), buff);
    write(fd, reply_msg, strlen(reply_msg));
}