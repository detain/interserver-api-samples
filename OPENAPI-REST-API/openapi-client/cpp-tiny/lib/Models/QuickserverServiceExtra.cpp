

#include "Quickserver_serviceExtra.h"

using namespace Tiny;

Quickserver_serviceExtra::Quickserver_serviceExtra()
{
	platform = std::string();
}

Quickserver_serviceExtra::Quickserver_serviceExtra(std::string jsonString)
{
	this->fromJson(jsonString);
}

Quickserver_serviceExtra::~Quickserver_serviceExtra()
{

}

void
Quickserver_serviceExtra::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *platformKey = "platform";

    if(object.has_key(platformKey))
    {
        bourne::json value = object[platformKey];



        jsonToValue(&platform, value, "std::string");


    }


}

bourne::json
Quickserver_serviceExtra::toJson()
{
    bourne::json object = bourne::json::object();





    object["platform"] = getPlatform();



    return object;

}

std::string
Quickserver_serviceExtra::getPlatform()
{
	return platform;
}

void
Quickserver_serviceExtra::setPlatform(std::string platform)
{
	this->platform = platform;
}



