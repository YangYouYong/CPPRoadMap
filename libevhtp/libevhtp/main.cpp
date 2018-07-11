//
//  main.cpp
//  libevhtp
//
//  Created by yangyouyong on 2018/7/4.
//  Copyright © 2018年 vechain. All rights reserved.
//

#include <iostream>

#include <event.h>
#include <evhttp.h>
#include <event2/event.h>
#include <event2/http.h>
#include <event2/buffer.h>
#include <event2/util.h>
#include <event2/keyvalq_struct.h>

#include <stdlib.h>
#include <stdio.h>
//export EVENT_NOKQUEUE=1;

#include "hellowordtest.hpp"
#include "httpserver.hpp"
#include "httpconnect.hpp"

using namespace std;

void HttpGenericCallback(struct evhttp_request* request, void* arg)
{
    const struct evhttp_uri* evhttp_uri = evhttp_request_get_evhttp_uri(request);
    char url[8192];
    evhttp_uri_join(const_cast<struct evhttp_uri*>(evhttp_uri), url, 8192);

    printf("accept request url:%s\n", url);

    struct evbuffer* evbuf = evbuffer_new();
    if (!evbuf)
    {
        printf("create evbuffer failed!\n");
        return ;
    }

    evbuffer_add_printf(evbuf, "Server response. Your request url is %s", url);
    evhttp_send_reply(request, HTTP_OK, "OK", evbuf);
    evbuffer_free(evbuf);
}

void testHttpServer() {
    int port = 9900;
    
    struct event_base* base = event_base_new();
    if (!base)
    {
        printf("create event_base failed!\n");
        return ;
    }
    
    struct evhttp* http = evhttp_new(base);
    if (!http)
    {
        printf("create evhttp failed!\n");
        return ;
    }
    
    if (evhttp_bind_socket(http, "127.0.0.1", port) != 0)
    {
        printf("bind socket failed! port:%d\n", port);
        return ;
    }
    
    evhttp_set_gencb(http, HttpGenericCallback, NULL);
    
    event_base_dispatch(base);
}

int main(int argc, char** argv)
{
//    testHttpServer();
//    testHelloworld();
//    testServer();
    testConnect();
    
    
    return 0;
}
