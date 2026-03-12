

#include "MailStatsType_volume_to.h"

using namespace Tiny;

MailStatsType_volume_to::MailStatsType_volume_to()
{
	clientdomaincom = int(0);
	usersitenet = int(0);
	salescompanycom = int(0);
	clientanothersitecom = int(0);
}

MailStatsType_volume_to::MailStatsType_volume_to(std::string jsonString)
{
	this->fromJson(jsonString);
}

MailStatsType_volume_to::~MailStatsType_volume_to()
{

}

void
MailStatsType_volume_to::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *clientdomaincomKey = "client@domain.com";

    if(object.has_key(clientdomaincomKey))
    {
        bourne::json value = object[clientdomaincomKey];



        jsonToValue(&clientdomaincom, value, "int");


    }

    const char *usersitenetKey = "user@site.net";

    if(object.has_key(usersitenetKey))
    {
        bourne::json value = object[usersitenetKey];



        jsonToValue(&usersitenet, value, "int");


    }

    const char *salescompanycomKey = "sales@company.com";

    if(object.has_key(salescompanycomKey))
    {
        bourne::json value = object[salescompanycomKey];



        jsonToValue(&salescompanycom, value, "int");


    }

    const char *clientanothersitecomKey = "client@anothersite.com";

    if(object.has_key(clientanothersitecomKey))
    {
        bourne::json value = object[clientanothersitecomKey];



        jsonToValue(&clientanothersitecom, value, "int");


    }


}

bourne::json
MailStatsType_volume_to::toJson()
{
    bourne::json object = bourne::json::object();





    object["clientdomaincom"] = getClientdomaincom();






    object["usersitenet"] = getUsersitenet();






    object["salescompanycom"] = getSalescompanycom();






    object["clientanothersitecom"] = getClientanothersitecom();



    return object;

}

int
MailStatsType_volume_to::getClientdomaincom()
{
	return clientdomaincom;
}

void
MailStatsType_volume_to::setClientdomaincom(int clientdomaincom)
{
	this->clientdomaincom = clientdomaincom;
}

int
MailStatsType_volume_to::getUsersitenet()
{
	return usersitenet;
}

void
MailStatsType_volume_to::setUsersitenet(int usersitenet)
{
	this->usersitenet = usersitenet;
}

int
MailStatsType_volume_to::getSalescompanycom()
{
	return salescompanycom;
}

void
MailStatsType_volume_to::setSalescompanycom(int salescompanycom)
{
	this->salescompanycom = salescompanycom;
}

int
MailStatsType_volume_to::getClientanothersitecom()
{
	return clientanothersitecom;
}

void
MailStatsType_volume_to::setClientanothersitecom(int clientanothersitecom)
{
	this->clientanothersitecom = clientanothersitecom;
}



