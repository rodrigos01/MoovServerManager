#include "server.h"

Server::Server()
{
}

void Server::setName(string newName) {
    name = newName;
}

string Server::getName() {
    return name;
}

void Server::setPath(string newPath) {
    path = newPath;
}

string Server::getPath() {
    return path;
}

void Server::useProxy(bool useProxy) {
    proxy = useProxy;
}

bool Server::usingProxy() {
    return proxy;
}

bool Server::equals(Server &o)
{
    if(o.getName() == name && o.getPath() == path && o.usingProxy() == proxy)
    {
        return true;
    }
    else
    {
        return false;
    }
}
