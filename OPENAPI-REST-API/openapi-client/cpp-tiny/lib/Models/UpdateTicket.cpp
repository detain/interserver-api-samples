

#include "UpdateTicket.h"

using namespace Tiny;

UpdateTicket::UpdateTicket()
{
	ip = std::string();
	ip_address = std::string();
	customer_server_access = std::string();
	root_password = std::string();
	sudo_username = std::string();
	sudo_password = std::string();
	port = int(0);
}

UpdateTicket::UpdateTicket(std::string jsonString)
{
	this->fromJson(jsonString);
}

UpdateTicket::~UpdateTicket()
{

}

void
UpdateTicket::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *ipKey = "ip";

    if(object.has_key(ipKey))
    {
        bourne::json value = object[ipKey];



        jsonToValue(&ip, value, "std::string");


    }

    const char *ip_addressKey = "ip_address";

    if(object.has_key(ip_addressKey))
    {
        bourne::json value = object[ip_addressKey];



        jsonToValue(&ip_address, value, "std::string");


    }

    const char *customer_server_accessKey = "customer_server_access";

    if(object.has_key(customer_server_accessKey))
    {
        bourne::json value = object[customer_server_accessKey];



        jsonToValue(&customer_server_access, value, "std::string");


    }

    const char *root_passwordKey = "root_password";

    if(object.has_key(root_passwordKey))
    {
        bourne::json value = object[root_passwordKey];



        jsonToValue(&root_password, value, "std::string");


    }

    const char *sudo_usernameKey = "sudo_username";

    if(object.has_key(sudo_usernameKey))
    {
        bourne::json value = object[sudo_usernameKey];



        jsonToValue(&sudo_username, value, "std::string");


    }

    const char *sudo_passwordKey = "sudo_password";

    if(object.has_key(sudo_passwordKey))
    {
        bourne::json value = object[sudo_passwordKey];



        jsonToValue(&sudo_password, value, "std::string");


    }

    const char *portKey = "port";

    if(object.has_key(portKey))
    {
        bourne::json value = object[portKey];



        jsonToValue(&port, value, "int");


    }


}

bourne::json
UpdateTicket::toJson()
{
    bourne::json object = bourne::json::object();





    object["ip"] = getIp();






    object["ip_address"] = getIpAddress();






    object["customer_server_access"] = getCustomerServerAccess();






    object["root_password"] = getRootPassword();






    object["sudo_username"] = getSudoUsername();






    object["sudo_password"] = getSudoPassword();






    object["port"] = getPort();



    return object;

}

std::string
UpdateTicket::getIp()
{
	return ip;
}

void
UpdateTicket::setIp(std::string ip)
{
	this->ip = ip;
}

std::string
UpdateTicket::getIpAddress()
{
	return ip_address;
}

void
UpdateTicket::setIpAddress(std::string ip_address)
{
	this->ip_address = ip_address;
}

std::string
UpdateTicket::getCustomerServerAccess()
{
	return customer_server_access;
}

void
UpdateTicket::setCustomerServerAccess(std::string customer_server_access)
{
	this->customer_server_access = customer_server_access;
}

std::string
UpdateTicket::getRootPassword()
{
	return root_password;
}

void
UpdateTicket::setRootPassword(std::string root_password)
{
	this->root_password = root_password;
}

std::string
UpdateTicket::getSudoUsername()
{
	return sudo_username;
}

void
UpdateTicket::setSudoUsername(std::string sudo_username)
{
	this->sudo_username = sudo_username;
}

std::string
UpdateTicket::getSudoPassword()
{
	return sudo_password;
}

void
UpdateTicket::setSudoPassword(std::string sudo_password)
{
	this->sudo_password = sudo_password;
}

int
UpdateTicket::getPort()
{
	return port;
}

void
UpdateTicket::setPort(int port)
{
	this->port = port;
}



