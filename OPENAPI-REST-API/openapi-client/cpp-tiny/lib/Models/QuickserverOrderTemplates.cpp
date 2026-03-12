

#include "QuickserverOrder_templates.h"

using namespace Tiny;

QuickserverOrder_templates::QuickserverOrder_templates()
{
	ubuntu = QuickserverOrderTemplatesUbuntu64();
}

QuickserverOrder_templates::QuickserverOrder_templates(std::string jsonString)
{
	this->fromJson(jsonString);
}

QuickserverOrder_templates::~QuickserverOrder_templates()
{

}

void
QuickserverOrder_templates::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *ubuntuKey = "Ubuntu";

    if(object.has_key(ubuntuKey))
    {
        bourne::json value = object[ubuntuKey];




        QuickserverOrderTemplatesUbuntu64* obj = &ubuntu;
		obj->fromJson(value.dump());

    }


}

bourne::json
QuickserverOrder_templates::toJson()
{
    bourne::json object = bourne::json::object();






	object["ubuntu"] = getUbuntu().toJson();


    return object;

}

QuickserverOrderTemplatesUbuntu64
QuickserverOrder_templates::getUbuntu()
{
	return ubuntu;
}

void
QuickserverOrder_templates::setUbuntu(QuickserverOrderTemplatesUbuntu64 ubuntu)
{
	this->ubuntu = ubuntu;
}



