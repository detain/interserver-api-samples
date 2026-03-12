

#include "Domain.h"

using namespace Tiny;

Domain::Domain()
{
	serviceInfo = DomainServiceInfo();
	serviceTypes = null<DomainServiceType>();
	client_links = std::list<DomainClientLink>();
	billingDetails = DomainBillingDetails();
	custCurrency = std::string();
	custCurrencySymbol = std::string();
	serviceExtra = DomainBillingExtra();
	extraInfoTables = BackupExtraInfoTables();
	serviceType = DomainServiceType();
	contact_details = DomainContactDetails();
	pwarning = std::string();
	transfer_info = std::string();
	errors = bool(false);
	domain_logs = std::list<std::string>();
	allInfo = DomainAllInfo();
	registrarStatus = std::string();
	locked = std::string();
	whoisPrivacy = std::string();
	autoRenew = std::string();
}

Domain::Domain(std::string jsonString)
{
	this->fromJson(jsonString);
}

Domain::~Domain()
{

}

void
Domain::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *serviceInfoKey = "serviceInfo";

    if(object.has_key(serviceInfoKey))
    {
        bourne::json value = object[serviceInfoKey];




        DomainServiceInfo* obj = &serviceInfo;
		obj->fromJson(value.dump());

    }

    const char *serviceTypesKey = "serviceTypes";

    if(object.has_key(serviceTypesKey))
    {
        bourne::json value = object[serviceTypesKey];


    }

    const char *client_linksKey = "client_links";

    if(object.has_key(client_linksKey))
    {
        bourne::json value = object[client_linksKey];


        std::list<DomainClientLink> client_links_list;
        DomainClientLink element;
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




        DomainBillingDetails* obj = &billingDetails;
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

    const char *serviceExtraKey = "serviceExtra";

    if(object.has_key(serviceExtraKey))
    {
        bourne::json value = object[serviceExtraKey];




        DomainBillingExtra* obj = &serviceExtra;
		obj->fromJson(value.dump());

    }

    const char *extraInfoTablesKey = "extraInfoTables";

    if(object.has_key(extraInfoTablesKey))
    {
        bourne::json value = object[extraInfoTablesKey];




        BackupExtraInfoTables* obj = &extraInfoTables;
		obj->fromJson(value.dump());

    }

    const char *serviceTypeKey = "serviceType";

    if(object.has_key(serviceTypeKey))
    {
        bourne::json value = object[serviceTypeKey];




        DomainServiceType* obj = &serviceType;
		obj->fromJson(value.dump());

    }

    const char *contact_detailsKey = "contact_details";

    if(object.has_key(contact_detailsKey))
    {
        bourne::json value = object[contact_detailsKey];




        DomainContactDetails* obj = &contact_details;
		obj->fromJson(value.dump());

    }

    const char *pwarningKey = "pwarning";

    if(object.has_key(pwarningKey))
    {
        bourne::json value = object[pwarningKey];



        jsonToValue(&pwarning, value, "std::string");


    }

    const char *transfer_infoKey = "transfer_info";

    if(object.has_key(transfer_infoKey))
    {
        bourne::json value = object[transfer_infoKey];



        jsonToValue(&transfer_info, value, "std::string");


    }

    const char *errorsKey = "errors";

    if(object.has_key(errorsKey))
    {
        bourne::json value = object[errorsKey];



        jsonToValue(&errors, value, "bool");


    }

    const char *domain_logsKey = "domain_logs";

    if(object.has_key(domain_logsKey))
    {
        bourne::json value = object[domain_logsKey];


        std::list<std::string> domain_logs_list;
        std::string element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "std::string");


            domain_logs_list.push_back(element);
        }
        domain_logs = domain_logs_list;


    }

    const char *allInfoKey = "allInfo";

    if(object.has_key(allInfoKey))
    {
        bourne::json value = object[allInfoKey];




        DomainAllInfo* obj = &allInfo;
		obj->fromJson(value.dump());

    }

    const char *registrarStatusKey = "registrarStatus";

    if(object.has_key(registrarStatusKey))
    {
        bourne::json value = object[registrarStatusKey];



        jsonToValue(&registrarStatus, value, "std::string");


    }

    const char *lockedKey = "locked";

    if(object.has_key(lockedKey))
    {
        bourne::json value = object[lockedKey];



        jsonToValue(&locked, value, "std::string");


    }

    const char *whoisPrivacyKey = "whoisPrivacy";

    if(object.has_key(whoisPrivacyKey))
    {
        bourne::json value = object[whoisPrivacyKey];



        jsonToValue(&whoisPrivacy, value, "std::string");


    }

    const char *autoRenewKey = "autoRenew";

    if(object.has_key(autoRenewKey))
    {
        bourne::json value = object[autoRenewKey];



        jsonToValue(&autoRenew, value, "std::string");


    }


}

