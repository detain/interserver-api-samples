

#include "Vps.h"

using namespace Tiny;

Vps::Vps()
{
	serviceInfo = VpsServiceInfo();
	client_links = std::list<VpsClientLink>();
	billingDetails = VpsBillingDetails();
	custCurrency = std::string();
	custCurrencySymbol = std::string();
	serviceMaster = VpsServiceMaster();
	package = std::string();
	serviceExtra = VpsServiceExtra();
	extraInfoTables = VpsExtraInfoTables();
	module = std::string();
	token = std::string();
	da_link = int(0);
	sr_link = int(0);
	cp_data = VpsCPData();
	da_data = VpsDAData();
	plesk12_data = VpsPlesk12Data();
	serviceAddons = VpsServiceAddons();
	os_template = std::string();
	cpu_graph_data = null;
}

Vps::Vps(std::string jsonString)
{
	this->fromJson(jsonString);
}

Vps::~Vps()
{

}

void
Vps::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *serviceInfoKey = "serviceInfo";

    if(object.has_key(serviceInfoKey))
    {
        bourne::json value = object[serviceInfoKey];




        VpsServiceInfo* obj = &serviceInfo;
		obj->fromJson(value.dump());

    }

    const char *client_linksKey = "client_links";

    if(object.has_key(client_linksKey))
    {
        bourne::json value = object[client_linksKey];


        std::list<VpsClientLink> client_links_list;
        VpsClientLink element;
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




        VpsBillingDetails* obj = &billingDetails;
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




        VpsServiceMaster* obj = &serviceMaster;
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




        VpsServiceExtra* obj = &serviceExtra;
		obj->fromJson(value.dump());

    }

    const char *extraInfoTablesKey = "extraInfoTables";

    if(object.has_key(extraInfoTablesKey))
    {
        bourne::json value = object[extraInfoTablesKey];




        VpsExtraInfoTables* obj = &extraInfoTables;
		obj->fromJson(value.dump());

    }

    const char *moduleKey = "module";

    if(object.has_key(moduleKey))
    {
        bourne::json value = object[moduleKey];



        jsonToValue(&module, value, "std::string");


    }

    const char *tokenKey = "token";

    if(object.has_key(tokenKey))
    {
        bourne::json value = object[tokenKey];



        jsonToValue(&token, value, "std::string");


    }

    const char *da_linkKey = "da_link";

    if(object.has_key(da_linkKey))
    {
        bourne::json value = object[da_linkKey];



        jsonToValue(&da_link, value, "int");


    }

    const char *sr_linkKey = "sr_link";

    if(object.has_key(sr_linkKey))
    {
        bourne::json value = object[sr_linkKey];



        jsonToValue(&sr_link, value, "int");


    }

    const char *cp_dataKey = "cp_data";

    if(object.has_key(cp_dataKey))
    {
        bourne::json value = object[cp_dataKey];




        VpsCPData* obj = &cp_data;
		obj->fromJson(value.dump());

    }

    const char *da_dataKey = "da_data";

    if(object.has_key(da_dataKey))
    {
        bourne::json value = object[da_dataKey];




        VpsDAData* obj = &da_data;
		obj->fromJson(value.dump());

    }

    const char *plesk12_dataKey = "plesk12_data";

    if(object.has_key(plesk12_dataKey))
    {
        bourne::json value = object[plesk12_dataKey];




        VpsPlesk12Data* obj = &plesk12_data;
		obj->fromJson(value.dump());

    }

    const char *serviceAddonsKey = "serviceAddons";

    if(object.has_key(serviceAddonsKey))
    {
        bourne::json value = object[serviceAddonsKey];




        VpsServiceAddons* obj = &serviceAddons;
		obj->fromJson(value.dump());

    }

    const char *os_templateKey = "os_template";

    if(object.has_key(os_templateKey))
    {
        bourne::json value = object[os_templateKey];



        jsonToValue(&os_template, value, "std::string");


    }

    const char *cpu_graph_dataKey = "cpu_graph_data";

    if(object.has_key(cpu_graph_dataKey))
    {
        bourne::json value = object[cpu_graph_dataKey];




        AnyType* obj = &cpu_graph_data;
		obj->fromJson(value.dump());

    }


}

