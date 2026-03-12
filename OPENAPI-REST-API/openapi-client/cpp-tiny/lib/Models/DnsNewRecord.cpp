

#include "DnsNewRecord.h"

using namespace Tiny;

DnsNewRecord::DnsNewRecord()
{
	name = std::string();
	type = DnsRecordType();
	content = std::string();
	ttl = int(0);
	prio = int(0);
}

DnsNewRecord::DnsNewRecord(std::string jsonString)
{
	this->fromJson(jsonString);
}

DnsNewRecord::~DnsNewRecord()
{

}

void
DnsNewRecord::fromJson(std::string jsonObj)
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



        jsonToValue(&ttl, value, "int");


    }

    const char *prioKey = "prio";

    if(object.has_key(prioKey))
    {
        bourne::json value = object[prioKey];



        jsonToValue(&prio, value, "int");


    }


}

bourne::json
DnsNewRecord::toJson()
{
    bourne::json object = bourne::json::object();





    object["name"] = getName();







	object["type"] = getType().toJson();





    object["content"] = getContent();






    object["ttl"] = getTtl();






    object["prio"] = getPrio();



    return object;

}

std::string
DnsNewRecord::getName()
{
	return name;
}

void
DnsNewRecord::setName(std::string name)
{
	this->name = name;
}

DnsRecordType
DnsNewRecord::getType()
{
	return type;
}

void
DnsNewRecord::setType(DnsRecordType type)
{
	this->type = type;
}

std::string
DnsNewRecord::getContent()
{
	return content;
}

void
DnsNewRecord::setContent(std::string content)
{
	this->content = content;
}

int
DnsNewRecord::getTtl()
{
	return ttl;
}

void
DnsNewRecord::setTtl(int ttl)
{
	this->ttl = ttl;
}

int
DnsNewRecord::getPrio()
{
	return prio;
}

void
DnsNewRecord::setPrio(int prio)
{
	this->prio = prio;
}



