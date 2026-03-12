

#include "VpsOrder_templates.h"

using namespace Tiny;

VpsOrder_templates::VpsOrder_templates()
{
	hyperv = VpsOrder_templates_hyperv();
}

VpsOrder_templates::VpsOrder_templates(std::string jsonString)
{
	this->fromJson(jsonString);
}

VpsOrder_templates::~VpsOrder_templates()
{

}

void
VpsOrder_templates::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *hypervKey = "hyperv";

    if(object.has_key(hypervKey))
    {
        bourne::json value = object[hypervKey];




        VpsOrder_templates_hyperv* obj = &hyperv;
		obj->fromJson(value.dump());

    }


}

bourne::json
VpsOrder_templates::toJson()
{
    bourne::json object = bourne::json::object();






	object["hyperv"] = getHyperv().toJson();


    return object;

}

VpsOrder_templates_hyperv
VpsOrder_templates::getHyperv()
{
	return hyperv;
}

void
VpsOrder_templates::setHyperv(VpsOrder_templates_hyperv hyperv)
{
	this->hyperv = hyperv;
}



