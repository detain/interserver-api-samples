

#include "CreateFirewallRule.h"

using namespace Tiny;

CreateFirewallRule::CreateFirewallRule()
{
	protocol_id = int(0);
	xdp_action = int(0);
	destination_port = int(0);
	source_ip = std::string();
	source_port = int(0);
}

CreateFirewallRule::CreateFirewallRule(std::string jsonString)
{
	this->fromJson(jsonString);
}

CreateFirewallRule::~CreateFirewallRule()
{

}

void
CreateFirewallRule::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *protocol_idKey = "protocol_id";

    if(object.has_key(protocol_idKey))
    {
        bourne::json value = object[protocol_idKey];



        jsonToValue(&protocol_id, value, "int");


    }

    const char *xdp_actionKey = "xdp_action";

    if(object.has_key(xdp_actionKey))
    {
        bourne::json value = object[xdp_actionKey];



        jsonToValue(&xdp_action, value, "int");


    }

    const char *destination_portKey = "destination_port";

    if(object.has_key(destination_portKey))
    {
        bourne::json value = object[destination_portKey];



        jsonToValue(&destination_port, value, "int");


    }

    const char *source_ipKey = "source_ip";

    if(object.has_key(source_ipKey))
    {
        bourne::json value = object[source_ipKey];



        jsonToValue(&source_ip, value, "std::string");


    }

    const char *source_portKey = "source_port";

    if(object.has_key(source_portKey))
    {
        bourne::json value = object[source_portKey];



        jsonToValue(&source_port, value, "int");


    }


}

bourne::json
CreateFirewallRule::toJson()
{
    bourne::json object = bourne::json::object();





    object["protocol_id"] = getProtocolId();






    object["xdp_action"] = getXdpAction();






    object["destination_port"] = getDestinationPort();






    object["source_ip"] = getSourceIp();






    object["source_port"] = getSourcePort();



    return object;

}

int
CreateFirewallRule::getProtocolId()
{
	return protocol_id;
}

void
CreateFirewallRule::setProtocolId(int protocol_id)
{
	this->protocol_id = protocol_id;
}

int
CreateFirewallRule::getXdpAction()
{
	return xdp_action;
}

void
CreateFirewallRule::setXdpAction(int xdp_action)
{
	this->xdp_action = xdp_action;
}

int
CreateFirewallRule::getDestinationPort()
{
	return destination_port;
}

void
CreateFirewallRule::setDestinationPort(int destination_port)
{
	this->destination_port = destination_port;
}

std::string
CreateFirewallRule::getSourceIp()
{
	return source_ip;
}

void
CreateFirewallRule::setSourceIp(std::string source_ip)
{
	this->source_ip = source_ip;
}

int
CreateFirewallRule::getSourcePort()
{
	return source_port;
}

void
CreateFirewallRule::setSourcePort(int source_port)
{
	this->source_port = source_port;
}



