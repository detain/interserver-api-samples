

#include "DnsRecord.h"

using namespace Tiny;

DnsRecord::DnsRecord()
{
	id = std::string();
	domain_id = std::string();
	name = std::string();
	type = DnsRecordType();
	content = std::string();
	ttl = std::string();
	prio = std::string();
	disabled = std::string();
	ordername = std::string();
	auth = std::string();
}

DnsRecord::DnsRecord(std::string jsonString)
{
	this->fromJson(jsonString);
}

DnsRecord::~DnsRecord()
{

}

void
DnsRecord::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *idKey = "id";

    if(object.has_key(idKey))
    {
        bourne::json value = object[idKey];



        jsonToValue(&id, value, "std::string");


    }

    const char *domain_idKey = "domain_id";

    if(object.has_key(domain_idKey))
    {
        bourne::json value = object[domain_idKey];



        jsonToValue(&domain_id, value, "std::string");


    }

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
DnsRecord::toJson()
{
    bourne::json object = bourne::json::object();





    object["id"] = getId();






    object["domain_id"] = getDomainId();






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
DnsRecord::getId()
{
	return id;
}

void
DnsRecord::setId(std::string id)
{
	this->id = id;
}

std::string
DnsRecord::getDomainId()
{
	return domain_id;
}

void
DnsRecord::setDomainId(std::string domain_id)
{
	this->domain_id = domain_id;
}

std::string
DnsRecord::getName()
{
	return name;
}

void
DnsRecord::setName(std::string name)
{
	this->name = name;
}

DnsRecordType
DnsRecord::getType()
{
	return type;
}

void
DnsRecord::setType(DnsRecordType type)
{
	this->type = type;
}

std::string
DnsRecord::getContent()
{
	return content;
}

void
DnsRecord::setContent(std::string content)
{
	this->content = content;
}

std::string
DnsRecord::getTtl()
{
	return ttl;
}

void
DnsRecord::setTtl(std::string ttl)
{
	this->ttl = ttl;
}

std::string
DnsRecord::getPrio()
{
	return prio;
}

void
DnsRecord::setPrio(std::string prio)
{
	this->prio = prio;
}

std::string
DnsRecord::getDisabled()
{
	return disabled;
}

void
DnsRecord::setDisabled(std::string disabled)
{
	this->disabled = disabled;
}

std::string
DnsRecord::getOrdername()
{
	return ordername;
}

void
DnsRecord::setOrdername(std::string ordername)
{
	this->ordername = ordername;
}

std::string
DnsRecord::getAuth()
{
	return auth;
}

void
DnsRecord::setAuth(std::string auth)
{
	this->auth = auth;
}



