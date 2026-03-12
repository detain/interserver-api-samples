

#include "ServerSwitchport.h"

using namespace Tiny;

ServerSwitchport::ServerSwitchport()
{
	switchport_id = int(0);
	switch_id = std::string();
	r_switch = std::string();
	port = std::string();
	blade = std::string();
	justport = std::string();
	graph_id = std::string();
	asset_id = int(0);
	vlans = std::list<std::string>();
	vlans6 = std::list<std::string>();
}

ServerSwitchport::ServerSwitchport(std::string jsonString)
{
	this->fromJson(jsonString);
}

ServerSwitchport::~ServerSwitchport()
{

}

void
ServerSwitchport::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *switchport_idKey = "switchport_id";

    if(object.has_key(switchport_idKey))
    {
        bourne::json value = object[switchport_idKey];



        jsonToValue(&switchport_id, value, "int");


    }

    const char *switch_idKey = "switch_id";

    if(object.has_key(switch_idKey))
    {
        bourne::json value = object[switch_idKey];



        jsonToValue(&switch_id, value, "std::string");


    }

    const char *r_switchKey = "switch";

    if(object.has_key(r_switchKey))
    {
        bourne::json value = object[r_switchKey];



        jsonToValue(&r_switch, value, "std::string");


    }

    const char *portKey = "port";

    if(object.has_key(portKey))
    {
        bourne::json value = object[portKey];



        jsonToValue(&port, value, "std::string");


    }

    const char *bladeKey = "blade";

    if(object.has_key(bladeKey))
    {
        bourne::json value = object[bladeKey];



        jsonToValue(&blade, value, "std::string");


    }

    const char *justportKey = "justport";

    if(object.has_key(justportKey))
    {
        bourne::json value = object[justportKey];



        jsonToValue(&justport, value, "std::string");


    }

    const char *graph_idKey = "graph_id";

    if(object.has_key(graph_idKey))
    {
        bourne::json value = object[graph_idKey];



        jsonToValue(&graph_id, value, "std::string");


    }

    const char *asset_idKey = "asset_id";

    if(object.has_key(asset_idKey))
    {
        bourne::json value = object[asset_idKey];



        jsonToValue(&asset_id, value, "int");


    }

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


}

bourne::json
ServerSwitchport::toJson()
{
    bourne::json object = bourne::json::object();





    object["switchport_id"] = getSwitchportId();






    object["switch_id"] = getSwitchId();






    object["r_switch"] = getRSwitch();






    object["port"] = getPort();






    object["blade"] = getBlade();






    object["justport"] = getJustport();






    object["graph_id"] = getGraphId();






    object["asset_id"] = getAssetId();





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






    return object;

}

int
ServerSwitchport::getSwitchportId()
{
	return switchport_id;
}

void
ServerSwitchport::setSwitchportId(int switchport_id)
{
	this->switchport_id = switchport_id;
}

std::string
ServerSwitchport::getSwitchId()
{
	return switch_id;
}

void
ServerSwitchport::setSwitchId(std::string switch_id)
{
	this->switch_id = switch_id;
}

std::string
ServerSwitchport::getRSwitch()
{
	return r_switch;
}

void
ServerSwitchport::setRSwitch(std::string r_switch)
{
	this->r_switch = r_switch;
}

std::string
ServerSwitchport::getPort()
{
	return port;
}

void
ServerSwitchport::setPort(std::string port)
{
	this->port = port;
}

std::string
ServerSwitchport::getBlade()
{
	return blade;
}

void
ServerSwitchport::setBlade(std::string blade)
{
	this->blade = blade;
}

std::string
ServerSwitchport::getJustport()
{
	return justport;
}

void
ServerSwitchport::setJustport(std::string justport)
{
	this->justport = justport;
}

std::string
ServerSwitchport::getGraphId()
{
	return graph_id;
}

void
ServerSwitchport::setGraphId(std::string graph_id)
{
	this->graph_id = graph_id;
}

int
ServerSwitchport::getAssetId()
{
	return asset_id;
}

void
ServerSwitchport::setAssetId(int asset_id)
{
	this->asset_id = asset_id;
}

std::list<std::string>
ServerSwitchport::getVlans()
{
	return vlans;
}

void
ServerSwitchport::setVlans(std::list<std::string> vlans)
{
	this->vlans = vlans;
}

std::list<std::string>
ServerSwitchport::getVlans6()
{
	return vlans6;
}

void
ServerSwitchport::setVlans6(std::list<std::string> vlans6)
{
	this->vlans6 = vlans6;
}