bourne::json
Vps::toJson()
{
    bourne::json object = bourne::json::object();






	object["serviceInfo"] = getServiceInfo().toJson();




    std::list<VpsClientLink> client_links_list = getClientLinks();
    bourne::json client_links_arr = bourne::json::array();

    for(auto& var : client_links_list)
    {
        VpsClientLink obj = var;
        client_links_arr.append(obj.toJson());
    }
    object["client_links"] = client_links_arr;








	object["billingDetails"] = getBillingDetails().toJson();





    object["custCurrency"] = getCustCurrency();






    object["custCurrencySymbol"] = getCustCurrencySymbol();







	object["serviceMaster"] = getServiceMaster().toJson();





    object["package"] = getPackage();







	object["serviceExtra"] = getServiceExtra().toJson();






	object["extraInfoTables"] = getExtraInfoTables().toJson();





    object["module"] = getModule();






    object["token"] = getToken();






    object["da_link"] = getDaLink();






    object["sr_link"] = getSrLink();







	object["cp_data"] = getCpData().toJson();






	object["da_data"] = getDaData().toJson();






	object["plesk12_data"] = getPlesk12Data().toJson();






	object["serviceAddons"] = getServiceAddons().toJson();





    object["os_template"] = getOsTemplate();







	object["cpu_graph_data"] = getCpuGraphData().toJson();


    return object;

}

VpsServiceInfo
Vps::getServiceInfo()
{
	return serviceInfo;
}

void
Vps::setServiceInfo(VpsServiceInfo serviceInfo)
{
	this->serviceInfo = serviceInfo;
}

std::list<VpsClientLink>
Vps::getClientLinks()
{
	return client_links;
}

void
Vps::setClientLinks(std::list<VpsClientLink> client_links)
{
	this->client_links = client_links;
}

VpsBillingDetails
Vps::getBillingDetails()
{
	return billingDetails;
}

void
Vps::setBillingDetails(VpsBillingDetails billingDetails)
{
	this->billingDetails = billingDetails;
}

std::string
Vps::getCustCurrency()
{
	return custCurrency;
}

void
Vps::setCustCurrency(std::string custCurrency)
{
	this->custCurrency = custCurrency;
}

std::string
Vps::getCustCurrencySymbol()
{
	return custCurrencySymbol;
}

void
Vps::setCustCurrencySymbol(std::string custCurrencySymbol)
{
	this->custCurrencySymbol = custCurrencySymbol;
}

VpsServiceMaster
Vps::getServiceMaster()
{
	return serviceMaster;
}

void
Vps::setServiceMaster(VpsServiceMaster serviceMaster)
{
	this->serviceMaster = serviceMaster;
}

std::string
Vps::getPackage()
{
	return package;
}

void
Vps::setPackage(std::string package)
{
	this->package = package;
}

VpsServiceExtra
Vps::getServiceExtra()
{
	return serviceExtra;
}

void
Vps::setServiceExtra(VpsServiceExtra serviceExtra)
{
	this->serviceExtra = serviceExtra;
}

VpsExtraInfoTables
Vps::getExtraInfoTables()
{
	return extraInfoTables;
}

void
Vps::setExtraInfoTables(VpsExtraInfoTables extraInfoTables)
{
	this->extraInfoTables = extraInfoTables;
}

std::string
Vps::getModule()
{
	return module;
}

void
Vps::setModule(std::string module)
{
	this->module = module;
}

std::string
Vps::getToken()
{
	return token;
}

void
Vps::setToken(std::string token)
{
	this->token = token;
}

int
Vps::getDaLink()
{
	return da_link;
}

void
Vps::setDaLink(int da_link)
{
	this->da_link = da_link;
}

int
Vps::getSrLink()
{
	return sr_link;
}

void
Vps::setSrLink(int sr_link)
{
	this->sr_link = sr_link;
}

VpsCPData
Vps::getCpData()
{
	return cp_data;
}

void
Vps::setCpData(VpsCPData cp_data)
{
	this->cp_data = cp_data;
}

VpsDAData
Vps::getDaData()
{
	return da_data;
}

void
Vps::setDaData(VpsDAData da_data)
{
	this->da_data = da_data;
}

VpsPlesk12Data
Vps::getPlesk12Data()
{
	return plesk12_data;
}

void
Vps::setPlesk12Data(VpsPlesk12Data plesk12_data)
{
	this->plesk12_data = plesk12_data;
}

VpsServiceAddons
Vps::getServiceAddons()
{
	return serviceAddons;
}

void
Vps::setServiceAddons(VpsServiceAddons serviceAddons)
{
	this->serviceAddons = serviceAddons;
}

std::string
Vps::getOsTemplate()
{
	return os_template;
}

void
Vps::setOsTemplate(std::string os_template)
{
	this->os_template = os_template;
}

AnyType
Vps::getCpuGraphData()
{
	return cpu_graph_data;
}

void
Vps::setCpuGraphData(AnyType cpu_graph_data)
{
	this->cpu_graph_data = cpu_graph_data;
}



