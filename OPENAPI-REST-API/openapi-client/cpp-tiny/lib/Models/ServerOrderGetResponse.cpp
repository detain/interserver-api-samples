

#include "ServerOrderGetResponse.h"

using namespace Tiny;

ServerOrderGetResponse::ServerOrderGetResponse()
{
	form_values = FormValues();
	config_ids = ConfigIds();
	cpu = int(0);
	cpu_li = null<Cpu>();
	config_li = ConfigLists();
	frequency = int(0);
	currency = std::string();
	country = std::string();
	step = std::string();
	field_label = null<FieldLabel>();
	cpu_cores = null<std::map>();
	currencySymbol = std::string();
	custid = int(0);
	ima = std::string();
	regions = std::list<Region>();
	asset_servers = std::list<AssetServer>();
	buy_it_servers = std::list<Object>();
	display_showmore = std::string();
	cust_discount = float(0);
}

ServerOrderGetResponse::ServerOrderGetResponse(std::string jsonString)
{
	this->fromJson(jsonString);
}

ServerOrderGetResponse::~ServerOrderGetResponse()
{

}

void
ServerOrderGetResponse::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *form_valuesKey = "form_values";

    if(object.has_key(form_valuesKey))
    {
        bourne::json value = object[form_valuesKey];




        FormValues* obj = &form_values;
		obj->fromJson(value.dump());

    }

    const char *config_idsKey = "config_ids";

    if(object.has_key(config_idsKey))
    {
        bourne::json value = object[config_idsKey];




        ConfigIds* obj = &config_ids;
		obj->fromJson(value.dump());

    }

    const char *cpuKey = "cpu";

    if(object.has_key(cpuKey))
    {
        bourne::json value = object[cpuKey];



        jsonToValue(&cpu, value, "int");


    }

    const char *cpu_liKey = "cpu_li";

    if(object.has_key(cpu_liKey))
    {
        bourne::json value = object[cpu_liKey];


    }

    const char *config_liKey = "config_li";

    if(object.has_key(config_liKey))
    {
        bourne::json value = object[config_liKey];




        ConfigLists* obj = &config_li;
		obj->fromJson(value.dump());

    }

    const char *frequencyKey = "frequency";

    if(object.has_key(frequencyKey))
    {
        bourne::json value = object[frequencyKey];



        jsonToValue(&frequency, value, "int");


    }

    const char *currencyKey = "currency";

    if(object.has_key(currencyKey))
    {
        bourne::json value = object[currencyKey];



        jsonToValue(&currency, value, "std::string");


    }

    const char *countryKey = "country";

    if(object.has_key(countryKey))
    {
        bourne::json value = object[countryKey];



        jsonToValue(&country, value, "std::string");


    }

    const char *stepKey = "step";

    if(object.has_key(stepKey))
    {
        bourne::json value = object[stepKey];



        jsonToValue(&step, value, "std::string");


    }

    const char *field_labelKey = "field_label";

    if(object.has_key(field_labelKey))
    {
        bourne::json value = object[field_labelKey];


    }

    const char *cpu_coresKey = "cpu_cores";

    if(object.has_key(cpu_coresKey))
    {
        bourne::json value = object[cpu_coresKey];


    }

    const char *currencySymbolKey = "currencySymbol";

    if(object.has_key(currencySymbolKey))
    {
        bourne::json value = object[currencySymbolKey];



        jsonToValue(&currencySymbol, value, "std::string");


    }

    const char *custidKey = "custid";

    if(object.has_key(custidKey))
    {
        bourne::json value = object[custidKey];



        jsonToValue(&custid, value, "int");


    }

    const char *imaKey = "ima";

    if(object.has_key(imaKey))
    {
        bourne::json value = object[imaKey];



        jsonToValue(&ima, value, "std::string");


    }

    const char *regionsKey = "regions";

    if(object.has_key(regionsKey))
    {
        bourne::json value = object[regionsKey];


        std::list<Region> regions_list;
        Region element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            regions_list.push_back(element);
        }
        regions = regions_list;


    }

    const char *asset_serversKey = "asset_servers";

    if(object.has_key(asset_serversKey))
    {
        bourne::json value = object[asset_serversKey];


        std::list<AssetServer> asset_servers_list;
        AssetServer element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            asset_servers_list.push_back(element);
        }
        asset_servers = asset_servers_list;


    }

    const char *buy_it_serversKey = "buy_it_servers";

    if(object.has_key(buy_it_serversKey))
    {
        bourne::json value = object[buy_it_serversKey];


        std::list<Object> buy_it_servers_list;
        Object element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            buy_it_servers_list.push_back(element);
        }
        buy_it_servers = buy_it_servers_list;


    }

    const char *display_showmoreKey = "display_showmore";

    if(object.has_key(display_showmoreKey))
    {
        bourne::json value = object[display_showmoreKey];



        jsonToValue(&display_showmore, value, "std::string");


    }

    const char *cust_discountKey = "cust_discount";

    if(object.has_key(cust_discountKey))
    {
        bourne::json value = object[cust_discountKey];



        jsonToValue(&cust_discount, value, "long");


    }


}

