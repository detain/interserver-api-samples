

#include "HomeServicesServersLinks.h"

using namespace Tiny;

HomeServicesServersLinks::HomeServicesServersLinks()
{
	16058 = std::string();
}

HomeServicesServersLinks::HomeServicesServersLinks(std::string jsonString)
{
	this->fromJson(jsonString);
}

HomeServicesServersLinks::~HomeServicesServersLinks()
{

}

void
HomeServicesServersLinks::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *16058Key = "16058";

    if(object.has_key(16058Key))
    {
        bourne::json value = object[16058Key];



        jsonToValue(&16058, value, "std::string");


    }


}

bourne::json
HomeServicesServersLinks::toJson()
{
    bourne::json object = bourne::json::object();





    object["16058"] = get16058();



    return object;

}

std::string
HomeServicesServersLinks::get16058()
{
	return 16058;
}

void
HomeServicesServersLinks::set16058(std::string 16058)
{
	this->16058 = 16058;
}



