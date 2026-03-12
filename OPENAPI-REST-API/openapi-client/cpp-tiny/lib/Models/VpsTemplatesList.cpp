

#include "VpsTemplatesList.h"

using namespace Tiny;

VpsTemplatesList::VpsTemplatesList()
{
	templates = std::list<VpsTemplateRow>();
}

VpsTemplatesList::VpsTemplatesList(std::string jsonString)
{
	this->fromJson(jsonString);
}

VpsTemplatesList::~VpsTemplatesList()
{

}

void
VpsTemplatesList::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *templatesKey = "templates";

    if(object.has_key(templatesKey))
    {
        bourne::json value = object[templatesKey];


        std::list<VpsTemplateRow> templates_list;
        VpsTemplateRow element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            templates_list.push_back(element);
        }
        templates = templates_list;


    }


}

bourne::json
VpsTemplatesList::toJson()
{
    bourne::json object = bourne::json::object();




    std::list<VpsTemplateRow> templates_list = getTemplates();
    bourne::json templates_arr = bourne::json::array();

    for(auto& var : templates_list)
    {
        VpsTemplateRow obj = var;
        templates_arr.append(obj.toJson());
    }
    object["templates"] = templates_arr;




    return object;

}

std::list<VpsTemplateRow>
VpsTemplatesList::getTemplates()
{
	return templates;
}

void
VpsTemplatesList::setTemplates(std::list<VpsTemplateRow> templates)
{
	this->templates = templates;
}



