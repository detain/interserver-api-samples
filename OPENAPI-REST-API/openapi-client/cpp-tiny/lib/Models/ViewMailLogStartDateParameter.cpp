

#include "ViewMailLog_startDate_parameter.h"

using namespace Tiny;

ViewMailLog_startDate_parameter::ViewMailLog_startDate_parameter()
{
}

ViewMailLog_startDate_parameter::ViewMailLog_startDate_parameter(std::string jsonString)
{
	this->fromJson(jsonString);
}

ViewMailLog_startDate_parameter::~ViewMailLog_startDate_parameter()
{

}

void
ViewMailLog_startDate_parameter::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);


}

bourne::json
ViewMailLog_startDate_parameter::toJson()
{
    bourne::json object = bourne::json::object();


    return object;

}



