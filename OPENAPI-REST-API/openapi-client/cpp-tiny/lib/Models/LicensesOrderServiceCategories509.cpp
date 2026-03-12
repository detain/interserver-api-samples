

#include "LicensesOrderServiceCategories509.h"

using namespace Tiny;

LicensesOrderServiceCategories509::LicensesOrderServiceCategories509()
{
	category_id = std::string();
	category_name = std::string();
	category_tag = std::string();
	category_module = std::string();
}

LicensesOrderServiceCategories509::LicensesOrderServiceCategories509(std::string jsonString)
{
	this->fromJson(jsonString);
}

LicensesOrderServiceCategories509::~LicensesOrderServiceCategories509()
{

}

void
LicensesOrderServiceCategories509::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *category_idKey = "category_id";

    if(object.has_key(category_idKey))
    {
        bourne::json value = object[category_idKey];



        jsonToValue(&category_id, value, "std::string");


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
LicensesOrderServiceCategories509::toJson()
{
    bourne::json object = bourne::json::object();





    object["category_id"] = getCategoryId();






    object["category_name"] = getCategoryName();






    object["category_tag"] = getCategoryTag();






    object["category_module"] = getCategoryModule();



    return object;

}

std::string
LicensesOrderServiceCategories509::getCategoryId()
{
	return category_id;
}

void
LicensesOrderServiceCategories509::setCategoryId(std::string category_id)
{
	this->category_id = category_id;
}

std::string
LicensesOrderServiceCategories509::getCategoryName()
{
	return category_name;
}

void
LicensesOrderServiceCategories509::setCategoryName(std::string category_name)
{
	this->category_name = category_name;
}

std::string
LicensesOrderServiceCategories509::getCategoryTag()
{
	return category_tag;
}

void
LicensesOrderServiceCategories509::setCategoryTag(std::string category_tag)
{
	this->category_tag = category_tag;
}

std::string
LicensesOrderServiceCategories509::getCategoryModule()
{
	return category_module;
}

void
LicensesOrderServiceCategories509::setCategoryModule(std::string category_module)
{
	this->category_module = category_module;
}



