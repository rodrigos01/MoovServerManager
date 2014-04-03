#include "servermanager.h"

ServerManager::ServerManager()
{

}

void ServerManager::addServer(Server *server)
{
    servers.add(server);
}
