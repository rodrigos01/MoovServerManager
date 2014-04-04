#ifndef SERVER_H
#define SERVER_H
#include <string>

using namespace std;

class Server
{
public:
    Server();
    void setName(string newName);
    string getName();
    void setPath(string newPath);
    string getPath();
    void useProxy(bool useProxy);
    bool usingProxy();
    bool equals(Server &o);

private:
    string name;
    string path;
    bool proxy;
};

#endif // SERVER_H
