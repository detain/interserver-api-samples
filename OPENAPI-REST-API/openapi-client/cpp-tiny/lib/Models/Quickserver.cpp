

#include "Quickserver.h"

using namespace Tiny;

Quickserver::Quickserver()
{
	serviceInfo = QuickserverServiceInfo();
	client_links = std::list<QuickserverClientLink>();
	billingDetails = QuickserverBillingDetails();
	custCurrency = std::string();
	custCurrencySymbol = std::string();
	serviceMaster = QuickserverServiceMaster();
	package = std::string();
	os_template = std::string();
	serviceExtra = Quickserver_serviceExtra();
	extraInfoTables = Quickserver_extraInfoTables();
	cpu_graph_data = std::string();
	bandwidth_xaxis = std::string();
	bandwidth_yaxis = std::string();
	module = std::string();
	token = std::string();
	service_disk_used = std::string();
	service_disk_total = std::string();
	disk_percentage = float(0);
	memory = std::string();
	hdd = std::string();
	service_overview_extra = std::list<std::string>();
}

Quickserver::Quickserver(std::string jsonString)
{
	this->fromJson(jsonString);
}

Quickserver::~Quickserver()
{

}

void
Quickserver::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *serviceInfoKey = "serviceInfo";

    if(object.has_key(serviceInfoKey))
    {
        bourne::json value = object[serviceInfoKey];




        QuickserverServiceInfo* obj = &serviceInfo;
		obj->fromJson(value.dump());

    }

    const char *client_linksKey = "client_links";

    if(object.has_key(client_linksKey))
    {
        bourne::json value = object[client_linksKey];


        std::list<QuickserverClientLink> client_links_list;
        QuickserverClientLink element;
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




        QuickserverBillingDetails* obj = &billingDetails;
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




        QuickserverServiceMaster* obj = &serviceMaster;
		obj->fromJson(value.dump());

    }

    const char *packageKey = "package";

    if(object.has_key(packageKey))
    {
        bourne::json value = object[packageKey];



        jsonToValue(&package, value, "std::string");


    }

    const char *os_templateKey = "os_template";

    if(object.has_key(os_templateKey))
    {
        bourne::json value = object[os_templateKey];



        jsonToValue(&os_template, value, "std::string");


    }

    const char *serviceExtraKey = "serviceExtra";

    if(object.has_key(serviceExtraKey))
    {
        bourne::json value = object[serviceExtraKey];




        Quickserver_serviceExtra* obj = &serviceExtra;
		obj->fromJson(value.dump());

    }

    const char *extraInfoTablesKey = "extraInfoTables";

    if(object.has_key(extraInfoTablesKey))
    {
        bourne::json value = object[extraInfoTablesKey];




        Quickserver_extraInfoTables* obj = &extraInfoTables;
		obj->fromJson(value.dump());

    }

    const char *cpu_graph_dataKey = "cpu_graph_data";

    if(object.has_key(cpu_graph_dataKey))
    {
        bourne::json value = object[cpu_graph_dataKey];



        jsonToValue(&cpu_graph_data, value, "std::string");


    }

    const char *bandwidth_xaxisKey = "bandwidth_xaxis";

    if(object.has_key(bandwidth_xaxisKey))
    {
        bourne::json value = object[bandwidth_xaxisKey];



        jsonToValue(&bandwidth_xaxis, value, "std::string");


    }

    const char *bandwidth_yaxisKey = "bandwidth_yaxis";

    if(object.has_key(bandwidth_yaxisKey))
    {
        bourne::json value = object[bandwidth_yaxisKey];



        jsonToValue(&bandwidth_yaxis, value, "std::string");


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

    const char *service_disk_usedKey = "service_disk_used";

    if(object.has_key(service_disk_usedKey))
    {
        bourne::json value = object[service_disk_usedKey];



        jsonToValue(&service_disk_used, value, "std::string");


    }

    const char *service_disk_totalKey = "service_disk_total";

    if(object.has_key(service_disk_totalKey))
    {
        bourne::json value = object[service_disk_totalKey];



        jsonToValue(&service_disk_total, value, "std::string");


    }

    const char *disk_percentageKey = "disk_percentage";

    if(object.has_key(disk_percentageKey))
    {
        bourne::json value = object[disk_percentageKey];



        jsonToValue(&disk_percentage, value, "long");


    }

    const char *memoryKey = "memory";

    if(object.has_key(memoryKey))
    {
        bourne::json value = object[memoryKey];



        jsonToValue(&memory, value, "std::string");


    }

    const char *hddKey = "hdd";

    if(object.has_key(hddKey))
    {
        bourne::json value = object[hddKey];



        jsonToValue(&hdd, value, "std::string");


    }

    const char *service_overview_extraKey = "service_overview_extra";

    if(object.has_key(service_overview_extraKey))
    {
        bourne::json value = object[service_overview_extraKey];


        std::list<std::string> service_overview_extra_list;
        std::string element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "std::string");


            service_overview_extra_list.push_back(element);
        }
        service_overview_extra = service_overview_extra_list;


    }


}

