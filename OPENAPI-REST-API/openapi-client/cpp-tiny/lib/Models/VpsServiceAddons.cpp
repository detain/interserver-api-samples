

#include "VpsServiceAddons.h"

using namespace Tiny;

VpsServiceAddons::VpsServiceAddons()
{
	has_cpanel = bool(false);
	has_directadmin = bool(false);
	has_fantastico = bool(false);
	has_softaculous = bool(false);
	has_hdspace = bool(false);
	dedicated_ip = bool(false);
	extra_ips = std::list<std::string>();
	extra_ips6 = std::list<std::string>();
	unpaid_ips = std::list<std::string>();
	ips = std::list<std::string>();
	ips6 = std::list<std::string>();
	cpanel_id = int(0);
	cost = int(0);
	ids = std::list<std::string>();
	rdata = std::list<std::string>();
}

VpsServiceAddons::VpsServiceAddons(std::string jsonString)
{
	this->fromJson(jsonString);
}

VpsServiceAddons::~VpsServiceAddons()
{

}

void
VpsServiceAddons::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *has_cpanelKey = "has_cpanel";

    if(object.has_key(has_cpanelKey))
    {
        bourne::json value = object[has_cpanelKey];



        jsonToValue(&has_cpanel, value, "bool");


    }

    const char *has_directadminKey = "has_directadmin";

    if(object.has_key(has_directadminKey))
    {
        bourne::json value = object[has_directadminKey];



        jsonToValue(&has_directadmin, value, "bool");


    }

    const char *has_fantasticoKey = "has_fantastico";

    if(object.has_key(has_fantasticoKey))
    {
        bourne::json value = object[has_fantasticoKey];



        jsonToValue(&has_fantastico, value, "bool");


    }

    const char *has_softaculousKey = "has_softaculous";

    if(object.has_key(has_softaculousKey))
    {
        bourne::json value = object[has_softaculousKey];



        jsonToValue(&has_softaculous, value, "bool");


    }

    const char *has_hdspaceKey = "has_hdspace";

    if(object.has_key(has_hdspaceKey))
    {
        bourne::json value = object[has_hdspaceKey];



        jsonToValue(&has_hdspace, value, "bool");


    }

    const char *dedicated_ipKey = "dedicated_ip";

    if(object.has_key(dedicated_ipKey))
    {
        bourne::json value = object[dedicated_ipKey];



        jsonToValue(&dedicated_ip, value, "bool");


    }

    const char *extra_ipsKey = "extra_ips";

    if(object.has_key(extra_ipsKey))
    {
        bourne::json value = object[extra_ipsKey];


        std::list<std::string> extra_ips_list;
        std::string element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "std::string");


            extra_ips_list.push_back(element);
        }
        extra_ips = extra_ips_list;


    }

    const char *extra_ips6Key = "extra_ips6";

    if(object.has_key(extra_ips6Key))
    {
        bourne::json value = object[extra_ips6Key];


        std::list<std::string> extra_ips6_list;
        std::string element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "std::string");


            extra_ips6_list.push_back(element);
        }
        extra_ips6 = extra_ips6_list;


    }

    const char *unpaid_ipsKey = "unpaid_ips";

    if(object.has_key(unpaid_ipsKey))
    {
        bourne::json value = object[unpaid_ipsKey];


        std::list<std::string> unpaid_ips_list;
        std::string element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "std::string");


            unpaid_ips_list.push_back(element);
        }
        unpaid_ips = unpaid_ips_list;


    }

    const char *ipsKey = "ips";

    if(object.has_key(ipsKey))
    {
        bourne::json value = object[ipsKey];


        std::list<std::string> ips_list;
        std::string element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "std::string");


            ips_list.push_back(element);
        }
        ips = ips_list;


    }

    const char *ips6Key = "ips6";

    if(object.has_key(ips6Key))
    {
        bourne::json value = object[ips6Key];


        std::list<std::string> ips6_list;
        std::string element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "std::string");


            ips6_list.push_back(element);
        }
        ips6 = ips6_list;


    }

    const char *cpanel_idKey = "cpanel_id";

    if(object.has_key(cpanel_idKey))
    {
        bourne::json value = object[cpanel_idKey];



        jsonToValue(&cpanel_id, value, "int");


    }

    const char *costKey = "cost";

    if(object.has_key(costKey))
    {
        bourne::json value = object[costKey];



        jsonToValue(&cost, value, "int");


    }

    const char *idsKey = "ids";

    if(object.has_key(idsKey))
    {
        bourne::json value = object[idsKey];


        std::list<std::string> ids_list;
        std::string element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "std::string");


            ids_list.push_back(element);
        }
        ids = ids_list;


    }

    const char *rdataKey = "rdata";

    if(object.has_key(rdataKey))
    {
        bourne::json value = object[rdataKey];


        std::list<std::string> rdata_list;
        std::string element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "std::string");


            rdata_list.push_back(element);
        }
        rdata = rdata_list;


    }


}

