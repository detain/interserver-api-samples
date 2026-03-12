

#include "DnsListItem.h"

using namespace Tiny;

DnsListItem::DnsListItem()
{
	id = int(0);
	name = std::string();
	content = std::string();
}

DnsListItem::DnsListItem(std::string jsonString)
{
	this->fromJson(jsonString);
}

DnsListItem::~DnsListItem()
{

}

void
DnsListItem::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *idKey = "id";

    if(object.has_key(idKey))
    {
        bourne::json value = object[idKey];



        jsonToValue(&id, value, "int");


    }

    const char *nameKey = "name";

    if(object.has_key(nameKey))
    {
        bourne::json value = object[nameKey];



        jsonToValue(&name, value, "std::string");


    }

    const char *contentKey = "content";

    if(object.has_key(contentKey))
    {
        bourne::json value = object[contentKey];



        jsonToValue(&content, value, "std::string");


    }


}

bourne::json
DnsListItem::toJson()
{
    bourne::json object = bourne::json::object();





    object["id"] = getId();






    object["name"] = getName();






    object["content"] = getContent();



    return object;

}

int
DnsListItem::getId()
{
	return id;
}

void
DnsListItem::setId(int id)
{
	this->id = id;
}

std::string
DnsListItem::getName()
{
	return name;
}

void
DnsListItem::setName(std::string name)
{
	this->name = name;
}

std::string
DnsListItem::getContent()
{
	return content;
}

void
DnsListItem::setContent(std::string content)
{
	this->content = content;
}



