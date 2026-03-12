

#include "ServerOrderFieldLabel.h"

using namespace Tiny;

ServerOrderFieldLabel::ServerOrderFieldLabel()
{
	name = std::string();
	active = int(0);
}

ServerOrderFieldLabel::ServerOrderFieldLabel(std::string jsonString)
{
	this->fromJson(jsonString);
}

ServerOrderFieldLabel::~ServerOrderFieldLabel()
{

}

void
ServerOrderFieldLabel::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *nameKey = "name";

    if(object.has_key(nameKey))
    {
        bourne::json value = object[nameKey];



        jsonToValue(&name, value, "std::string");


    }

    const char *activeKey = "active";

    if(object.has_key(activeKey))
    {
        bourne::json value = object[activeKey];



        jsonToValue(&active, value, "int");


    }


}

bourne::json
ServerOrderFieldLabel::toJson()
{
    bourne::json object = bourne::json::object();





    object["name"] = getName();






    object["active"] = getActive();



    return object;

}

std::string
ServerOrderFieldLabel::getName()
{
	return name;
}

void
ServerOrderFieldLabel::setName(std::string name)
{
	this->name = name;
}

int
ServerOrderFieldLabel::getActive()
{
	return active;
}

void
ServerOrderFieldLabel::setActive(int active)
{
	this->active = active;
}