bourne::json
VpsServiceAddons::toJson()
{
    bourne::json object = bourne::json::object();





    object["has_cpanel"] = isHasCpanel();






    object["has_directadmin"] = isHasDirectadmin();






    object["has_fantastico"] = isHasFantastico();






    object["has_softaculous"] = isHasSoftaculous();






    object["has_hdspace"] = isHasHdspace();






    object["dedicated_ip"] = isDedicatedIp();





    std::list<std::string> extra_ips_list = getExtraIps();
    bourne::json extra_ips_arr = bourne::json::array();

    for(auto& var : extra_ips_list)
    {
        extra_ips_arr.append(var);
    }
    object["extra_ips"] = extra_ips_arr;








    std::list<std::string> extra_ips6_list = getExtraIps6();
    bourne::json extra_ips6_arr = bourne::json::array();

    for(auto& var : extra_ips6_list)
    {
        extra_ips6_arr.append(var);
    }
    object["extra_ips6"] = extra_ips6_arr;








    std::list<std::string> unpaid_ips_list = getUnpaidIps();
    bourne::json unpaid_ips_arr = bourne::json::array();

    for(auto& var : unpaid_ips_list)
    {
        unpaid_ips_arr.append(var);
    }
    object["unpaid_ips"] = unpaid_ips_arr;








    std::list<std::string> ips_list = getIps();
    bourne::json ips_arr = bourne::json::array();

    for(auto& var : ips_list)
    {
        ips_arr.append(var);
    }
    object["ips"] = ips_arr;








    std::list<std::string> ips6_list = getIps6();
    bourne::json ips6_arr = bourne::json::array();

    for(auto& var : ips6_list)
    {
        ips6_arr.append(var);
    }
    object["ips6"] = ips6_arr;









    object["cpanel_id"] = getCpanelId();






    object["cost"] = getCost();





    std::list<std::string> ids_list = getIds();
    bourne::json ids_arr = bourne::json::array();

    for(auto& var : ids_list)
    {
        ids_arr.append(var);
    }
    object["ids"] = ids_arr;








    std::list<std::string> rdata_list = getRdata();
    bourne::json rdata_arr = bourne::json::array();

    for(auto& var : rdata_list)
    {
        rdata_arr.append(var);
    }
    object["rdata"] = rdata_arr;






    return object;

}

bool
VpsServiceAddons::isHasCpanel()
{
	return has_cpanel;
}

void
VpsServiceAddons::setHasCpanel(bool has_cpanel)
{
	this->has_cpanel = has_cpanel;
}

bool
VpsServiceAddons::isHasDirectadmin()
{
	return has_directadmin;
}

void
VpsServiceAddons::setHasDirectadmin(bool has_directadmin)
{
	this->has_directadmin = has_directadmin;
}

bool
VpsServiceAddons::isHasFantastico()
{
	return has_fantastico;
}

void
VpsServiceAddons::setHasFantastico(bool has_fantastico)
{
	this->has_fantastico = has_fantastico;
}

bool
VpsServiceAddons::isHasSoftaculous()
{
	return has_softaculous;
}

void
VpsServiceAddons::setHasSoftaculous(bool has_softaculous)
{
	this->has_softaculous = has_softaculous;
}

bool
VpsServiceAddons::isHasHdspace()
{
	return has_hdspace;
}

void
VpsServiceAddons::setHasHdspace(bool has_hdspace)
{
	this->has_hdspace = has_hdspace;
}

bool
VpsServiceAddons::isDedicatedIp()
{
	return dedicated_ip;
}

void
VpsServiceAddons::setDedicatedIp(bool dedicated_ip)
{
	this->dedicated_ip = dedicated_ip;
}

std::list<std::string>
VpsServiceAddons::getExtraIps()
{
	return extra_ips;
}

void
VpsServiceAddons::setExtraIps(std::list<std::string> extra_ips)
{
	this->extra_ips = extra_ips;
}

std::list<std::string>
VpsServiceAddons::getExtraIps6()
{
	return extra_ips6;
}

void
VpsServiceAddons::setExtraIps6(std::list<std::string> extra_ips6)
{
	this->extra_ips6 = extra_ips6;
}

std::list<std::string>
VpsServiceAddons::getUnpaidIps()
{
	return unpaid_ips;
}

void
VpsServiceAddons::setUnpaidIps(std::list<std::string> unpaid_ips)
{
	this->unpaid_ips = unpaid_ips;
}

std::list<std::string>
VpsServiceAddons::getIps()
{
	return ips;
}

void
VpsServiceAddons::setIps(std::list<std::string> ips)
{
	this->ips = ips;
}

std::list<std::string>
VpsServiceAddons::getIps6()
{
	return ips6;
}

void
VpsServiceAddons::setIps6(std::list<std::string> ips6)
{
	this->ips6 = ips6;
}

int
VpsServiceAddons::getCpanelId()
{
	return cpanel_id;
}

void
VpsServiceAddons::setCpanelId(int cpanel_id)
{
	this->cpanel_id = cpanel_id;
}

int
VpsServiceAddons::getCost()
{
	return cost;
}

void
VpsServiceAddons::setCost(int cost)
{
	this->cost = cost;
}

std::list<std::string>
VpsServiceAddons::getIds()
{
	return ids;
}

void
VpsServiceAddons::setIds(std::list<std::string> ids)
{
	this->ids = ids;
}

std::list<std::string>
VpsServiceAddons::getRdata()
{
	return rdata;
}

void
VpsServiceAddons::setRdata(std::list<std::string> rdata)
{
	this->rdata = rdata;
}