bourne::json
ServerOrderGetResponse::toJson()
{
    bourne::json object = bourne::json::object();






	object["form_values"] = getFormValues().toJson();






	object["config_ids"] = getConfigIds().toJson();





    object["cpu"] = getCpu();










	object["config_li"] = getConfigLi().toJson();





    object["frequency"] = getFrequency();






    object["currency"] = getCurrency();






    object["country"] = getCountry();






    object["step"] = getStep();












    object["currencySymbol"] = getCurrencySymbol();






    object["custid"] = getCustid();






    object["ima"] = getIma();





    std::list<Region> regions_list = getRegions();
    bourne::json regions_arr = bourne::json::array();

    for(auto& var : regions_list)
    {
        Region obj = var;
        regions_arr.append(obj.toJson());
    }
    object["regions"] = regions_arr;






    std::list<AssetServer> asset_servers_list = getAssetServers();
    bourne::json asset_servers_arr = bourne::json::array();

    for(auto& var : asset_servers_list)
    {
        AssetServer obj = var;
        asset_servers_arr.append(obj.toJson());
    }
    object["asset_servers"] = asset_servers_arr;






    std::list<Object> buy_it_servers_list = getBuyItServers();
    bourne::json buy_it_servers_arr = bourne::json::array();

    for(auto& var : buy_it_servers_list)
    {
        Object obj = var;
        buy_it_servers_arr.append(obj.toJson());
    }
    object["buy_it_servers"] = buy_it_servers_arr;







    object["display_showmore"] = getDisplayShowmore();






    object["cust_discount"] = getCustDiscount();



    return object;

}

FormValues
ServerOrderGetResponse::getFormValues()
{
	return form_values;
}

void
ServerOrderGetResponse::setFormValues(FormValues form_values)
{
	this->form_values = form_values;
}

ConfigIds
ServerOrderGetResponse::getConfigIds()
{
	return config_ids;
}

void
ServerOrderGetResponse::setConfigIds(ConfigIds config_ids)
{
	this->config_ids = config_ids;
}

int
ServerOrderGetResponse::getCpu()
{
	return cpu;
}

void
ServerOrderGetResponse::setCpu(int cpu)
{
	this->cpu = cpu;
}

std::map<std::string, Cpu>
ServerOrderGetResponse::getCpuLi()
{
	return cpu_li;
}

void
ServerOrderGetResponse::setCpuLi(std::map<std::string, Cpu> cpu_li)
{
	this->cpu_li = cpu_li;
}

ConfigLists
ServerOrderGetResponse::getConfigLi()
{
	return config_li;
}

void
ServerOrderGetResponse::setConfigLi(ConfigLists config_li)
{
	this->config_li = config_li;
}

int
ServerOrderGetResponse::getFrequency()
{
	return frequency;
}

void
ServerOrderGetResponse::setFrequency(int frequency)
{
	this->frequency = frequency;
}

std::string
ServerOrderGetResponse::getCurrency()
{
	return currency;
}

void
ServerOrderGetResponse::setCurrency(std::string currency)
{
	this->currency = currency;
}

std::string
ServerOrderGetResponse::getCountry()
{
	return country;
}

void
ServerOrderGetResponse::setCountry(std::string country)
{
	this->country = country;
}

std::string
ServerOrderGetResponse::getStep()
{
	return step;
}

void
ServerOrderGetResponse::setStep(std::string step)
{
	this->step = step;
}

std::map<std::string, FieldLabel>
ServerOrderGetResponse::getFieldLabel()
{
	return field_label;
}

void
ServerOrderGetResponse::setFieldLabel(std::map<std::string, FieldLabel> field_label)
{
	this->field_label = field_label;
}

std::map<std::string, std::map<std::string, CpuWithDefaults>>
ServerOrderGetResponse::getCpuCores()
{
	return cpu_cores;
}

void
ServerOrderGetResponse::setCpuCores(std::map<std::string, std::map<std::string, CpuWithDefaults>> cpu_cores)
{
	this->cpu_cores = cpu_cores;
}

std::string
ServerOrderGetResponse::getCurrencySymbol()
{
	return currencySymbol;
}

void
ServerOrderGetResponse::setCurrencySymbol(std::string currencySymbol)
{
	this->currencySymbol = currencySymbol;
}

int
ServerOrderGetResponse::getCustid()
{
	return custid;
}

void
ServerOrderGetResponse::setCustid(int custid)
{
	this->custid = custid;
}

std::string
ServerOrderGetResponse::getIma()
{
	return ima;
}

void
ServerOrderGetResponse::setIma(std::string ima)
{
	this->ima = ima;
}

std::list<Region>
ServerOrderGetResponse::getRegions()
{
	return regions;
}

void
ServerOrderGetResponse::setRegions(std::list<Region> regions)
{
	this->regions = regions;
}

std::list<AssetServer>
ServerOrderGetResponse::getAssetServers()
{
	return asset_servers;
}

void
ServerOrderGetResponse::setAssetServers(std::list<AssetServer> asset_servers)
{
	this->asset_servers = asset_servers;
}

std::list<Object>
ServerOrderGetResponse::getBuyItServers()
{
	return buy_it_servers;
}

void
ServerOrderGetResponse::setBuyItServers(std::list<Object> buy_it_servers)
{
	this->buy_it_servers = buy_it_servers;
}

std::string
ServerOrderGetResponse::getDisplayShowmore()
{
	return display_showmore;
}

void
ServerOrderGetResponse::setDisplayShowmore(std::string display_showmore)
{
	this->display_showmore = display_showmore;
}

long
ServerOrderGetResponse::getCustDiscount()
{
	return cust_discount;
}

void
ServerOrderGetResponse::setCustDiscount(long cust_discount)
{
	this->cust_discount = cust_discount;
}



