

#include "DenyRuleRecord.h"

using namespace Tiny;

DenyRuleRecord::DenyRuleRecord()
{
	type = std::string();
	data = std::string();
	id = int(0);
	created = std::string();
	user = std::string();
}

DenyRuleRecord::DenyRuleRecord(std::string jsonString)
{
	this->fromJson(jsonString);
}

DenyRuleRecord::~DenyRuleRecord()
{

}

void
DenyRuleRecord::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *typeKey = "type";

    if(object.has_key(typeKey))
    {
        bourne::json value = object[typeKey];



        jsonToValue(&type, value, "std::string");


    }

    const char *dataKey = "data";

    if(object.has_key(dataKey))
    {
        bourne::json value = object[dataKey];



        jsonToValue(&data, value, "std::string");


    }

    const char *idKey = "id";

    if(object.has_key(idKey))
    {
        bourne::json value = object[idKey];



        jsonToValue(&id, value, "int");


    }

    const char *createdKey = "created";

    if(object.has_key(createdKey))
    {
        bourne::json value = object[createdKey];



        jsonToValue(&created, value, "std::string");


    }

    const char *userKey = "user";

    if(object.has_key(userKey))
    {
        bourne::json value = object[userKey];



        jsonToValue(&user, value, "std::string");


    }


}

bourne::json
DenyRuleRecord::toJson()
{
    bourne::json object = bourne::json::object();





    object["type"] = getType();






    object["data"] = getData();






    object["id"] = getId();






    object["created"] = getCreated();






    object["user"] = getUser();



    return object;

}

std::string
DenyRuleRecord::getType()
{
	return type;
}

void
DenyRuleRecord::setType(std::string type)
{
	this->type = type;
}

std::string
DenyRuleRecord::getData()
{
	return data;
}

void
DenyRuleRecord::setData(std::string data)
{
	this->data = data;
}

int
DenyRuleRecord::getId()
{
	return id;
}

void
DenyRuleRecord::setId(int id)
{
	this->id = id;
}

std::string
DenyRuleRecord::getCreated()
{
	return created;
}

void
DenyRuleRecord::setCreated(std::string created)
{
	this->created = created;
}

std::string
DenyRuleRecord::getUser()
{
	return user;
}

void
DenyRuleRecord::setUser(std::string user)
{
	this->user = user;
}



