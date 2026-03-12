

#include "GetScrubIpDetails_200_response.h"

using namespace Tiny;

GetScrubIpDetails_200_response::GetScrubIpDetails_200_response()
{
	serviceInfo = GetScrubIpDetails_200_response_serviceInfo();
	client_links = std::list<GetScrubIpDetails_200_response_client_links_inner>();
	billingDetails = GetScrubIpDetails_200_response_billingDetails();
	custCurrency = std::string();
	custCurrencySymbol = std::string();
	package = std::string();
	extraInfoTables = GetScrubIpDetails_200_response_extraInfoTables();
	filter_firewall = GetScrubIpDetails_200_response_filter_firewall();
}

GetScrubIpDetails_200_response::GetScrubIpDetails_200_response(std::string jsonString)
{
	this->fromJson(jsonString);
}

GetScrubIpDetails_200_response::~GetScrubIpDetails_200_response()
{

}

void
GetScrubIpDetails_200_response::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *serviceInfoKey = "serviceInfo";

    if(object.has_key(serviceInfoKey))
    {
        bourne::json value = object[serviceInfoKey];




        GetScrubIpDetails_200_response_serviceInfo* obj = &serviceInfo;
		obj->fromJson(value.dump());

    }

    const char *client_linksKey = "client_links";

    if(object.has_key(client_linksKey))
    {
        bourne::json value = object[client_linksKey];


        std::list<GetScrubIpDetails_200_response_client_links_inner> client_links_list;
        GetScrubIpDetails_200_response_client_links_inner element;
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




        GetScrubIpDetails_200_response_billingDetails* obj = &billingDetails;
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

    const char *extraInfoTablesKey = "extraInfoTables";

    if(object.has_key(extraInfoTablesKey))
    {
        bourne::json value = object[extraInfoTablesKey];




        GetScrubIpDetails_200_response_extraInfoTables* obj = &extraInfoTables;
		obj->fromJson(value.dump());

    }

    const char *filter_firewallKey = "filter_firewall";

    if(object.has_key(filter_firewallKey))
    {
        bourne::json value = object[filter_firewallKey];




        GetScrubIpDetails_200_response_filter_firewall* obj = &filter_firewall;
		obj->fromJson(value.dump());

    }


}

bourne::json
GetScrubIpDetails_200_response::toJson()
{
    bourne::json object = bourne::json::object();






	object["serviceInfo"] = getServiceInfo().toJson();




    std::list<GetScrubIpDetails_200_response_client_links_inner> client_links_list = getClientLinks();
    bourne::json client_links_arr = bourne::json::array();

    for(auto& var : client_links_list)
    {
        GetScrubIpDetails_200_response_client_links_inner obj = var;
        client_links_arr.append(obj.toJson());
    }
    object["client_links"] = client_links_arr;








	object["billingDetails"] = getBillingDetails().toJson();





    object["custCurrency"] = getCustCurrency();






    object["custCurrencySymbol"] = getCustCurrencySymbol();






    object["package"] = getPackage();







	object["extraInfoTables"] = getExtraInfoTables().toJson();






	object["filter_firewall"] = getFilterFirewall().toJson();


    return object;

}

GetScrubIpDetails_200_response_serviceInfo
GetScrubIpDetails_200_response::getServiceInfo()
{
	return serviceInfo;
}

void
GetScrubIpDetails_200_response::setServiceInfo(GetScrubIpDetails_200_response_serviceInfo serviceInfo)
{
	this->serviceInfo = serviceInfo;
}

std::list<GetScrubIpDetails_200_response_client_links_inner>
GetScrubIpDetails_200_response::getClientLinks()
{
	return client_links;
}

void
GetScrubIpDetails_200_response::setClientLinks(std::list<GetScrubIpDetails_200_response_client_links_inner> client_links)
{
	this->client_links = client_links;
}

GetScrubIpDetails_200_response_billingDetails
GetScrubIpDetails_200_response::getBillingDetails()
{
	return billingDetails;
}

void
GetScrubIpDetails_200_response::setBillingDetails(GetScrubIpDetails_200_response_billingDetails billingDetails)
{
	this->billingDetails = billingDetails;
}

std::string
GetScrubIpDetails_200_response::getCustCurrency()
{
	return custCurrency;
}

void
GetScrubIpDetails_200_response::setCustCurrency(std::string custCurrency)
{
	this->custCurrency = custCurrency;
}

std::string
GetScrubIpDetails_200_response::getCustCurrencySymbol()
{
	return custCurrencySymbol;
}

void
GetScrubIpDetails_200_response::setCustCurrencySymbol(std::string custCurrencySymbol)
{
	this->custCurrencySymbol = custCurrencySymbol;
}

std::string
GetScrubIpDetails_200_response::getPackage()
{
	return package;
}

void
GetScrubIpDetails_200_response::setPackage(std::string package)
{
	this->package = package;
}

GetScrubIpDetails_200_response_extraInfoTables
GetScrubIpDetails_200_response::getExtraInfoTables()
{
	return extraInfoTables;
}

void
GetScrubIpDetails_200_response::setExtraInfoTables(GetScrubIpDetails_200_response_extraInfoTables extraInfoTables)
{
	this->extraInfoTables = extraInfoTables;
}

GetScrubIpDetails_200_response_filter_firewall
GetScrubIpDetails_200_response::getFilterFirewall()
{
	return filter_firewall;
}

void
GetScrubIpDetails_200_response::setFilterFirewall(GetScrubIpDetails_200_response_filter_firewall filter_firewall)
{
	this->filter_firewall = filter_firewall;
}



