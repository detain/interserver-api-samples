

#include "VpsOrder_templates_hyperv.h"

using namespace Tiny;

VpsOrder_templates_hyperv::VpsOrder_templates_hyperv()
{
	windows = VpsOrder_templates_hyperv_windows();
}

VpsOrder_templates_hyperv::VpsOrder_templates_hyperv(std::string jsonString)
{
	this->fromJson(jsonString);
}

VpsOrder_templates_hyperv::~VpsOrder_templates_hyperv()
{

}

void
VpsOrder_templates_hyperv::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *windowsKey = "windows";

    if(object.has_key(windowsKey))
    {
        bourne::json value = object[windowsKey];




        VpsOrder_templates_hyperv_windows* obj = &windows;
		obj->fromJson(value.dump());

    }


}

bourne::json
VpsOrder_templates_hyperv::toJson()
{
    bourne::json object = bourne::json::object();






	object["windows"] = getWindows().toJson();


    return object;

}

VpsOrder_templates_hyperv_windows
VpsOrder_templates_hyperv::getWindows()
{
	return windows;
}

void
VpsOrder_templates_hyperv::setWindows(VpsOrder_templates_hyperv_windows windows)
{
	this->windows = windows;
}



