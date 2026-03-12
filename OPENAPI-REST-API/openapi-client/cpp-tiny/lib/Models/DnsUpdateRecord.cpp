

#include "DnsUpdateRecord.h"

using namespace Tiny;

DnsUpdateRecord::DnsUpdateRecord()
{
	name = std::string();
	type = DnsRecordType();
	content = std::string();
	ttl = std::string();
	prio = std::string();
	disabled = std::string();
	ordername = std::string();
	auth = std::string();
}

DnsUpdateRecord::DnsUpdateRecord(std::string jsonString)
{
	this->fromJson(jsonString);
}

DnsUpdateRecord::~DnsUpdateRecord()
{

}

void
DnsUpdateRecord::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *nameKey = "name";

    if(object.has_key(nameKey))
    {
        bourne::json value = object[nameKey];



        jsonToValue(&name, value, "std::string");


    }

    const char *typeKey = "type";

    if(object.has_key(typeKey))
    {
        bourne::json value = object[typeKey];




        DnsRecordType* obj = &type;
		obj->fromJson(value.dump());

    }

    const char *contentKey = "content";

    if(object.has_key(contentKey))
    {
        bourne::json value = object[contentKey];



        jsonToValue(&content, value, "std::string");


    }

    const char *ttlKey = "ttl";

    if(object.has_key(ttlKey))
    {
        bourne::json value = object[ttlKey];



        jsonToValue(&ttl, value, "std::string");


    }

    const char *prioKey = "prio";

    if(object.has_key(prioKey))
    {
        bourne::json value = object[prioKey];



        jsonToValue(&prio, value, "std::string");


    }

    const char *disabledKey = "disabled";

    if(object.has_key(disabledKey))
    {
        bourne::json value = object[disabledKey];



        jsonToValue(&disabled, value, "std::string");


    }

    const char *ordernameKey = "ordername";

    if(object.has_key(ordernameKey))
    {
        bourne::json value = object[ordernameKey];



        jsonToValue(&ordername, value, "std::string");


    }

    const char *authKey = "auth";

    if(object.has_key(authKey))
    {
        bourne::json value = object[authKey];



        jsonToValue(&auth, value, "std::string");


    }


}

bourne::json
DnsUpdateRecord::toJson()
{
    bourne::json object = bourne::json::object();





    object["name"] = getName();







	object["type"] = getType().toJson();





    object["content"] = getContent();






    object["ttl"] = getTtl();






    object["prio"] = getPrio();






    object["disabled"] = getDisabled();






    object["ordername"] = getOrdername();






    object["auth"] = getAuth();



    return object;

}

std::string
DnsUpdateRecord::getName()
{
	return name;
}

void
DnsUpdateRecord::setName(std::string name)
{
	this->name = name;
}

DnsRecordType
DnsUpdateRecord::getType()
{
	return type;
}

void
DnsUpdateRecord::setType(DnsRecordType type)
{
	this->type = type;
}

std::string
DnsUpdateRecord::getContent()
{
	return content;
}

void
DnsUpdateRecord::setContent(std::string content)
{
	this->content = content;
}

std::string
DnsUpdateRecord::getTtl()
{
	return ttl;
}

void
DnsUpdateRecord::setTtl(std::string ttl)
{
	this->ttl = ttl;
}

std::string
DnsUpdateRecord::getPrio()
{
	return prio;
}

void
DnsUpdateRecord::setPrio(std::string prio)
{
	this->prio = prio;
}

std::string
DnsUpdateRecord::getDisabled()
{
	return disabled;
}

void
DnsUpdateRecord::setDisabled(std::string disabled)
{
	this->disabled = disabled;
}

std::string
DnsUpdateRecord::getOrdername()
{
	return ordername;
}

void
DnsUpdateRecord::setOrdername(std::string ordername)
{
	this->ordername = ordername;
}

std::string
DnsUpdateRecord::getAuth()
{
	return auth;
}

void
DnsUpdateRecord::setAuth(std::string auth)
{
	this->auth = auth;
}



