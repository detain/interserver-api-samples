

#include "HomeDetailsModulesVps.h"

using namespace Tiny;

HomeDetailsModulesVps::HomeDetailsModulesVps()
{
	icon = std::string();
	view_link = std::string();
	heading = std::string();
	buy_link = std::string();
	list_link = std::string();
}

HomeDetailsModulesVps::HomeDetailsModulesVps(std::string jsonString)
{
	this->fromJson(jsonString);
}

HomeDetailsModulesVps::~HomeDetailsModulesVps()
{

}

void
HomeDetailsModulesVps::fromJson(std::string jsonObj)
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
HomeDetailsModulesVps::toJson()
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
HomeDetailsModulesVps::getIcon()
{
	return icon;
}

void
HomeDetailsModulesVps::setIcon(std::string icon)
{
	this->icon = icon;
}

std::string
HomeDetailsModulesVps::getViewLink()
{
	return view_link;
}

void
HomeDetailsModulesVps::setViewLink(std::string view_link)
{
	this->view_link = view_link;
}

std::string
HomeDetailsModulesVps::getHeading()
{
	return heading;
}

void
HomeDetailsModulesVps::setHeading(std::string heading)
{
	this->heading = heading;
}

std::string
HomeDetailsModulesVps::getBuyLink()
{
	return buy_link;
}

void
HomeDetailsModulesVps::setBuyLink(std::string buy_link)
{
	this->buy_link = buy_link;
}

std::string
HomeDetailsModulesVps::getListLink()
{
	return list_link;
}

void
HomeDetailsModulesVps::setListLink(std::string list_link)
{
	this->list_link = list_link;
}



