

#include "Server.h"

using namespace Tiny;

Server::Server()
{
	ipmiAuth = bool(false);
	client_links = std::list<ServerClientLink>();
	billingDetails = ServerBillingDetails();
	custCurrency = std::string();
	custCurrencySymbol = std::string();
	package = std::string();
	serviceExtra = std::list<std::string>();
	locations = Server_locations();
	networkInfo = ServerNetworkInfo();
	extraInfoTables = ServerExtraInfoTables();
	serviceInfo = ServerServiceInfo();
}

Server::Server(std::string jsonString)
{
	this->fromJson(jsonString);
}

Server::~Server()
{

}

void
Server::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *ipmiAuthKey = "ipmiAuth";

    if(object.has_key(ipmiAuthKey))
    {
        bourne::json value = object[ipmiAuthKey];



        jsonToValue(&ipmiAuth, value, "bool");


    }

    const char *client_linksKey = "client_links";

    if(object.has_key(client_linksKey))
    {
        bourne::json value = object[client_linksKey];


        std::list<ServerClientLink> client_links_list;
        ServerClientLink element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            client_links_list.push_back(element);
        }
        client_links = client_links_list;


    }

    const char *billingDetailsKey = "billingDetails";

    if(object.has_key(billingDetailsKey))
    {
        bourne::json value = object[billingDetailsKey];




        ServerBillingDetails* obj = &billingDetails;
		obj->fromJson(value.dump());

    }

    const char *custCurrencyKey = "custCurrency";

    if(object.has_key(custCurrencyKey))
    {
        bourne::json value = object[custCurrencyKey];



        jsonToValue(&custCurrency, value, "std::string");


    }

    const char *custCurrencySymbolKey = "custCurrencySymbol";

    if(object.has_key(custCurrencySymbolKey))
    {
        bourne::json value = object[custCurrencySymbolKey];



        jsonToValue(&custCurrencySymbol, value, "std::string");


    }

    const char *packageKey = "package";

    if(object.has_key(packageKey))
    {
        bourne::json value = object[packageKey];



        jsonToValue(&package, value, "std::string");


    }

    const char *serviceExtraKey = "serviceExtra";

    if(object.has_key(serviceExtraKey))
    {
        bourne::json value = object[serviceExtraKey];


        std::list<std::string> serviceExtra_list;
        std::string element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "std::string");


            serviceExtra_list.push_back(element);
        }
        serviceExtra = serviceExtra_list;


    }

    const char *locationsKey = "locations";

    if(object.has_key(locationsKey))
    {
        bourne::json value = object[locationsKey];




        Server_locations* obj = &locations;
		obj->fromJson(value.dump());

    }

    const char *networkInfoKey = "networkInfo";

    if(object.has_key(networkInfoKey))
    {
        bourne::json value = object[networkInfoKey];




        ServerNetworkInfo* obj = &networkInfo;
		obj->fromJson(value.dump());

    }

    const char *extraInfoTablesKey = "extraInfoTables";

    if(object.has_key(extraInfoTablesKey))
    {
        bourne::json value = object[extraInfoTablesKey];




        ServerExtraInfoTables* obj = &extraInfoTables;
		obj->fromJson(value.dump());

    }

    const char *serviceInfoKey = "serviceInfo";

    if(object.has_key(serviceInfoKey))
    {
        bourne::json value = object[serviceInfoKey];




        ServerServiceInfo* obj = &serviceInfo;
		obj->fromJson(value.dump());

    }


}

bourne::json
Server::toJson()
{
    bourne::json object = bourne::json::object();





    object["ipmiAuth"] = isIpmiAuth();





    std::list<ServerClientLink> client_links_list = getClientLinks();
    bourne::json client_links_arr = bourne::json::array();

    for(auto& var : client_links_list)
    {
        ServerClientLink obj = var;
        client_links_arr.append(obj.toJson());
    }
    object["client_links"] = client_links_arr;








	object["billingDetails"] = getBillingDetails().toJson();





    object["custCurrency"] = getCustCurrency();






    object["custCurrencySymbol"] = getCustCurrencySymbol();






    object["package"] = getPackage();





    std::list<std::string> serviceExtra_list = getServiceExtra();
    bourne::json serviceExtra_arr = bourne::json::array();

    for(auto& var : serviceExtra_list)
    {
        serviceExtra_arr.append(var);
    }
    object["serviceExtra"] = serviceExtra_arr;










	object["locations"] = getLocations().toJson();






	object["networkInfo"] = getNetworkInfo().toJson();






	object["extraInfoTables"] = getExtraInfoTables().toJson();






	object["serviceInfo"] = getServiceInfo().toJson();


    return object;

}

bool
Server::isIpmiAuth()
{
	return ipmiAuth;
}

void
Server::setIpmiAuth(bool ipmiAuth)
{
	this->ipmiAuth = ipmiAuth;
}

std::list<ServerClientLink>
Server::getClientLinks()
{
	return client_links;
}

void
Server::setClientLinks(std::list<ServerClientLink> client_links)
{
	this->client_links = client_links;
}

ServerBillingDetails
Server::getBillingDetails()
{
	return billingDetails;
}

void
Server::setBillingDetails(ServerBillingDetails billingDetails)
{
	this->billingDetails = billingDetails;
}

std::string
Server::getCustCurrency()
{
	return custCurrency;
}

void
Server::setCustCurrency(std::string custCurrency)
{
	this->custCurrency = custCurrency;
}

std::string
Server::getCustCurrencySymbol()
{
	return custCurrencySymbol;
}

void
Server::setCustCurrencySymbol(std::string custCurrencySymbol)
{
	this->custCurrencySymbol = custCurrencySymbol;
}

std::string
Server::getPackage()
{
	return package;
}

void
Server::setPackage(std::string package)
{
	this->package = package;
}

std::list<std::string>
Server::getServiceExtra()
{
	return serviceExtra;
}

void
Server::setServiceExtra(std::list<std::string> serviceExtra)
{
	this->serviceExtra = serviceExtra;
}

Server_locations
Server::getLocations()
{
	return locations;
}

void
Server::setLocations(Server_locations locations)
{
	this->locations = locations;
}

ServerNetworkInfo
Server::getNetworkInfo()
{
	return networkInfo;
}

void
Server::setNetworkInfo(ServerNetworkInfo networkInfo)
{
	this->networkInfo = networkInfo;
}

ServerExtraInfoTables
Server::getExtraInfoTables()
{
	return extraInfoTables;
}

void
Server::setExtraInfoTables(ServerExtraInfoTables extraInfoTables)
{
	this->extraInfoTables = extraInfoTables;
}

ServerServiceInfo
Server::getServiceInfo()
{
	return serviceInfo;
}

void
Server::setServiceInfo(ServerServiceInfo serviceInfo)
{
	this->serviceInfo = serviceInfo;
}



