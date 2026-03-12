

#include "WebsitesOrderPackagesInfo.h"

using namespace Tiny;

WebsitesOrderPackagesInfo::WebsitesOrderPackagesInfo()
{
	services_id = std::string();
	services_name = std::string();
	services_cost = std::string();
	services_category = std::string();
	services_buyable = std::string();
	services_type = std::string();
	services_module = std::string();
	services_description = std::string();
	services_field1 = std::string();
	services_field2 = std::string();
	services_html = std::string();
	services_moreinfo_url = std::string();
	services_hidden = std::string();
}

WebsitesOrderPackagesInfo::WebsitesOrderPackagesInfo(std::string jsonString)
{
	this->fromJson(jsonString);
}

WebsitesOrderPackagesInfo::~WebsitesOrderPackagesInfo()
{

}

void
WebsitesOrderPackagesInfo::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *services_idKey = "services_id";

    if(object.has_key(services_idKey))
    {
        bourne::json value = object[services_idKey];



        jsonToValue(&services_id, value, "std::string");


    }

    const char *services_nameKey = "services_name";

    if(object.has_key(services_nameKey))
    {
        bourne::json value = object[services_nameKey];



        jsonToValue(&services_name, value, "std::string");


    }

    const char *services_costKey = "services_cost";

    if(object.has_key(services_costKey))
    {
        bourne::json value = object[services_costKey];



        jsonToValue(&services_cost, value, "std::string");


    }

    const char *services_categoryKey = "services_category";

    if(object.has_key(services_categoryKey))
    {
        bourne::json value = object[services_categoryKey];



        jsonToValue(&services_category, value, "std::string");


    }

    const char *services_buyableKey = "services_buyable";

    if(object.has_key(services_buyableKey))
    {
        bourne::json value = object[services_buyableKey];



        jsonToValue(&services_buyable, value, "std::string");


    }

    const char *services_typeKey = "services_type";

    if(object.has_key(services_typeKey))
    {
        bourne::json value = object[services_typeKey];



        jsonToValue(&services_type, value, "std::string");


    }

    const char *services_moduleKey = "services_module";

    if(object.has_key(services_moduleKey))
    {
        bourne::json value = object[services_moduleKey];



        jsonToValue(&services_module, value, "std::string");


    }

    const char *services_descriptionKey = "services_description";

    if(object.has_key(services_descriptionKey))
    {
        bourne::json value = object[services_descriptionKey];



        jsonToValue(&services_description, value, "std::string");


    }

    const char *services_field1Key = "services_field1";

    if(object.has_key(services_field1Key))
    {
        bourne::json value = object[services_field1Key];



        jsonToValue(&services_field1, value, "std::string");


    }

    const char *services_field2Key = "services_field2";

    if(object.has_key(services_field2Key))
    {
        bourne::json value = object[services_field2Key];



        jsonToValue(&services_field2, value, "std::string");


    }

    const char *services_htmlKey = "services_html";

    if(object.has_key(services_htmlKey))
    {
        bourne::json value = object[services_htmlKey];



        jsonToValue(&services_html, value, "std::string");


    }

    const char *services_moreinfo_urlKey = "services_moreinfo_url";

    if(object.has_key(services_moreinfo_urlKey))
    {
        bourne::json value = object[services_moreinfo_urlKey];



        jsonToValue(&services_moreinfo_url, value, "std::string");


    }

    const char *services_hiddenKey = "services_hidden";

    if(object.has_key(services_hiddenKey))
    {
        bourne::json value = object[services_hiddenKey];



        jsonToValue(&services_hidden, value, "std::string");


    }


}

bourne::json
WebsitesOrderPackagesInfo::toJson()
{
    bourne::json object = bourne::json::object();





    object["services_id"] = getServicesId();






    object["services_name"] = getServicesName();






    object["services_cost"] = getServicesCost();






    object["services_category"] = getServicesCategory();






    object["services_buyable"] = getServicesBuyable();






    object["services_type"] = getServicesType();






    object["services_module"] = getServicesModule();






    object["services_description"] = getServicesDescription();






    object["services_field1"] = getServicesField1();






    object["services_field2"] = getServicesField2();






    object["services_html"] = getServicesHtml();






    object["services_moreinfo_url"] = getServicesMoreinfoUrl();






    object["services_hidden"] = getServicesHidden();



    return object;

}

std::string
WebsitesOrderPackagesInfo::getServicesId()
{
	return services_id;
}

void
WebsitesOrderPackagesInfo::setServicesId(std::string services_id)
{
	this->services_id = services_id;
}

std::string
WebsitesOrderPackagesInfo::getServicesName()
{
	return services_name;
}

void
WebsitesOrderPackagesInfo::setServicesName(std::string services_name)
{
	this->services_name = services_name;
}

std::string
WebsitesOrderPackagesInfo::getServicesCost()
{
	return services_cost;
}

void
WebsitesOrderPackagesInfo::setServicesCost(std::string services_cost)
{
	this->services_cost = services_cost;
}

std::string
WebsitesOrderPackagesInfo::getServicesCategory()
{
	return services_category;
}

void
WebsitesOrderPackagesInfo::setServicesCategory(std::string services_category)
{
	this->services_category = services_category;
}

std::string
WebsitesOrderPackagesInfo::getServicesBuyable()
{
	return services_buyable;
}

void
WebsitesOrderPackagesInfo::setServicesBuyable(std::string services_buyable)
{
	this->services_buyable = services_buyable;
}

std::string
WebsitesOrderPackagesInfo::getServicesType()
{
	return services_type;
}

void
WebsitesOrderPackagesInfo::setServicesType(std::string services_type)
{
	this->services_type = services_type;
}

std::string
WebsitesOrderPackagesInfo::getServicesModule()
{
	return services_module;
}

void
WebsitesOrderPackagesInfo::setServicesModule(std::string services_module)
{
	this->services_module = services_module;
}

std::string
WebsitesOrderPackagesInfo::getServicesDescription()
{
	return services_description;
}

void
WebsitesOrderPackagesInfo::setServicesDescription(std::string services_description)
{
	this->services_description = services_description;
}

std::string
WebsitesOrderPackagesInfo::getServicesField1()
{
	return services_field1;
}

void
WebsitesOrderPackagesInfo::setServicesField1(std::string services_field1)
{
	this->services_field1 = services_field1;
}

std::string
WebsitesOrderPackagesInfo::getServicesField2()
{
	return services_field2;
}

void
WebsitesOrderPackagesInfo::setServicesField2(std::string services_field2)
{
	this->services_field2 = services_field2;
}

std::string
WebsitesOrderPackagesInfo::getServicesHtml()
{
	return services_html;
}

void
WebsitesOrderPackagesInfo::setServicesHtml(std::string services_html)
{
	this->services_html = services_html;
}

std::string
WebsitesOrderPackagesInfo::getServicesMoreinfoUrl()
{
	return services_moreinfo_url;
}

void
WebsitesOrderPackagesInfo::setServicesMoreinfoUrl(std::string services_moreinfo_url)
{
	this->services_moreinfo_url = services_moreinfo_url;
}

std::string
WebsitesOrderPackagesInfo::getServicesHidden()
{
	return services_hidden;
}

void
WebsitesOrderPackagesInfo::setServicesHidden(std::string services_hidden)
{
	this->services_hidden = services_hidden;
}



