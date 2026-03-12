

#include "QuickserverOrderVersionCentosstream8.h"

using namespace Tiny;

QuickserverOrderVersionCentosstream8::QuickserverOrderVersionCentosstream8()
{
	centosstream8 = std::string();
}

QuickserverOrderVersionCentosstream8::QuickserverOrderVersionCentosstream8(std::string jsonString)
{
	this->fromJson(jsonString);
}

QuickserverOrderVersionCentosstream8::~QuickserverOrderVersionCentosstream8()
{

}

void
QuickserverOrderVersionCentosstream8::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *centosstream8Key = "centosstream-8";

    if(object.has_key(centosstream8Key))
    {
        bourne::json value = object[centosstream8Key];



        jsonToValue(&centosstream8, value, "std::string");


    }


}

bourne::json
QuickserverOrderVersionCentosstream8::toJson()
{
    bourne::json object = bourne::json::object();





    object["centosstream8"] = getCentosstream8();



    return object;

}

std::string
QuickserverOrderVersionCentosstream8::getCentosstream8()
{
	return centosstream8;
}

void
QuickserverOrderVersionCentosstream8::setCentosstream8(std::string centosstream8)
{
	this->centosstream8 = centosstream8;
}



