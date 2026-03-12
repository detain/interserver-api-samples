

#include "ScrubIpsLogRowSchema.h"

using namespace Tiny;

ScrubIpsLogRowSchema::ScrubIpsLogRowSchema()
{
	date = std::string();
	filter = std::string();
	blocked_ip = std::string();
	target_ip = std::string();
	target_port = float(0);
	protocol = std::string();
	byte_count = float(0);
	xdp_action = std::string();
}

ScrubIpsLogRowSchema::ScrubIpsLogRowSchema(std::string jsonString)
{
	this->fromJson(jsonString);
}

ScrubIpsLogRowSchema::~ScrubIpsLogRowSchema()
{

}

void
ScrubIpsLogRowSchema::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *dateKey = "date";

    if(object.has_key(dateKey))
    {
        bourne::json value = object[dateKey];



        jsonToValue(&date, value, "std::string");


    }

    const char *filterKey = "filter";

    if(object.has_key(filterKey))
    {
        bourne::json value = object[filterKey];



        jsonToValue(&filter, value, "std::string");


    }

    const char *blocked_ipKey = "blocked_ip";

    if(object.has_key(blocked_ipKey))
    {
        bourne::json value = object[blocked_ipKey];



        jsonToValue(&blocked_ip, value, "std::string");


    }

    const char *target_ipKey = "target_ip";

    if(object.has_key(target_ipKey))
    {
        bourne::json value = object[target_ipKey];



        jsonToValue(&target_ip, value, "std::string");


    }

    const char *target_portKey = "target_port";

    if(object.has_key(target_portKey))
    {
        bourne::json value = object[target_portKey];



        jsonToValue(&target_port, value, "long");


    }

    const char *protocolKey = "protocol";

    if(object.has_key(protocolKey))
    {
        bourne::json value = object[protocolKey];



        jsonToValue(&protocol, value, "std::string");


    }

    const char *byte_countKey = "byte_count";

    if(object.has_key(byte_countKey))
    {
        bourne::json value = object[byte_countKey];



        jsonToValue(&byte_count, value, "long");


    }

    const char *xdp_actionKey = "xdp_action";

    if(object.has_key(xdp_actionKey))
    {
        bourne::json value = object[xdp_actionKey];



        jsonToValue(&xdp_action, value, "std::string");


    }


}

bourne::json
ScrubIpsLogRowSchema::toJson()
{
    bourne::json object = bourne::json::object();





    object["date"] = getDate();






    object["filter"] = getFilter();






    object["blocked_ip"] = getBlockedIp();






    object["target_ip"] = getTargetIp();






    object["target_port"] = getTargetPort();






    object["protocol"] = getProtocol();






    object["byte_count"] = getByteCount();






    object["xdp_action"] = getXdpAction();



    return object;

}

std::string
ScrubIpsLogRowSchema::getDate()
{
	return date;
}

void
ScrubIpsLogRowSchema::setDate(std::string date)
{
	this->date = date;
}

std::string
ScrubIpsLogRowSchema::getFilter()
{
	return filter;
}

void
ScrubIpsLogRowSchema::setFilter(std::string filter)
{
	this->filter = filter;
}

std::string
ScrubIpsLogRowSchema::getBlockedIp()
{
	return blocked_ip;
}

void
ScrubIpsLogRowSchema::setBlockedIp(std::string blocked_ip)
{
	this->blocked_ip = blocked_ip;
}

std::string
ScrubIpsLogRowSchema::getTargetIp()
{
	return target_ip;
}

void
ScrubIpsLogRowSchema::setTargetIp(std::string target_ip)
{
	this->target_ip = target_ip;
}

long
ScrubIpsLogRowSchema::getTargetPort()
{
	return target_port;
}

void
ScrubIpsLogRowSchema::setTargetPort(long target_port)
{
	this->target_port = target_port;
}

std::string
ScrubIpsLogRowSchema::getProtocol()
{
	return protocol;
}

void
ScrubIpsLogRowSchema::setProtocol(std::string protocol)
{
	this->protocol = protocol;
}

long
ScrubIpsLogRowSchema::getByteCount()
{
	return byte_count;
}

void
ScrubIpsLogRowSchema::setByteCount(long byte_count)
{
	this->byte_count = byte_count;
}

std::string
ScrubIpsLogRowSchema::getXdpAction()
{
	return xdp_action;
}

void
ScrubIpsLogRowSchema::setXdpAction(std::string xdp_action)
{
	this->xdp_action = xdp_action;
}



