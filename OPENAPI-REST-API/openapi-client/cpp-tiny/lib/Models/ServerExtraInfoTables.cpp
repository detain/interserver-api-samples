

#include "ServerExtraInfoTables.h"

using namespace Tiny;

ServerExtraInfoTables::ServerExtraInfoTables()
{
	assets = ServerAssets();
}

ServerExtraInfoTables::ServerExtraInfoTables(std::string jsonString)
{
	this->fromJson(jsonString);
}

ServerExtraInfoTables::~ServerExtraInfoTables()
{

}

void
ServerExtraInfoTables::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *assetsKey = "assets";

    if(object.has_key(assetsKey))
    {
        bourne::json value = object[assetsKey];




        ServerAssets* obj = &assets;
		obj->fromJson(value.dump());

    }


}

bourne::json
ServerExtraInfoTables::toJson()
{
    bourne::json object = bourne::json::object();






	object["assets"] = getAssets().toJson();


    return object;

}

ServerAssets
ServerExtraInfoTables::getAssets()
{
	return assets;
}

void
ServerExtraInfoTables::setAssets(ServerAssets assets)
{
	this->assets = assets;
}



