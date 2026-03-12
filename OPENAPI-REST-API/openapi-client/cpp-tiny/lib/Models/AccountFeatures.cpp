

#include "AccountFeatures.h"

using namespace Tiny;

AccountFeatures::AccountFeatures()
{
	disable_reset = int(0);
	disable_reinstall = int(0);
}

AccountFeatures::AccountFeatures(std::string jsonString)
{
	this->fromJson(jsonString);
}

AccountFeatures::~AccountFeatures()
{

}

void
AccountFeatures::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *disable_resetKey = "disable_reset";

    if(object.has_key(disable_resetKey))
    {
        bourne::json value = object[disable_resetKey];



        jsonToValue(&disable_reset, value, "int");


    }

    const char *disable_reinstallKey = "disable_reinstall";

    if(object.has_key(disable_reinstallKey))
    {
        bourne::json value = object[disable_reinstallKey];



        jsonToValue(&disable_reinstall, value, "int");


    }


}

bourne::json
AccountFeatures::toJson()
{
    bourne::json object = bourne::json::object();





    object["disable_reset"] = getDisableReset();






    object["disable_reinstall"] = getDisableReinstall();



    return object;

}

int
AccountFeatures::getDisableReset()
{
	return disable_reset;
}

void
AccountFeatures::setDisableReset(int disable_reset)
{
	this->disable_reset = disable_reset;
}

int
AccountFeatures::getDisableReinstall()
{
	return disable_reinstall;
}

void
AccountFeatures::setDisableReinstall(int disable_reinstall)
{
	this->disable_reinstall = disable_reinstall;
}



