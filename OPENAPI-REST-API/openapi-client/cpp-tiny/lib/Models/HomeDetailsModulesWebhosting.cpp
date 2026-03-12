

#include "HomeDetailsModulesWebhosting.h"

using namespace Tiny;

HomeDetailsModulesWebhosting::HomeDetailsModulesWebhosting()
{
	icon = std::string();
	view_link = std::string();
	heading = std::string();
	buy_link = std::string();
	list_link = std::string();
}

HomeDetailsModulesWebhosting::HomeDetailsModulesWebhosting(std::string jsonString)
{
	this->fromJson(jsonString);
}

HomeDetailsModulesWebhosting::~HomeDetailsModulesWebhosting()
{

}

void
HomeDetailsModulesWebhosting::fromJson(std::string jsonObj)
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
HomeDetailsModulesWebhosting::toJson()
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
HomeDetailsModulesWebhosting::getIcon()
{
	return icon;
}

void
HomeDetailsModulesWebhosting::setIcon(std::string icon)
{
	this->icon = icon;
}

std::string
HomeDetailsModulesWebhosting::getViewLink()
{
	return view_link;
}

void
HomeDetailsModulesWebhosting::setViewLink(std::string view_link)
{
	this->view_link = view_link;
}

std::string
HomeDetailsModulesWebhosting::getHeading()
{
	return heading;
}

void
HomeDetailsModulesWebhosting::setHeading(std::string heading)
{
	this->heading = heading;
}

std::string
HomeDetailsModulesWebhosting::getBuyLink()
{
	return buy_link;
}

void
HomeDetailsModulesWebhosting::setBuyLink(std::string buy_link)
{
	this->buy_link = buy_link;
}

std::string
HomeDetailsModulesWebhosting::getListLink()
{
	return list_link;
}

void
HomeDetailsModulesWebhosting::setListLink(std::string list_link)
{
	this->list_link = list_link;
}



