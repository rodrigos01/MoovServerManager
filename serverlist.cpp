#include "serverlist.h"
#include "stdio.h"

ServerList::ServerList()
{
    size = 0;
    pointer = 0;
}

void ServerList::add(Server *server)
{
    int newSize = size+1;
    Server *oldList = list;
    list = new Server[newSize];
    for(int c=0; c<size; c++)
    {
        list[c] = oldList[c];
    }
    list[size] = *server;
    size = newSize;

    showItems();
}

void ServerList::remove(Server server)
{
    for(int c=0; c<size; c++)
    {
        if(list[c] == server) {
            int newSize = size-1;
            Server *oldList = list;
            list = new Server[newSize];
            for(int c=0; c<newSize; c++)
            {
                list[c] = oldList[c];
            }
            size = newSize;
        }
    }
    showItems();
}

void ServerList::showItems() {
    for(int c=0; c<size; c++)
    {
        printf("Server %d:\n", c+1);
        printf("Name : %s\n", list[c].getName().c_str());
        printf("Path : %s\n", list[c].getPath().c_str());
        printf("Using Proxy: ");
        if(list[c].usingProxy()) {
            printf("yes\n");
        } else {
            printf("no\n");
        }
    }
}
