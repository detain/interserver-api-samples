

#include "ServerRow.h"

using namespace Tiny;

ServerRow::ServerRow()
{
	server_id = std::string();
	account_lid = std::string();
	server_hostname = std::string();
	server_status = std::string();
}

ServerRow::ServerRow(std::string jsonString)
{
	this->fromJson(jsonString);
}

ServerRow::~ServerRow()
{

}

void
ServerRow::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *server_idKey = "server_id";

    if(object.has_key(server_idKey))
    {
        bourne::json value = object[server_idKey];



        jsonToValue(&server_id, value, "std::string");


    }

    const char *account_lidKey = "account_lid";

    if(object.has_key(account_lidKey))
    {
        bourne::json value = object[account_lidKey];



        jsonToValue(&account_lid, value, "std::string");


    }

    const char *server_hostnameKey = "server_hostname";

    if(object.has_key(server_hostnameKey))
    {
        bourne::json value = object[server_hostnameKey];



        jsonToValue(&server_hostname, value, "std::string");


    }

    const char *server_statusKey = "server_status";

    if(object.has_key(server_statusKey))
    {
        bourne::json value = object[server_statusKey];



        jsonToValue(&server_status, value, "std::string");


    }


}

bourne::json
ServerRow::toJson()
{
    bourne::json object = bourne::json::object();





    object["server_id"] = getServerId();






    object["account_lid"] = getAccountLid();






    object["server_hostname"] = getServerHostname();






    object["server_status"] = getServerStatus();



    return object;

}

std::string
ServerRow::getServerId()
{
	return server_id;
}

void
ServerRow::setServerId(std::string server_id)
{
	this->server_id = server_id;
}

std::string
ServerRow::getAccountLid()
{
	return account_lid;
}

void
ServerRow::setAccountLid(std::string account_lid)
{
	this->account_lid = account_lid;
}

std::string
ServerRow::getServerHostname()
{
	return server_hostname;
}

void
ServerRow::setServerHostname(std::string server_hostname)
{
	this->server_hostname = server_hostname;
}

std::string
ServerRow::getServerStatus()
{
	return server_status;
}

void
ServerRow::setServerStatus(std::string server_status)
{
	this->server_status = server_status;
}



