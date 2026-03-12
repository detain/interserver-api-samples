

#include "ServiceCategory.h"

using namespace Tiny;

ServiceCategory::ServiceCategory()
{
	category_id = int(0);
	category_name = std::string();
	category_tag = std::string();
	category_module = std::string();
}

ServiceCategory::ServiceCategory(std::string jsonString)
{
	this->fromJson(jsonString);
}

ServiceCategory::~ServiceCategory()
{

}

void
ServiceCategory::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *category_idKey = "category_id";

    if(object.has_key(category_idKey))
    {
        bourne::json value = object[category_idKey];



        jsonToValue(&category_id, value, "int");


    }

    const char *category_nameKey = "category_name";

    if(object.has_key(category_nameKey))
    {
        bourne::json value = object[category_nameKey];



        jsonToValue(&category_name, value, "std::string");


    }

    const char *category_tagKey = "category_tag";

    if(object.has_key(category_tagKey))
    {
        bourne::json value = object[category_tagKey];



        jsonToValue(&category_tag, value, "std::string");


    }

    const char *category_moduleKey = "category_module";

    if(object.has_key(category_moduleKey))
    {
        bourne::json value = object[category_moduleKey];



        jsonToValue(&category_module, value, "std::string");


    }


}

bourne::json
ServiceCategory::toJson()
{
    bourne::json object = bourne::json::object();





    object["category_id"] = getCategoryId();






    object["category_name"] = getCategoryName();






    object["category_tag"] = getCategoryTag();






    object["category_module"] = getCategoryModule();



    return object;

}

int
ServiceCategory::getCategoryId()
{
	return category_id;
}

void
ServiceCategory::setCategoryId(int category_id)
{
	this->category_id = category_id;
}

std::string
ServiceCategory::getCategoryName()
{
	return category_name;
}

void
ServiceCategory::setCategoryName(std::string category_name)
{
	this->category_name = category_name;
}

std::string
ServiceCategory::getCategoryTag()
{
	return category_tag;
}

void
ServiceCategory::setCategoryTag(std::string category_tag)
{
	this->category_tag = category_tag;
}

std::string
ServiceCategory::getCategoryModule()
{
	return category_module;
}

void
ServiceCategory::setCategoryModule(std::string category_module)
{
	this->category_module = category_module;
}



