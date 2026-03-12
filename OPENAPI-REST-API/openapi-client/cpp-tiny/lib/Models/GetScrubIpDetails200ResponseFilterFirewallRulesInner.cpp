

#include "GetScrubIpDetails_200_response_filter_firewall_rules_inner.h"

using namespace Tiny;

GetScrubIpDetails_200_response_filter_firewall_rules_inner::GetScrubIpDetails_200_response_filter_firewall_rules_inner()
{
	id = std::string();
	source_ip = std::string();
	destination_ip = std::string();
	protocol_id = std::string();
	source_port = std::string();
	destination_port = std::string();
	xdp_action = std::string();
	global_drop = std::string();
}

GetScrubIpDetails_200_response_filter_firewall_rules_inner::GetScrubIpDetails_200_response_filter_firewall_rules_inner(std::string jsonString)
{
	this->fromJson(jsonString);
}

GetScrubIpDetails_200_response_filter_firewall_rules_inner::~GetScrubIpDetails_200_response_filter_firewall_rules_inner()
{

}

void
GetScrubIpDetails_200_response_filter_firewall_rules_inner::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *idKey = "id";

    if(object.has_key(idKey))
    {
        bourne::json value = object[idKey];



        jsonToValue(&id, value, "std::string");


    }

    const char *source_ipKey = "source_ip";

    if(object.has_key(source_ipKey))
    {
        bourne::json value = object[source_ipKey];



        jsonToValue(&source_ip, value, "std::string");


    }

    const char *destination_ipKey = "destination_ip";

    if(object.has_key(destination_ipKey))
    {
        bourne::json value = object[destination_ipKey];



        jsonToValue(&destination_ip, value, "std::string");


    }

    const char *protocol_idKey = "protocol_id";

    if(object.has_key(protocol_idKey))
    {
        bourne::json value = object[protocol_idKey];



        jsonToValue(&protocol_id, value, "std::string");


    }

    const char *source_portKey = "source_port";

    if(object.has_key(source_portKey))
    {
        bourne::json value = object[source_portKey];



        jsonToValue(&source_port, value, "std::string");


    }

    const char *destination_portKey = "destination_port";

    if(object.has_key(destination_portKey))
    {
        bourne::json value = object[destination_portKey];



        jsonToValue(&destination_port, value, "std::string");


    }

    const char *xdp_actionKey = "xdp_action";

    if(object.has_key(xdp_actionKey))
    {
        bourne::json value = object[xdp_actionKey];



        jsonToValue(&xdp_action, value, "std::string");


    }

    const char *global_dropKey = "global_drop";

    if(object.has_key(global_dropKey))
    {
        bourne::json value = object[global_dropKey];



        jsonToValue(&global_drop, value, "std::string");


    }


}

bourne::json
GetScrubIpDetails_200_response_filter_firewall_rules_inner::toJson()
{
    bourne::json object = bourne::json::object();





    object["id"] = getId();






    object["source_ip"] = getSourceIp();






    object["destination_ip"] = getDestinationIp();






    object["protocol_id"] = getProtocolId();






    object["source_port"] = getSourcePort();






    object["destination_port"] = getDestinationPort();






    object["xdp_action"] = getXdpAction();






    object["global_drop"] = getGlobalDrop();



    return object;

}

std::string
GetScrubIpDetails_200_response_filter_firewall_rules_inner::getId()
{
	return id;
}

void
GetScrubIpDetails_200_response_filter_firewall_rules_inner::setId(std::string id)
{
	this->id = id;
}

std::string
GetScrubIpDetails_200_response_filter_firewall_rules_inner::getSourceIp()
{
	return source_ip;
}

void
GetScrubIpDetails_200_response_filter_firewall_rules_inner::setSourceIp(std::string source_ip)
{
	this->source_ip = source_ip;
}

std::string
GetScrubIpDetails_200_response_filter_firewall_rules_inner::getDestinationIp()
{
	return destination_ip;
}

void
GetScrubIpDetails_200_response_filter_firewall_rules_inner::setDestinationIp(std::string destination_ip)
{
	this->destination_ip = destination_ip;
}

std::string
GetScrubIpDetails_200_response_filter_firewall_rules_inner::getProtocolId()
{
	return protocol_id;
}

void
GetScrubIpDetails_200_response_filter_firewall_rules_inner::setProtocolId(std::string protocol_id)
{
	this->protocol_id = protocol_id;
}

std::string
GetScrubIpDetails_200_response_filter_firewall_rules_inner::getSourcePort()
{
	return source_port;
}

void
GetScrubIpDetails_200_response_filter_firewall_rules_inner::setSourcePort(std::string source_port)
{
	this->source_port = source_port;
}

std::string
GetScrubIpDetails_200_response_filter_firewall_rules_inner::getDestinationPort()
{
	return destination_port;
}

void
GetScrubIpDetails_200_response_filter_firewall_rules_inner::setDestinationPort(std::string destination_port)
{
	this->destination_port = destination_port;
}

std::string
GetScrubIpDetails_200_response_filter_firewall_rules_inner::getXdpAction()
{
	return xdp_action;
}

void
GetScrubIpDetails_200_response_filter_firewall_rules_inner::setXdpAction(std::string xdp_action)
{
	this->xdp_action = xdp_action;
}

std::string
GetScrubIpDetails_200_response_filter_firewall_rules_inner::getGlobalDrop()
{
	return global_drop;
}

void
GetScrubIpDetails_200_response_filter_firewall_rules_inner::setGlobalDrop(std::string global_drop)
{
	this->global_drop = global_drop;
}



