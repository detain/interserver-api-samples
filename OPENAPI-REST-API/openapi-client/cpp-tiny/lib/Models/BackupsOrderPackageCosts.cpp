

#include "BackupsOrderPackageCosts.h"

using namespace Tiny;

BackupsOrderPackageCosts::BackupsOrderPackageCosts()
{
	11006 = int(0);
}

BackupsOrderPackageCosts::BackupsOrderPackageCosts(std::string jsonString)
{
	this->fromJson(jsonString);
}

BackupsOrderPackageCosts::~BackupsOrderPackageCosts()
{

}

void
BackupsOrderPackageCosts::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *11006Key = "11006";

    if(object.has_key(11006Key))
    {
        bourne::json value = object[11006Key];



        jsonToValue(&11006, value, "int");


    }


}

bourne::json
BackupsOrderPackageCosts::toJson()
{
    bourne::json object = bourne::json::object();





    object["11006"] = get11006();



    return object;

}

int
BackupsOrderPackageCosts::get11006()
{
	return 11006;
}

void
BackupsOrderPackageCosts::set11006(int 11006)
{
	this->11006 = 11006;
}



