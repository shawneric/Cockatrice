#include "localserver.h"
#include "localserverinterface.h"

LocalServer::LocalServer(QObject *parent)
	: Server(parent)
{
}

LocalServer::~LocalServer()
{
}

LocalServerInterface *LocalServer::newConnection()
{
	LocalServerInterface *lsi = new LocalServerInterface(this);
	addClient(lsi);
	return lsi;
}

ServerInfo_User *LocalServer::getUserData(const QString &name)
{
	return new ServerInfo_User(name);
}