

#include "QuickserverOrder.h"

using namespace Tiny;

QuickserverOrder::QuickserverOrder()
{
	qs_id = std::string();
	server_details = QuickserverOrder_server_details();
	templates = QuickserverOrder_templates();
	version = QuickserverOrder_version();
	distro_sel = QuickserverOrder_distro_sel();
}

QuickserverOrder::QuickserverOrder(std::string jsonString)
{
	this->fromJson(jsonString);
}

QuickserverOrder::~QuickserverOrder()
{

}

void
QuickserverOrder::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *qs_idKey = "qs_id";

    if(object.has_key(qs_idKey))
    {
        bourne::json value = object[qs_idKey];



        jsonToValue(&qs_id, value, "std::string");


    }

    const char *server_detailsKey = "server_details";

    if(object.has_key(server_detailsKey))
    {
        bourne::json value = object[server_detailsKey];




        QuickserverOrder_server_details* obj = &server_details;
		obj->fromJson(value.dump());

    }

    const char *templatesKey = "templates";

    if(object.has_key(templatesKey))
    {
        bourne::json value = object[templatesKey];




        QuickserverOrder_templates* obj = &templates;
		obj->fromJson(value.dump());

    }

    const char *versionKey = "version";

    if(object.has_key(versionKey))
    {
        bourne::json value = object[versionKey];




        QuickserverOrder_version* obj = &version;
		obj->fromJson(value.dump());

    }

    const char *distro_selKey = "distro_sel";

    if(object.has_key(distro_selKey))
    {
        bourne::json value = object[distro_selKey];




        QuickserverOrder_distro_sel* obj = &distro_sel;
		obj->fromJson(value.dump());

    }


}

bourne::json
QuickserverOrder::toJson()
{
    bourne::json object = bourne::json::object();





    object["qs_id"] = getQsId();







	object["server_details"] = getServerDetails().toJson();






	object["templates"] = getTemplates().toJson();






	object["version"] = getVersion().toJson();






	object["distro_sel"] = getDistroSel().toJson();


    return object;

}

std::string
QuickserverOrder::getQsId()
{
	return qs_id;
}

void
QuickserverOrder::setQsId(std::string qs_id)
{
	this->qs_id = qs_id;
}

QuickserverOrder_server_details
QuickserverOrder::getServerDetails()
{
	return server_details;
}

void
QuickserverOrder::setServerDetails(QuickserverOrder_server_details server_details)
{
	this->server_details = server_details;
}

QuickserverOrder_templates
QuickserverOrder::getTemplates()
{
	return templates;
}

void
QuickserverOrder::setTemplates(QuickserverOrder_templates templates)
{
	this->templates = templates;
}

QuickserverOrder_version
QuickserverOrder::getVersion()
{
	return version;
}

void
QuickserverOrder::setVersion(QuickserverOrder_version version)
{
	this->version = version;
}

QuickserverOrder_distro_sel
QuickserverOrder::getDistroSel()
{
	return distro_sel;
}

void
QuickserverOrder::setDistroSel(QuickserverOrder_distro_sel distro_sel)
{
	this->distro_sel = distro_sel;
}



