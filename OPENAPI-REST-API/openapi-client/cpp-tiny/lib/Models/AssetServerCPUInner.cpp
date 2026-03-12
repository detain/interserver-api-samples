

#include "AssetServer_CPU_inner.h"

using namespace Tiny;

AssetServer_CPU_inner::AssetServer_CPU_inner()
{
}

AssetServer_CPU_inner::AssetServer_CPU_inner(std::string jsonString)
{
	this->fromJson(jsonString);
}

AssetServer_CPU_inner::~AssetServer_CPU_inner()
{

}

void
AssetServer_CPU_inner::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);


}

bourne::json
AssetServer_CPU_inner::toJson()
{
    bourne::json object = bourne::json::object();


    return object;

}



