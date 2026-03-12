

#include "Modules.h"

using namespace Tiny;

Modules::Modules()
{
}

Modules::Modules(std::string jsonString)
{
	this->fromJson(jsonString);
}

Modules::~Modules()
{

}

void
Modules::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);


}

bourne::json
Modules::toJson()
{
    bourne::json object = bourne::json::object();


    return object;

}



