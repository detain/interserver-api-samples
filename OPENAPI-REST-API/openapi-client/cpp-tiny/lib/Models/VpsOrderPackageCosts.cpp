

#include "VpsOrder_packageCosts.h"

using namespace Tiny;

VpsOrder_packageCosts::VpsOrder_packageCosts()
{
	57 = float(0);
}

VpsOrder_packageCosts::VpsOrder_packageCosts(std::string jsonString)
{
	this->fromJson(jsonString);
}

VpsOrder_packageCosts::~VpsOrder_packageCosts()
{

}

void
VpsOrder_packageCosts::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *57Key = "57";

    if(object.has_key(57Key))
    {
        bourne::json value = object[57Key];



        jsonToValue(&57, value, "long");


    }


}

bourne::json
VpsOrder_packageCosts::toJson()
{
    bourne::json object = bourne::json::object();





    object["57"] = get57();



    return object;

}

long
VpsOrder_packageCosts::get57()
{
	return 57;
}

void
VpsOrder_packageCosts::set57(long 57)
{
	this->57 = 57;
}



