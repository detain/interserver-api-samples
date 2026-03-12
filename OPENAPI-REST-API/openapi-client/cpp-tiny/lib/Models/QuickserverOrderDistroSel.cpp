

#include "QuickserverOrder_distro_sel.h"

using namespace Tiny;

QuickserverOrder_distro_sel::QuickserverOrder_distro_sel()
{
	ubuntu = QuickserverOrderDistroSelUbuntu();
}

QuickserverOrder_distro_sel::QuickserverOrder_distro_sel(std::string jsonString)
{
	this->fromJson(jsonString);
}

QuickserverOrder_distro_sel::~QuickserverOrder_distro_sel()
{

}

void
QuickserverOrder_distro_sel::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *ubuntuKey = "Ubuntu";

    if(object.has_key(ubuntuKey))
    {
        bourne::json value = object[ubuntuKey];




        QuickserverOrderDistroSelUbuntu* obj = &ubuntu;
		obj->fromJson(value.dump());

    }


}

bourne::json
QuickserverOrder_distro_sel::toJson()
{
    bourne::json object = bourne::json::object();






	object["ubuntu"] = getUbuntu().toJson();


    return object;

}

QuickserverOrderDistroSelUbuntu
QuickserverOrder_distro_sel::getUbuntu()
{
	return ubuntu;
}

void
QuickserverOrder_distro_sel::setUbuntu(QuickserverOrderDistroSelUbuntu ubuntu)
{
	this->ubuntu = ubuntu;
}



