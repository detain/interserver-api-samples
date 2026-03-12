

#include "HomeDetailsModulesLicenses.h"

using namespace Tiny;

HomeDetailsModulesLicenses::HomeDetailsModulesLicenses()
{
	icon = std::string();
	view_link = std::string();
	heading = std::string();
	buy_link = std::string();
	list_link = std::string();
}

HomeDetailsModulesLicenses::HomeDetailsModulesLicenses(std::string jsonString)
{
	this->fromJson(jsonString);
}

HomeDetailsModulesLicenses::~HomeDetailsModulesLicenses()
{

}

void
HomeDetailsModulesLicenses::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *iconKey = "icon";

    if(object.has_key(iconKey))
    {
        bourne::json value = object[iconKey];



        jsonToValue(&icon, value, "std::string");


    }

    const char *view_linkKey = "view_link";

    if(object.has_key(view_linkKey))
    {
        bourne::json value = object[view_linkKey];



        jsonToValue(&view_link, value, "std::string");


    }

    const char *headingKey = "heading";

    if(object.has_key(headingKey))
    {
        bourne::json value = object[headingKey];



        jsonToValue(&heading, value, "std::string");


    }

    const char *buy_linkKey = "buy_link";

    if(object.has_key(buy_linkKey))
    {
        bourne::json value = object[buy_linkKey];



        jsonToValue(&buy_link, value, "std::string");


    }

    const char *list_linkKey = "list_link";

    if(object.has_key(list_linkKey))
    {
        bourne::json value = object[list_linkKey];



        jsonToValue(&list_link, value, "std::string");


    }


}

bourne::json
HomeDetailsModulesLicenses::toJson()
{
    bourne::json object = bourne::json::object();





    object["icon"] = getIcon();






    object["view_link"] = getViewLink();






    object["heading"] = getHeading();






    object["buy_link"] = getBuyLink();






    object["list_link"] = getListLink();



    return object;

}

std::string
HomeDetailsModulesLicenses::getIcon()
{
	return icon;
}

void
HomeDetailsModulesLicenses::setIcon(std::string icon)
{
	this->icon = icon;
}

std::string
HomeDetailsModulesLicenses::getViewLink()
{
	return view_link;
}

void
HomeDetailsModulesLicenses::setViewLink(std::string view_link)
{
	this->view_link = view_link;
}

std::string
HomeDetailsModulesLicenses::getHeading()
{
	return heading;
}

void
HomeDetailsModulesLicenses::setHeading(std::string heading)
{
	this->heading = heading;
}

std::string
HomeDetailsModulesLicenses::getBuyLink()
{
	return buy_link;
}

void
HomeDetailsModulesLicenses::setBuyLink(std::string buy_link)
{
	this->buy_link = buy_link;
}

std::string
HomeDetailsModulesLicenses::getListLink()
{
	return list_link;
}

void
HomeDetailsModulesLicenses::setListLink(std::string list_link)
{
	this->list_link = list_link;
}



