

#include "LoginServiceCounts.h"

using namespace Tiny;

LoginServiceCounts::LoginServiceCounts()
{
	vps = int(0);
	websites = int(0);
	servers = int(0);
}

LoginServiceCounts::LoginServiceCounts(std::string jsonString)
{
	this->fromJson(jsonString);
}

LoginServiceCounts::~LoginServiceCounts()
{

}

void
LoginServiceCounts::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *vpsKey = "vps";

    if(object.has_key(vpsKey))
    {
        bourne::json value = object[vpsKey];



        jsonToValue(&vps, value, "int");


    }

    const char *websitesKey = "websites";

    if(object.has_key(websitesKey))
    {
        bourne::json value = object[websitesKey];



        jsonToValue(&websites, value, "int");


    }

    const char *serversKey = "servers";

    if(object.has_key(serversKey))
    {
        bourne::json value = object[serversKey];



        jsonToValue(&servers, value, "int");


    }


}

bourne::json
LoginServiceCounts::toJson()
{
    bourne::json object = bourne::json::object();





    object["vps"] = getVps();






    object["websites"] = getWebsites();






    object["servers"] = getServers();



    return object;

}

int
LoginServiceCounts::getVps()
{
	return vps;
}

void
LoginServiceCounts::setVps(int vps)
{
	this->vps = vps;
}

int
LoginServiceCounts::getWebsites()
{
	return websites;
}

void
LoginServiceCounts::setWebsites(int websites)
{
	this->websites = websites;
}

int
LoginServiceCounts::getServers()
{
	return servers;
}

void
LoginServiceCounts::setServers(int servers)
{
	this->servers = servers;
}



