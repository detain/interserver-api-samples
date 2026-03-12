

#include "WebsiteBackups_inner.h"

using namespace Tiny;

WebsiteBackups_inner::WebsiteBackups_inner()
{
	name = std::string();
	size = int(0);
}

WebsiteBackups_inner::WebsiteBackups_inner(std::string jsonString)
{
	this->fromJson(jsonString);
}

WebsiteBackups_inner::~WebsiteBackups_inner()
{

}

void
WebsiteBackups_inner::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *nameKey = "name";

    if(object.has_key(nameKey))
    {
        bourne::json value = object[nameKey];



        jsonToValue(&name, value, "std::string");


    }

    const char *sizeKey = "size";

    if(object.has_key(sizeKey))
    {
        bourne::json value = object[sizeKey];



        jsonToValue(&size, value, "int");


    }


}

bourne::json
WebsiteBackups_inner::toJson()
{
    bourne::json object = bourne::json::object();





    object["name"] = getName();






    object["size"] = getSize();



    return object;

}

std::string
WebsiteBackups_inner::getName()
{
	return name;
}

void
WebsiteBackups_inner::setName(std::string name)
{
	this->name = name;
}

int
WebsiteBackups_inner::getSize()
{
	return size;
}

void
WebsiteBackups_inner::setSize(int size)
{
	this->size = size;
}