bourne::json
Domain::toJson()
{
    bourne::json object = bourne::json::object();






	object["serviceInfo"] = getServiceInfo().toJson();







    std::list<DomainClientLink> client_links_list = getClientLinks();
    bourne::json client_links_arr = bourne::json::array();

    for(auto& var : client_links_list)
    {
        DomainClientLink obj = var;
        client_links_arr.append(obj.toJson());
    }
    object["client_links"] = client_links_arr;








	object["billingDetails"] = getBillingDetails().toJson();





    object["custCurrency"] = getCustCurrency();






    object["custCurrencySymbol"] = getCustCurrencySymbol();







	object["serviceExtra"] = getServiceExtra().toJson();






	object["extraInfoTables"] = getExtraInfoTables().toJson();






	object["serviceType"] = getServiceType().toJson();






	object["contact_details"] = getContactDetails().toJson();





    object["pwarning"] = getPwarning();






    object["transfer_info"] = getTransferInfo();






    object["errors"] = isErrors();





    std::list<std::string> domain_logs_list = getDomainLogs();
    bourne::json domain_logs_arr = bourne::json::array();

    for(auto& var : domain_logs_list)
    {
        domain_logs_arr.append(var);
    }
    object["domain_logs"] = domain_logs_arr;










	object["allInfo"] = getAllInfo().toJson();





    object["registrarStatus"] = getRegistrarStatus();






    object["locked"] = getLocked();






    object["whoisPrivacy"] = getWhoisPrivacy();






    object["autoRenew"] = getAutoRenew();



    return object;

}

DomainServiceInfo
Domain::getServiceInfo()
{
	return serviceInfo;
}

void
Domain::setServiceInfo(DomainServiceInfo serviceInfo)
{
	this->serviceInfo = serviceInfo;
}

std::map<std::string, DomainServiceType>
Domain::getServiceTypes()
{
	return serviceTypes;
}

void
Domain::setServiceTypes(std::map<std::string, DomainServiceType> serviceTypes)
{
	this->serviceTypes = serviceTypes;
}

std::list<DomainClientLink>
Domain::getClientLinks()
{
	return client_links;
}

void
Domain::setClientLinks(std::list<DomainClientLink> client_links)
{
	this->client_links = client_links;
}

DomainBillingDetails
Domain::getBillingDetails()
{
	return billingDetails;
}

void
Domain::setBillingDetails(DomainBillingDetails billingDetails)
{
	this->billingDetails = billingDetails;
}

std::string
Domain::getCustCurrency()
{
	return custCurrency;
}

void
Domain::setCustCurrency(std::string custCurrency)
{
	this->custCurrency = custCurrency;
}

std::string
Domain::getCustCurrencySymbol()
{
	return custCurrencySymbol;
}

void
Domain::setCustCurrencySymbol(std::string custCurrencySymbol)
{
	this->custCurrencySymbol = custCurrencySymbol;
}

DomainBillingExtra
Domain::getServiceExtra()
{
	return serviceExtra;
}

void
Domain::setServiceExtra(DomainBillingExtra serviceExtra)
{
	this->serviceExtra = serviceExtra;
}

BackupExtraInfoTables
Domain::getExtraInfoTables()
{
	return extraInfoTables;
}

void
Domain::setExtraInfoTables(BackupExtraInfoTables extraInfoTables)
{
	this->extraInfoTables = extraInfoTables;
}

DomainServiceType
Domain::getServiceType()
{
	return serviceType;
}

void
Domain::setServiceType(DomainServiceType serviceType)
{
	this->serviceType = serviceType;
}

DomainContactDetails
Domain::getContactDetails()
{
	return contact_details;
}

void
Domain::setContactDetails(DomainContactDetails contact_details)
{
	this->contact_details = contact_details;
}

std::string
Domain::getPwarning()
{
	return pwarning;
}

void
Domain::setPwarning(std::string pwarning)
{
	this->pwarning = pwarning;
}

std::string
Domain::getTransferInfo()
{
	return transfer_info;
}

void
Domain::setTransferInfo(std::string transfer_info)
{
	this->transfer_info = transfer_info;
}

bool
Domain::isErrors()
{
	return errors;
}

void
Domain::setErrors(bool errors)
{
	this->errors = errors;
}

std::list<std::string>
Domain::getDomainLogs()
{
	return domain_logs;
}

void
Domain::setDomainLogs(std::list<std::string> domain_logs)
{
	this->domain_logs = domain_logs;
}

DomainAllInfo
Domain::getAllInfo()
{
	return allInfo;
}

void
Domain::setAllInfo(DomainAllInfo allInfo)
{
	this->allInfo = allInfo;
}

std::string
Domain::getRegistrarStatus()
{
	return registrarStatus;
}

void
Domain::setRegistrarStatus(std::string registrarStatus)
{
	this->registrarStatus = registrarStatus;
}

std::string
Domain::getLocked()
{
	return locked;
}

void
Domain::setLocked(std::string locked)
{
	this->locked = locked;
}

std::string
Domain::getWhoisPrivacy()
{
	return whoisPrivacy;
}

void
Domain::setWhoisPrivacy(std::string whoisPrivacy)
{
	this->whoisPrivacy = whoisPrivacy;
}

std::string
Domain::getAutoRenew()
{
	return autoRenew;
}

void
Domain::setAutoRenew(std::string autoRenew)
{
	this->autoRenew = autoRenew;
}



