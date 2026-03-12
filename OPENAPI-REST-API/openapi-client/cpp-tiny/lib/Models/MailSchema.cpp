

#include "MailSchema.h"

using namespace Tiny;

MailSchema::MailSchema()
{
	serviceInfo = MailServiceInfo();
	client_links = std::list<MailClientLink>();
	billingDetails = MailBillingDetails();
	custCurrency = std::string();
	custCurrencySymbol = std::string();
	package = std::string();
	extraInfoTables = MailSchema_extraInfoTables();
	serviceType = MailServiceType();
	usage_count = std::string();
	serviceExtra = std::list<std::string>();
}

MailSchema::MailSchema(std::string jsonString)
{
	this->fromJson(jsonString);
}

MailSchema::~MailSchema()
{

}

void
MailSchema::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *serviceInfoKey = "serviceInfo";

    if(object.has_key(serviceInfoKey))
    {
        bourne::json value = object[serviceInfoKey];




        MailServiceInfo* obj = &serviceInfo;
		obj->fromJson(value.dump());

    }

    const char *client_linksKey = "client_links";

    if(object.has_key(client_linksKey))
    {
        bourne::json value = object[client_linksKey];


        std::list<MailClientLink> client_links_list;
        MailClientLink element;
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




        MailBillingDetails* obj = &billingDetails;
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




        MailSchema_extraInfoTables* obj = &extraInfoTables;
		obj->fromJson(value.dump());

    }

    const char *serviceTypeKey = "serviceType";

    if(object.has_key(serviceTypeKey))
    {
        bourne::json value = object[serviceTypeKey];




        MailServiceType* obj = &serviceType;
		obj->fromJson(value.dump());

    }

    const char *usage_countKey = "usage_count";

    if(object.has_key(usage_countKey))
    {
        bourne::json value = object[usage_countKey];



        jsonToValue(&usage_count, value, "std::string");


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


}

bourne::json
MailSchema::toJson()
{
    bourne::json object = bourne::json::object();






	object["serviceInfo"] = getServiceInfo().toJson();




    std::list<MailClientLink> client_links_list = getClientLinks();
    bourne::json client_links_arr = bourne::json::array();

    for(auto& var : client_links_list)
    {
        MailClientLink obj = var;
        client_links_arr.append(obj.toJson());
    }
    object["client_links"] = client_links_arr;








	object["billingDetails"] = getBillingDetails().toJson();





    object["custCurrency"] = getCustCurrency();






    object["custCurrencySymbol"] = getCustCurrencySymbol();






    object["package"] = getPackage();







	object["extraInfoTables"] = getExtraInfoTables().toJson();






	object["serviceType"] = getServiceType().toJson();





    object["usage_count"] = getUsageCount();





    std::list<std::string> serviceExtra_list = getServiceExtra();
    bourne::json serviceExtra_arr = bourne::json::array();

    for(auto& var : serviceExtra_list)
    {
        serviceExtra_arr.append(var);
    }
    object["serviceExtra"] = serviceExtra_arr;






    return object;

}

MailServiceInfo
MailSchema::getServiceInfo()
{
	return serviceInfo;
}

void
MailSchema::setServiceInfo(MailServiceInfo serviceInfo)
{
	this->serviceInfo = serviceInfo;
}

std::list<MailClientLink>
MailSchema::getClientLinks()
{
	return client_links;
}

void
MailSchema::setClientLinks(std::list<MailClientLink> client_links)
{
	this->client_links = client_links;
}

MailBillingDetails
MailSchema::getBillingDetails()
{
	return billingDetails;
}

void
MailSchema::setBillingDetails(MailBillingDetails billingDetails)
{
	this->billingDetails = billingDetails;
}

std::string
MailSchema::getCustCurrency()
{
	return custCurrency;
}

void
MailSchema::setCustCurrency(std::string custCurrency)
{
	this->custCurrency = custCurrency;
}

std::string
MailSchema::getCustCurrencySymbol()
{
	return custCurrencySymbol;
}

void
MailSchema::setCustCurrencySymbol(std::string custCurrencySymbol)
{
	this->custCurrencySymbol = custCurrencySymbol;
}

std::string
MailSchema::getPackage()
{
	return package;
}

void
MailSchema::setPackage(std::string package)
{
	this->package = package;
}

MailSchema_extraInfoTables
MailSchema::getExtraInfoTables()
{
	return extraInfoTables;
}

void
MailSchema::setExtraInfoTables(MailSchema_extraInfoTables extraInfoTables)
{
	this->extraInfoTables = extraInfoTables;
}

MailServiceType
MailSchema::getServiceType()
{
	return serviceType;
}

void
MailSchema::setServiceType(MailServiceType serviceType)
{
	this->serviceType = serviceType;
}

std::string
MailSchema::getUsageCount()
{
	return usage_count;
}

void
MailSchema::setUsageCount(std::string usage_count)
{
	this->usage_count = usage_count;
}

std::list<std::string>
MailSchema::getServiceExtra()
{
	return serviceExtra;
}

void
MailSchema::setServiceExtra(std::list<std::string> serviceExtra)
{
	this->serviceExtra = serviceExtra;
}



