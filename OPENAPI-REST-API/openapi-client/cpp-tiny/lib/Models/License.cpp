

#include "License.h"

using namespace Tiny;

License::License()
{
	serviceInfo = LicenseServiceInfo();
	client_links = std::list<LicenseClientLink>();
	billingDetails = LicenseBillingDetails();
	custCurrency = std::string();
	custCurrencySymbol = std::string();
	package = std::string();
	serviceExtra = std::list<std::string>();
	extraInfoTables = License_extraInfoTables();
	service_overview_extra = std::string();
	serviceType = LicenseServiceType();
	license_key = std::string();
}

License::License(std::string jsonString)
{
	this->fromJson(jsonString);
}

License::~License()
{

}

void
License::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *serviceInfoKey = "serviceInfo";

    if(object.has_key(serviceInfoKey))
    {
        bourne::json value = object[serviceInfoKey];




        LicenseServiceInfo* obj = &serviceInfo;
		obj->fromJson(value.dump());

    }

    const char *client_linksKey = "client_links";

    if(object.has_key(client_linksKey))
    {
        bourne::json value = object[client_linksKey];


        std::list<LicenseClientLink> client_links_list;
        LicenseClientLink element;
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




        LicenseBillingDetails* obj = &billingDetails;
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

    const char *extraInfoTablesKey = "extraInfoTables";

    if(object.has_key(extraInfoTablesKey))
    {
        bourne::json value = object[extraInfoTablesKey];




        License_extraInfoTables* obj = &extraInfoTables;
		obj->fromJson(value.dump());

    }

    const char *service_overview_extraKey = "service_overview_extra";

    if(object.has_key(service_overview_extraKey))
    {
        bourne::json value = object[service_overview_extraKey];



        jsonToValue(&service_overview_extra, value, "std::string");


    }

    const char *serviceTypeKey = "serviceType";

    if(object.has_key(serviceTypeKey))
    {
        bourne::json value = object[serviceTypeKey];




        LicenseServiceType* obj = &serviceType;
		obj->fromJson(value.dump());

    }

    const char *license_keyKey = "license_key";

    if(object.has_key(license_keyKey))
    {
        bourne::json value = object[license_keyKey];



        jsonToValue(&license_key, value, "std::string");


    }


}

bourne::json
License::toJson()
{
    bourne::json object = bourne::json::object();






	object["serviceInfo"] = getServiceInfo().toJson();




    std::list<LicenseClientLink> client_links_list = getClientLinks();
    bourne::json client_links_arr = bourne::json::array();

    for(auto& var : client_links_list)
    {
        LicenseClientLink obj = var;
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










	object["extraInfoTables"] = getExtraInfoTables().toJson();





    object["service_overview_extra"] = getServiceOverviewExtra();







	object["serviceType"] = getServiceType().toJson();





    object["license_key"] = getLicenseKey();



    return object;

}

LicenseServiceInfo
License::getServiceInfo()
{
	return serviceInfo;
}

void
License::setServiceInfo(LicenseServiceInfo serviceInfo)
{
	this->serviceInfo = serviceInfo;
}

std::list<LicenseClientLink>
License::getClientLinks()
{
	return client_links;
}

void
License::setClientLinks(std::list<LicenseClientLink> client_links)
{
	this->client_links = client_links;
}

LicenseBillingDetails
License::getBillingDetails()
{
	return billingDetails;
}

void
License::setBillingDetails(LicenseBillingDetails billingDetails)
{
	this->billingDetails = billingDetails;
}

std::string
License::getCustCurrency()
{
	return custCurrency;
}

void
License::setCustCurrency(std::string custCurrency)
{
	this->custCurrency = custCurrency;
}

std::string
License::getCustCurrencySymbol()
{
	return custCurrencySymbol;
}

void
License::setCustCurrencySymbol(std::string custCurrencySymbol)
{
	this->custCurrencySymbol = custCurrencySymbol;
}

std::string
License::getPackage()
{
	return package;
}

void
License::setPackage(std::string package)
{
	this->package = package;
}

std::list<std::string>
License::getServiceExtra()
{
	return serviceExtra;
}

void
License::setServiceExtra(std::list<std::string> serviceExtra)
{
	this->serviceExtra = serviceExtra;
}

License_extraInfoTables
License::getExtraInfoTables()
{
	return extraInfoTables;
}

void
License::setExtraInfoTables(License_extraInfoTables extraInfoTables)
{
	this->extraInfoTables = extraInfoTables;
}

std::string
License::getServiceOverviewExtra()
{
	return service_overview_extra;
}

void
License::setServiceOverviewExtra(std::string service_overview_extra)
{
	this->service_overview_extra = service_overview_extra;
}

LicenseServiceType
License::getServiceType()
{
	return serviceType;
}

void
License::setServiceType(LicenseServiceType serviceType)
{
	this->serviceType = serviceType;
}

std::string
License::getLicenseKey()
{
	return license_key;
}

void
License::setLicenseKey(std::string license_key)
{
	this->license_key = license_key;
}



