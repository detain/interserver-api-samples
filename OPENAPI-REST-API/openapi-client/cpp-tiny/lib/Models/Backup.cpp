

#include "Backup.h"

using namespace Tiny;

Backup::Backup()
{
	serviceInfo = BackupServiceInfo();
	client_links = std::list<BackupClientLink>();
	billingDetails = BackupBillingDetails();
	custCurrency = std::string();
	custCurrencySymbol = std::string();
	serviceMaster = BackupServiceMaster();
	package = std::string();
	serviceExtra = std::string();
	extraInfoTables = BackupExtraInfoTables();
}

Backup::Backup(std::string jsonString)
{
	this->fromJson(jsonString);
}

Backup::~Backup()
{

}

void
Backup::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *serviceInfoKey = "serviceInfo";

    if(object.has_key(serviceInfoKey))
    {
        bourne::json value = object[serviceInfoKey];




        BackupServiceInfo* obj = &serviceInfo;
		obj->fromJson(value.dump());

    }

    const char *client_linksKey = "client_links";

    if(object.has_key(client_linksKey))
    {
        bourne::json value = object[client_linksKey];


        std::list<BackupClientLink> client_links_list;
        BackupClientLink element;
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




        BackupBillingDetails* obj = &billingDetails;
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




        BackupServiceMaster* obj = &serviceMaster;
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



        jsonToValue(&serviceExtra, value, "std::string");


    }

    const char *extraInfoTablesKey = "extraInfoTables";

    if(object.has_key(extraInfoTablesKey))
    {
        bourne::json value = object[extraInfoTablesKey];




        BackupExtraInfoTables* obj = &extraInfoTables;
		obj->fromJson(value.dump());

    }


}

bourne::json
Backup::toJson()
{
    bourne::json object = bourne::json::object();






	object["serviceInfo"] = getServiceInfo().toJson();




    std::list<BackupClientLink> client_links_list = getClientLinks();
    bourne::json client_links_arr = bourne::json::array();

    for(auto& var : client_links_list)
    {
        BackupClientLink obj = var;
        client_links_arr.append(obj.toJson());
    }
    object["client_links"] = client_links_arr;








	object["billingDetails"] = getBillingDetails().toJson();





    object["custCurrency"] = getCustCurrency();






    object["custCurrencySymbol"] = getCustCurrencySymbol();







	object["serviceMaster"] = getServiceMaster().toJson();





    object["package"] = getPackage();






    object["serviceExtra"] = getServiceExtra();







	object["extraInfoTables"] = getExtraInfoTables().toJson();


    return object;

}

BackupServiceInfo
Backup::getServiceInfo()
{
	return serviceInfo;
}

void
Backup::setServiceInfo(BackupServiceInfo serviceInfo)
{
	this->serviceInfo = serviceInfo;
}

std::list<BackupClientLink>
Backup::getClientLinks()
{
	return client_links;
}

void
Backup::setClientLinks(std::list<BackupClientLink> client_links)
{
	this->client_links = client_links;
}

BackupBillingDetails
Backup::getBillingDetails()
{
	return billingDetails;
}

void
Backup::setBillingDetails(BackupBillingDetails billingDetails)
{
	this->billingDetails = billingDetails;
}

std::string
Backup::getCustCurrency()
{
	return custCurrency;
}

void
Backup::setCustCurrency(std::string custCurrency)
{
	this->custCurrency = custCurrency;
}

std::string
Backup::getCustCurrencySymbol()
{
	return custCurrencySymbol;
}

void
Backup::setCustCurrencySymbol(std::string custCurrencySymbol)
{
	this->custCurrencySymbol = custCurrencySymbol;
}

BackupServiceMaster
Backup::getServiceMaster()
{
	return serviceMaster;
}

void
Backup::setServiceMaster(BackupServiceMaster serviceMaster)
{
	this->serviceMaster = serviceMaster;
}

std::string
Backup::getPackage()
{
	return package;
}

void
Backup::setPackage(std::string package)
{
	this->package = package;
}

std::string
Backup::getServiceExtra()
{
	return serviceExtra;
}

void
Backup::setServiceExtra(std::string serviceExtra)
{
	this->serviceExtra = serviceExtra;
}

BackupExtraInfoTables
Backup::getExtraInfoTables()
{
	return extraInfoTables;
}

void
Backup::setExtraInfoTables(BackupExtraInfoTables extraInfoTables)
{
	this->extraInfoTables = extraInfoTables;
}



