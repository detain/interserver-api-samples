

#include "QuickserverOrder_version.h"

using namespace Tiny;

QuickserverOrder_version::QuickserverOrder_version()
{
	centosstream8 = QuickserverOrderVersionCentosstream8();
}

QuickserverOrder_version::QuickserverOrder_version(std::string jsonString)
{
	this->fromJson(jsonString);
}

QuickserverOrder_version::~QuickserverOrder_version()
{

}

void
QuickserverOrder_version::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *centosstream8Key = "centosstream-8";

    if(object.has_key(centosstream8Key))
    {
        bourne::json value = object[centosstream8Key];




        QuickserverOrderVersionCentosstream8* obj = &centosstream8;
		obj->fromJson(value.dump());

    }


}

bourne::json
QuickserverOrder_version::toJson()
{
    bourne::json object = bourne::json::object();






	object["centosstream8"] = getCentosstream8().toJson();


    return object;

}

QuickserverOrderVersionCentosstream8
QuickserverOrder_version::getCentosstream8()
{
	return centosstream8;
}

void
QuickserverOrder_version::setCentosstream8(QuickserverOrderVersionCentosstream8 centosstream8)
{
	this->centosstream8 = centosstream8;
}



