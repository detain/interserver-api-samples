

#include "PlaceBuyNowServer_request.h"

using namespace Tiny;

PlaceBuyNowServer_request::PlaceBuyNowServer_request()
{
	server_id = float(0);
	server_hostname = std::string();
	server_root_password = std::string();
}

PlaceBuyNowServer_request::PlaceBuyNowServer_request(std::string jsonString)
{
	this->fromJson(jsonString);
}

PlaceBuyNowServer_request::~PlaceBuyNowServer_request()
{

}

void
PlaceBuyNowServer_request::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *server_idKey = "server_id";

    if(object.has_key(server_idKey))
    {
        bourne::json value = object[server_idKey];



        jsonToValue(&server_id, value, "long");


    }

    const char *server_hostnameKey = "server_hostname";

    if(object.has_key(server_hostnameKey))
    {
        bourne::json value = object[server_hostnameKey];



        jsonToValue(&server_hostname, value, "std::string");


    }

    const char *server_root_passwordKey = "server_root_password";

    if(object.has_key(server_root_passwordKey))
    {
        bourne::json value = object[server_root_passwordKey];



        jsonToValue(&server_root_password, value, "std::string");


    }


}

bourne::json
PlaceBuyNowServer_request::toJson()
{
    bourne::json object = bourne::json::object();





    object["server_id"] = getServerId();






    object["server_hostname"] = getServerHostname();






    object["server_root_password"] = getServerRootPassword();



    return object;

}

long
PlaceBuyNowServer_request::getServerId()
{
	return server_id;
}

void
PlaceBuyNowServer_request::setServerId(long server_id)
{
	this->server_id = server_id;
}

std::string
PlaceBuyNowServer_request::getServerHostname()
{
	return server_hostname;
}

void
PlaceBuyNowServer_request::setServerHostname(std::string server_hostname)
{
	this->server_hostname = server_hostname;
}

std::string
PlaceBuyNowServer_request::getServerRootPassword()
{
	return server_root_password;
}

void
PlaceBuyNowServer_request::setServerRootPassword(std::string server_root_password)
{
	this->server_root_password = server_root_password;
}



