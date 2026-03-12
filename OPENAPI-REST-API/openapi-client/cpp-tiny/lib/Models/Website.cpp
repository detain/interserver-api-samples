

#include "Website.h"

using namespace Tiny;

Website::Website()
{
	serviceInfo = WebsiteServiceInfo();
	client_links = std::list<WebsiteClientLink>();
	billingDetails = WebsiteBillingDetails();
	custCurrency = std::string();
	custCurrencySymbol = std::string();
	serviceMaster = WebsiteServiceMaster();
	package = std::string();
	serviceExtra = std::list<Object>();
	extraInfoTables = WebsiteExtraInfoTables();
}

Website::Website(std::string jsonString)
{
	this->fromJson(jsonString);
}

Website::~Website()
{

}

void
Website::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *serviceInfoKey = "serviceInfo";

    if(object.has_key(serviceInfoKey))
    {
        bourne::json value = object[serviceInfoKey];




        WebsiteServiceInfo* obj = &serviceInfo;
		obj->fromJson(value.dump());

    }

    const char *client_linksKey = "client_links";

    if(object.has_key(client_linksKey))
    {
        bourne::json value = object[client_linksKey];


        std::list<WebsiteClientLink> client_links_list;
        WebsiteClientLink element;
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




        WebsiteBillingDetails* obj = &billingDetails;
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

    const char *serviceMasterKey = "serviceMaster";

    if(object.has_key(serviceMasterKey))
    {
        bourne::json value = object[serviceMasterKey];




        WebsiteServiceMaster* obj = &serviceMaster;
		obj->fromJson(value.dump());

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


        std::list<Object> serviceExtra_list;
        Object element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            serviceExtra_list.push_back(element);
        }
        serviceExtra = serviceExtra_list;


    }

    const char *extraInfoTablesKey = "extraInfoTables";

    if(object.has_key(extraInfoTablesKey))
    {
        bourne::json value = object[extraInfoTablesKey];




        WebsiteExtraInfoTables* obj = &extraInfoTables;
		obj->fromJson(value.dump());

    }


}

bourne::json
Website::toJson()
{
    bourne::json object = bourne::json::object();






	object["serviceInfo"] = getServiceInfo().toJson();




    std::list<WebsiteClientLink> client_links_list = getClientLinks();
    bourne::json client_links_arr = bourne::json::array();

    for(auto& var : client_links_list)
    {
        WebsiteClientLink obj = var;
        client_links_arr.append(obj.toJson());
    }
    object["client_links"] = client_links_arr;








	object["billingDetails"] = getBillingDetails().toJson();





    object["custCurrency"] = getCustCurrency();






    object["custCurrencySymbol"] = getCustCurrencySymbol();







	object["serviceMaster"] = getServiceMaster().toJson();





    object["package"] = getPackage();





    std::list<Object> serviceExtra_list = getServiceExtra();
    bourne::json serviceExtra_arr = bourne::json::array();

    for(auto& var : serviceExtra_list)
    {
        Object obj = var;
        serviceExtra_arr.append(obj.toJson());
    }
    object["serviceExtra"] = serviceExtra_arr;








	object["extraInfoTables"] = getExtraInfoTables().toJson();


    return object;

}

WebsiteServiceInfo
Website::getServiceInfo()
{
	return serviceInfo;
}

void
Website::setServiceInfo(WebsiteServiceInfo serviceInfo)
{
	this->serviceInfo = serviceInfo;
}

std::list<WebsiteClientLink>
Website::getClientLinks()
{
	return client_links;
}

void
Website::setClientLinks(std::list<WebsiteClientLink> client_links)
{
	this->client_links = client_links;
}

WebsiteBillingDetails
Website::getBillingDetails()
{
	return billingDetails;
}

void
Website::setBillingDetails(WebsiteBillingDetails billingDetails)
{
	this->billingDetails = billingDetails;
}

std::string
Website::getCustCurrency()
{
	return custCurrency;
}

void
Website::setCustCurrency(std::string custCurrency)
{
	this->custCurrency = custCurrency;
}

std::string
Website::getCustCurrencySymbol()
{
	return custCurrencySymbol;
}

void
Website::setCustCurrencySymbol(std::string custCurrencySymbol)
{
	this->custCurrencySymbol = custCurrencySymbol;
}

WebsiteServiceMaster
Website::getServiceMaster()
{
	return serviceMaster;
}

void
Website::setServiceMaster(WebsiteServiceMaster serviceMaster)
{
	this->serviceMaster = serviceMaster;
}

std::string
Website::getPackage()
{
	return package;
}

void
Website::setPackage(std::string package)
{
	this->package = package;
}

std::list<Object>
Website::getServiceExtra()
{
	return serviceExtra;
}

void
Website::setServiceExtra(std::list<Object> serviceExtra)
{
	this->serviceExtra = serviceExtra;
}

WebsiteExtraInfoTables
Website::getExtraInfoTables()
{
	return extraInfoTables;
}

void
Website::setExtraInfoTables(WebsiteExtraInfoTables extraInfoTables)
{
	this->extraInfoTables = extraInfoTables;
}



