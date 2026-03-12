

#include "VpsOrder_templates_hyperv_windows.h"

using namespace Tiny;

VpsOrder_templates_hyperv_windows::VpsOrder_templates_hyperv_windows()
{
	windows2019Standard = std::string();
	windows2022 = std::string();
}

VpsOrder_templates_hyperv_windows::VpsOrder_templates_hyperv_windows(std::string jsonString)
{
	this->fromJson(jsonString);
}

VpsOrder_templates_hyperv_windows::~VpsOrder_templates_hyperv_windows()
{

}

void
VpsOrder_templates_hyperv_windows::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *windows2019StandardKey = "Windows2019Standard";

    if(object.has_key(windows2019StandardKey))
    {
        bourne::json value = object[windows2019StandardKey];



        jsonToValue(&windows2019Standard, value, "std::string");


    }

    const char *windows2022Key = "Windows2022";

    if(object.has_key(windows2022Key))
    {
        bourne::json value = object[windows2022Key];



        jsonToValue(&windows2022, value, "std::string");


    }


}

bourne::json
VpsOrder_templates_hyperv_windows::toJson()
{
    bourne::json object = bourne::json::object();





    object["windows2019Standard"] = getWindows2019Standard();






    object["windows2022"] = getWindows2022();



    return object;

}

std::string
VpsOrder_templates_hyperv_windows::getWindows2019Standard()
{
	return windows2019Standard;
}

void
VpsOrder_templates_hyperv_windows::setWindows2019Standard(std::string windows2019Standard)
{
	this->windows2019Standard = windows2019Standard;
}

std::string
VpsOrder_templates_hyperv_windows::getWindows2022()
{
	return windows2022;
}

void
VpsOrder_templates_hyperv_windows::setWindows2022(std::string windows2022)
{
	this->windows2022 = windows2022;
}



