

#include "ServerNetworkInfo.h"

using namespace Tiny;

ServerNetworkInfo::ServerNetworkInfo()
{
	vlans = std::list<std::string>();
	vlans6 = std::list<std::string>();
	assets = ServerNetworkInfo_assets();
	switchports = ServerNetworkInfo_switchports();
}

ServerNetworkInfo::ServerNetworkInfo(std::string jsonString)
{
	this->fromJson(jsonString);
}

ServerNetworkInfo::~ServerNetworkInfo()
{

}

void
ServerNetworkInfo::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *vlansKey = "vlans";

    if(object.has_key(vlansKey))
    {
        bourne::json value = object[vlansKey];


        std::list<std::string> vlans_list;
        std::string element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "std::string");


            vlans_list.push_back(element);
        }
        vlans = vlans_list;


    }

    const char *vlans6Key = "vlans6";

    if(object.has_key(vlans6Key))
    {
        bourne::json value = object[vlans6Key];


        std::list<std::string> vlans6_list;
        std::string element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "std::string");


            vlans6_list.push_back(element);
        }
        vlans6 = vlans6_list;


    }

    const char *assetsKey = "assets";

    if(object.has_key(assetsKey))
    {
        bourne::json value = object[assetsKey];




        ServerNetworkInfo_assets* obj = &assets;
		obj->fromJson(value.dump());

    }

    const char *switchportsKey = "switchports";

    if(object.has_key(switchportsKey))
    {
        bourne::json value = object[switchportsKey];




        ServerNetworkInfo_switchports* obj = &switchports;
		obj->fromJson(value.dump());

    }


}

bourne::json
ServerNetworkInfo::toJson()
{
    bourne::json object = bourne::json::object();




    std::list<std::string> vlans_list = getVlans();
    bourne::json vlans_arr = bourne::json::array();

    for(auto& var : vlans_list)
    {
        vlans_arr.append(var);
    }
    object["vlans"] = vlans_arr;








    std::list<std::string> vlans6_list = getVlans6();
    bourne::json vlans6_arr = bourne::json::array();

    for(auto& var : vlans6_list)
    {
        vlans6_arr.append(var);
    }
    object["vlans6"] = vlans6_arr;










	object["assets"] = getAssets().toJson();






	object["switchports"] = getSwitchports().toJson();


    return object;

}

std::list<std::string>
ServerNetworkInfo::getVlans()
{
	return vlans;
}

void
ServerNetworkInfo::setVlans(std::list<std::string> vlans)
{
	this->vlans = vlans;
}

std::list<std::string>
ServerNetworkInfo::getVlans6()
{
	return vlans6;
}

void
ServerNetworkInfo::setVlans6(std::list<std::string> vlans6)
{
	this->vlans6 = vlans6;
}

ServerNetworkInfo_assets
ServerNetworkInfo::getAssets()
{
	return assets;
}

void
ServerNetworkInfo::setAssets(ServerNetworkInfo_assets assets)
{
	this->assets = assets;
}

ServerNetworkInfo_switchports
ServerNetworkInfo::getSwitchports()
{
	return switchports;
}

void
ServerNetworkInfo::setSwitchports(ServerNetworkInfo_switchports switchports)
{
	this->switchports = switchports;
}