bourne::json
Quickserver::toJson()
{
    bourne::json object = bourne::json::object();






	object["serviceInfo"] = getServiceInfo().toJson();




    std::list<QuickserverClientLink> client_links_list = getClientLinks();
    bourne::json client_links_arr = bourne::json::array();

    for(auto& var : client_links_list)
    {
        QuickserverClientLink obj = var;
        client_links_arr.append(obj.toJson());
    }
    object["client_links"] = client_links_arr;








	object["billingDetails"] = getBillingDetails().toJson();





    object["custCurrency"] = getCustCurrency();






    object["custCurrencySymbol"] = getCustCurrencySymbol();







	object["serviceMaster"] = getServiceMaster().toJson();





    object["package"] = getPackage();






    object["os_template"] = getOsTemplate();







	object["serviceExtra"] = getServiceExtra().toJson();






	object["extraInfoTables"] = getExtraInfoTables().toJson();





    object["cpu_graph_data"] = getCpuGraphData();






    object["bandwidth_xaxis"] = getBandwidthXaxis();






    object["bandwidth_yaxis"] = getBandwidthYaxis();






    object["module"] = getModule();






    object["token"] = getToken();






    object["service_disk_used"] = getServiceDiskUsed();






    object["service_disk_total"] = getServiceDiskTotal();






    object["disk_percentage"] = getDiskPercentage();






    object["memory"] = getMemory();






    object["hdd"] = getHdd();





    std::list<std::string> service_overview_extra_list = getServiceOverviewExtra();
    bourne::json service_overview_extra_arr = bourne::json::array();

    for(auto& var : service_overview_extra_list)
    {
        service_overview_extra_arr.append(var);
    }
    object["service_overview_extra"] = service_overview_extra_arr;






    return object;

}

QuickserverServiceInfo
Quickserver::getServiceInfo()
{
	return serviceInfo;
}

void
Quickserver::setServiceInfo(QuickserverServiceInfo serviceInfo)
{
	this->serviceInfo = serviceInfo;
}

std::list<QuickserverClientLink>
Quickserver::getClientLinks()
{
	return client_links;
}

void
Quickserver::setClientLinks(std::list<QuickserverClientLink> client_links)
{
	this->client_links = client_links;
}

QuickserverBillingDetails
Quickserver::getBillingDetails()
{
	return billingDetails;
}

void
Quickserver::setBillingDetails(QuickserverBillingDetails billingDetails)
{
	this->billingDetails = billingDetails;
}

std::string
Quickserver::getCustCurrency()
{
	return custCurrency;
}

void
Quickserver::setCustCurrency(std::string custCurrency)
{
	this->custCurrency = custCurrency;
}

std::string
Quickserver::getCustCurrencySymbol()
{
	return custCurrencySymbol;
}

void
Quickserver::setCustCurrencySymbol(std::string custCurrencySymbol)
{
	this->custCurrencySymbol = custCurrencySymbol;
}

QuickserverServiceMaster
Quickserver::getServiceMaster()
{
	return serviceMaster;
}

void
Quickserver::setServiceMaster(QuickserverServiceMaster serviceMaster)
{
	this->serviceMaster = serviceMaster;
}

std::string
Quickserver::getPackage()
{
	return package;
}

void
Quickserver::setPackage(std::string package)
{
	this->package = package;
}

std::string
Quickserver::getOsTemplate()
{
	return os_template;
}

void
Quickserver::setOsTemplate(std::string os_template)
{
	this->os_template = os_template;
}

Quickserver_serviceExtra
Quickserver::getServiceExtra()
{
	return serviceExtra;
}

void
Quickserver::setServiceExtra(Quickserver_serviceExtra serviceExtra)
{
	this->serviceExtra = serviceExtra;
}

Quickserver_extraInfoTables
Quickserver::getExtraInfoTables()
{
	return extraInfoTables;
}

void
Quickserver::setExtraInfoTables(Quickserver_extraInfoTables extraInfoTables)
{
	this->extraInfoTables = extraInfoTables;
}

std::string
Quickserver::getCpuGraphData()
{
	return cpu_graph_data;
}

void
Quickserver::setCpuGraphData(std::string cpu_graph_data)
{
	this->cpu_graph_data = cpu_graph_data;
}

std::string
Quickserver::getBandwidthXaxis()
{
	return bandwidth_xaxis;
}

void
Quickserver::setBandwidthXaxis(std::string bandwidth_xaxis)
{
	this->bandwidth_xaxis = bandwidth_xaxis;
}

std::string
Quickserver::getBandwidthYaxis()
{
	return bandwidth_yaxis;
}

void
Quickserver::setBandwidthYaxis(std::string bandwidth_yaxis)
{
	this->bandwidth_yaxis = bandwidth_yaxis;
}

std::string
Quickserver::getModule()
{
	return module;
}

void
Quickserver::setModule(std::string module)
{
	this->module = module;
}

std::string
Quickserver::getToken()
{
	return token;
}

void
Quickserver::setToken(std::string token)
{
	this->token = token;
}

std::string
Quickserver::getServiceDiskUsed()
{
	return service_disk_used;
}

void
Quickserver::setServiceDiskUsed(std::string service_disk_used)
{
	this->service_disk_used = service_disk_used;
}

std::string
Quickserver::getServiceDiskTotal()
{
	return service_disk_total;
}

void
Quickserver::setServiceDiskTotal(std::string service_disk_total)
{
	this->service_disk_total = service_disk_total;
}

long
Quickserver::getDiskPercentage()
{
	return disk_percentage;
}

void
Quickserver::setDiskPercentage(long disk_percentage)
{
	this->disk_percentage = disk_percentage;
}

std::string
Quickserver::getMemory()
{
	return memory;
}

void
Quickserver::setMemory(std::string memory)
{
	this->memory = memory;
}

std::string
Quickserver::getHdd()
{
	return hdd;
}

void
Quickserver::setHdd(std::string hdd)
{
	this->hdd = hdd;
}

std::list<std::string>
Quickserver::getServiceOverviewExtra()
{
	return service_overview_extra;
}

void
Quickserver::setServiceOverviewExtra(std::list<std::string> service_overview_extra)
{
	this->service_overview_extra = service_overview_extra;
}



