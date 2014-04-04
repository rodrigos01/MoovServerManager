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
}

Server ServerList::get(int index)
{
    return list[index];
}

Server ServerList::reset()
{
    pointer = 0;
    return current();
}

Server ServerList::next()
{
    if(pointer < size-1)
    {
        pointer++;
        return current();
    }
    else
    {
        return false;
    }
}

Server ServerList::current()
{

    return get(pointer);
}

Server ServerList::prev()
{
    if(pointer > 0)
    {
        pointer--;
        return current();
    }
    else
    {
        return false;
    }
}

Server ServerList::end()
{
    pointer = size-1;
    return current();
}

void ServerList::remove(Server server)
{
    for(int c=0; c<size; c++)
    {
        if(server.equals(list[c]))
        {
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
}
