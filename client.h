#pragma once

#include <errno.h>
#include <netdb.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <unistd.h>

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

class Client {
public:
    Client();
    ~Client();
    void run();

protected:
    virtual void create();
    virtual void close_socket();
    void echo();
    bool send_request(string);
    bool get_response();
    
    int server_;
    int buflen_;
    char* buf_;

    //The function below are not from CS360

    string name;
    string subject;
    string message;
    int index;

    string transform_reuqest(string &);
    string parse_request(string &);
    string token_getter(string &);
    string parse_send(string &);
    int parse_index(string &);
    string parse_message(string &);
    string parse_list(string &);
    int count_message_length(string &);
/*
*
*
*
*/
};
