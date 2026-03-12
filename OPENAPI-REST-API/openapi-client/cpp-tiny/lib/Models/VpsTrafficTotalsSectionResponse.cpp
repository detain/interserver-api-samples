

#include "VpsTrafficTotalsSectionResponse.h"

using namespace Tiny;

VpsTrafficTotalsSectionResponse::VpsTrafficTotalsSectionResponse()
{
	in = long(0);
	out = long(0);
}

VpsTrafficTotalsSectionResponse::VpsTrafficTotalsSectionResponse(std::string jsonString)
{
	this->fromJson(jsonString);
}

VpsTrafficTotalsSectionResponse::~VpsTrafficTotalsSectionResponse()
{

}

void
VpsTrafficTotalsSectionResponse::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *inKey = "in";

    if(object.has_key(inKey))
    {
        bourne::json value = object[inKey];



        jsonToValue(&in, value, "long");


    }

    const char *outKey = "out";

    if(object.has_key(outKey))
    {
        bourne::json value = object[outKey];



        jsonToValue(&out, value, "long");


    }


}

bourne::json
VpsTrafficTotalsSectionResponse::toJson()
{
    bourne::json object = bourne::json::object();





    object["in"] = getIn();






    object["out"] = getOut();



    return object;

}

long
VpsTrafficTotalsSectionResponse::getIn()
{
	return in;
}

void
VpsTrafficTotalsSectionResponse::setIn(long in)
{
	this->in = in;
}

long
VpsTrafficTotalsSectionResponse::getOut()
{
	return out;
}

void
VpsTrafficTotalsSectionResponse::setOut(long out)
{
	this->out = out;
}



