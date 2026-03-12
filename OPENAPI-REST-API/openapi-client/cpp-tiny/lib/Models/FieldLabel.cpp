

#include "FieldLabel.h"

using namespace Tiny;

FieldLabel::FieldLabel()
{
	name = std::string();
	active = int(0);
}

FieldLabel::FieldLabel(std::string jsonString)
{
	this->fromJson(jsonString);
}

FieldLabel::~FieldLabel()
{

}

void
FieldLabel::fromJson(std::string jsonObj)
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
FieldLabel::toJson()
{
    bourne::json object = bourne::json::object();





    object["name"] = getName();






    object["active"] = getActive();



    return object;

}

std::string
FieldLabel::getName()
{
	return name;
}

void
FieldLabel::setName(std::string name)
{
	this->name = name;
}

int
FieldLabel::getActive()
{
	return active;
}

void
FieldLabel::setActive(int active)
{
	this->active = active;
}



