

#include "DenyRuleNew.h"

using namespace Tiny;

DenyRuleNew::DenyRuleNew()
{
	type = std::string();
	data = std::string();
	user = std::string();
}

DenyRuleNew::DenyRuleNew(std::string jsonString)
{
	this->fromJson(jsonString);
}

DenyRuleNew::~DenyRuleNew()
{

}

void
DenyRuleNew::fromJson(std::string jsonObj)
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

    const char *userKey = "user";

    if(object.has_key(userKey))
    {
        bourne::json value = object[userKey];



        jsonToValue(&user, value, "std::string");


    }


}

bourne::json
DenyRuleNew::toJson()
{
    bourne::json object = bourne::json::object();





    object["type"] = getType();






    object["data"] = getData();






    object["user"] = getUser();



    return object;

}

std::string
DenyRuleNew::getType()
{
	return type;
}

void
DenyRuleNew::setType(std::string type)
{
	this->type = type;
}

std::string
DenyRuleNew::getData()
{
	return data;
}

void
DenyRuleNew::setData(std::string data)
{
	this->data = data;
}

std::string
DenyRuleNew::getUser()
{
	return user;
}

void
DenyRuleNew::setUser(std::string user)
{
	this->user = user;
}



