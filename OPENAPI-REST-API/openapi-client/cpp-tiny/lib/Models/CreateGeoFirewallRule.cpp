

#include "CreateGeoFirewallRule.h"

using namespace Tiny;

CreateGeoFirewallRule::CreateGeoFirewallRule()
{
	xdp_action = int(0);
	destination_port = int(0);
	country_code = int(0);
	asn = int(0);
}

CreateGeoFirewallRule::CreateGeoFirewallRule(std::string jsonString)
{
	this->fromJson(jsonString);
}

CreateGeoFirewallRule::~CreateGeoFirewallRule()
{

}

void
CreateGeoFirewallRule::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

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

    const char *country_codeKey = "country_code";

    if(object.has_key(country_codeKey))
    {
        bourne::json value = object[country_codeKey];



        jsonToValue(&country_code, value, "int");


    }

    const char *asnKey = "asn";

    if(object.has_key(asnKey))
    {
        bourne::json value = object[asnKey];



        jsonToValue(&asn, value, "int");


    }


}

bourne::json
CreateGeoFirewallRule::toJson()
{
    bourne::json object = bourne::json::object();





    object["xdp_action"] = getXdpAction();






    object["destination_port"] = getDestinationPort();






    object["country_code"] = getCountryCode();






    object["asn"] = getAsn();



    return object;

}

int
CreateGeoFirewallRule::getXdpAction()
{
	return xdp_action;
}

void
CreateGeoFirewallRule::setXdpAction(int xdp_action)
{
	this->xdp_action = xdp_action;
}

int
CreateGeoFirewallRule::getDestinationPort()
{
	return destination_port;
}

void
CreateGeoFirewallRule::setDestinationPort(int destination_port)
{
	this->destination_port = destination_port;
}

int
CreateGeoFirewallRule::getCountryCode()
{
	return country_code;
}

void
CreateGeoFirewallRule::setCountryCode(int country_code)
{
	this->country_code = country_code;
}

int
CreateGeoFirewallRule::getAsn()
{
	return asn;
}

void
CreateGeoFirewallRule::setAsn(int asn)
{
	this->asn = asn;
}



