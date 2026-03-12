

#include "VpsOrder_locationStock.h"

using namespace Tiny;

VpsOrder_locationStock::VpsOrder_locationStock()
{
	1 = VpsOrder_locationStock_1();
}

VpsOrder_locationStock::VpsOrder_locationStock(std::string jsonString)
{
	this->fromJson(jsonString);
}

VpsOrder_locationStock::~VpsOrder_locationStock()
{

}

void
VpsOrder_locationStock::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *1Key = "1";

    if(object.has_key(1Key))
    {
        bourne::json value = object[1Key];




        VpsOrder_locationStock_1* obj = &1;
		obj->fromJson(value.dump());

    }


}

bourne::json
VpsOrder_locationStock::toJson()
{
    bourne::json object = bourne::json::object();






	object["1"] = get1().toJson();


    return object;

}

VpsOrder_locationStock_1
VpsOrder_locationStock::get1()
{
	return 1;
}

void
VpsOrder_locationStock::set1(VpsOrder_locationStock_1 1)
{
	this->1 = 1;
}



