

#include "ServerClientLink.h"

using namespace Tiny;

ServerClientLink::ServerClientLink()
{
	label = std::string();
	link = std::string();
	icon = std::string();
	icon_text = std::string();
	help_text = std::string();
}

ServerClientLink::ServerClientLink(std::string jsonString)
{
	this->fromJson(jsonString);
}

ServerClientLink::~ServerClientLink()
{

}

void
ServerClientLink::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *labelKey = "label";

    if(object.has_key(labelKey))
    {
        bourne::json value = object[labelKey];



        jsonToValue(&label, value, "std::string");


    }

    const char *linkKey = "link";

    if(object.has_key(linkKey))
    {
        bourne::json value = object[linkKey];



        jsonToValue(&link, value, "std::string");


    }

    const char *iconKey = "icon";

    if(object.has_key(iconKey))
    {
        bourne::json value = object[iconKey];



        jsonToValue(&icon, value, "std::string");


    }

    const char *icon_textKey = "icon_text";

    if(object.has_key(icon_textKey))
    {
        bourne::json value = object[icon_textKey];



        jsonToValue(&icon_text, value, "std::string");


    }

    const char *help_textKey = "help_text";

    if(object.has_key(help_textKey))
    {
        bourne::json value = object[help_textKey];



        jsonToValue(&help_text, value, "std::string");


    }


}

bourne::json
ServerClientLink::toJson()
{
    bourne::json object = bourne::json::object();





    object["label"] = getLabel();






    object["link"] = getLink();






    object["icon"] = getIcon();






    object["icon_text"] = getIconText();






    object["help_text"] = getHelpText();



    return object;

}

std::string
ServerClientLink::getLabel()
{
	return label;
}

void
ServerClientLink::setLabel(std::string label)
{
	this->label = label;
}

std::string
ServerClientLink::getLink()
{
	return link;
}

void
ServerClientLink::setLink(std::string link)
{
	this->link = link;
}

std::string
ServerClientLink::getIcon()
{
	return icon;
}

void
ServerClientLink::setIcon(std::string icon)
{
	this->icon = icon;
}

std::string
ServerClientLink::getIconText()
{
	return icon_text;
}

void
ServerClientLink::setIconText(std::string icon_text)
{
	this->icon_text = icon_text;
}

std::string
ServerClientLink::getHelpText()
{
	return help_text;
}

void
ServerClientLink::setHelpText(std::string help_text)
{
	this->help_text = help_text;
}



