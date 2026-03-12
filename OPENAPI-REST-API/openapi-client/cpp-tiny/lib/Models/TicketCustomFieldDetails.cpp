

#include "TicketCustomFieldDetails.h"

using namespace Tiny;

TicketCustomFieldDetails::TicketCustomFieldDetails()
{
	customerServerAccess = std::string();
	ipAddress = std::string();
	rootPassword = std::string();
	sudoUser = std::string();
	sudoPassword = int(0);
	port = int(0);
}

TicketCustomFieldDetails::TicketCustomFieldDetails(std::string jsonString)
{
	this->fromJson(jsonString);
}

TicketCustomFieldDetails::~TicketCustomFieldDetails()
{

}

void
TicketCustomFieldDetails::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *customerServerAccessKey = "Customer Server Access";

    if(object.has_key(customerServerAccessKey))
    {
        bourne::json value = object[customerServerAccessKey];



        jsonToValue(&customerServerAccess, value, "std::string");


    }

    const char *ipAddressKey = "Ip Address";

    if(object.has_key(ipAddressKey))
    {
        bourne::json value = object[ipAddressKey];



        jsonToValue(&ipAddress, value, "std::string");


    }

    const char *rootPasswordKey = "Root Password";

    if(object.has_key(rootPasswordKey))
    {
        bourne::json value = object[rootPasswordKey];



        jsonToValue(&rootPassword, value, "std::string");


    }

    const char *sudoUserKey = "Sudo User";

    if(object.has_key(sudoUserKey))
    {
        bourne::json value = object[sudoUserKey];



        jsonToValue(&sudoUser, value, "std::string");


    }

    const char *sudoPasswordKey = "Sudo Password";

    if(object.has_key(sudoPasswordKey))
    {
        bourne::json value = object[sudoPasswordKey];



        jsonToValue(&sudoPassword, value, "int");


    }

    const char *portKey = "Port";

    if(object.has_key(portKey))
    {
        bourne::json value = object[portKey];



        jsonToValue(&port, value, "int");


    }


}

bourne::json
TicketCustomFieldDetails::toJson()
{
    bourne::json object = bourne::json::object();





    object["customerServerAccess"] = getCustomerServerAccess();






    object["ipAddress"] = getIpAddress();






    object["rootPassword"] = getRootPassword();






    object["sudoUser"] = getSudoUser();






    object["sudoPassword"] = getSudoPassword();






    object["port"] = getPort();



    return object;

}

std::string
TicketCustomFieldDetails::getCustomerServerAccess()
{
	return customerServerAccess;
}

void
TicketCustomFieldDetails::setCustomerServerAccess(std::string customerServerAccess)
{
	this->customerServerAccess = customerServerAccess;
}

std::string
TicketCustomFieldDetails::getIpAddress()
{
	return ipAddress;
}

void
TicketCustomFieldDetails::setIpAddress(std::string ipAddress)
{
	this->ipAddress = ipAddress;
}

std::string
TicketCustomFieldDetails::getRootPassword()
{
	return rootPassword;
}

void
TicketCustomFieldDetails::setRootPassword(std::string rootPassword)
{
	this->rootPassword = rootPassword;
}

std::string
TicketCustomFieldDetails::getSudoUser()
{
	return sudoUser;
}

void
TicketCustomFieldDetails::setSudoUser(std::string sudoUser)
{
	this->sudoUser = sudoUser;
}

int
TicketCustomFieldDetails::getSudoPassword()
{
	return sudoPassword;
}

void
TicketCustomFieldDetails::setSudoPassword(int sudoPassword)
{
	this->sudoPassword = sudoPassword;
}

int
TicketCustomFieldDetails::getPort()
{
	return port;
}

void
TicketCustomFieldDetails::setPort(int port)
{
	this->port = port;
}



