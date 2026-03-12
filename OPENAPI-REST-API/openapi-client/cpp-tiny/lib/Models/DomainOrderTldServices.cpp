

#include "DomainOrderTldServices.h"

using namespace Tiny;

DomainOrderTldServices::DomainOrderTldServices()
{
	asia = int(0);
	be = int(0);
	biz = int(0);
	ca = int(0);
}

DomainOrderTldServices::DomainOrderTldServices(std::string jsonString)
{
	this->fromJson(jsonString);
}

DomainOrderTldServices::~DomainOrderTldServices()
{

}

void
DomainOrderTldServices::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *asiaKey = ".asia";

    if(object.has_key(asiaKey))
    {
        bourne::json value = object[asiaKey];



        jsonToValue(&asia, value, "int");


    }

    const char *beKey = ".be";

    if(object.has_key(beKey))
    {
        bourne::json value = object[beKey];



        jsonToValue(&be, value, "int");


    }

    const char *bizKey = ".biz";

    if(object.has_key(bizKey))
    {
        bourne::json value = object[bizKey];



        jsonToValue(&biz, value, "int");


    }

    const char *caKey = ".ca";

    if(object.has_key(caKey))
    {
        bourne::json value = object[caKey];



        jsonToValue(&ca, value, "int");


    }


}

bourne::json
DomainOrderTldServices::toJson()
{
    bourne::json object = bourne::json::object();





    object["asia"] = getAsia();






    object["be"] = getBe();






    object["biz"] = getBiz();






    object["ca"] = getCa();



    return object;

}

int
DomainOrderTldServices::getAsia()
{
	return asia;
}

void
DomainOrderTldServices::setAsia(int asia)
{
	this->asia = asia;
}

int
DomainOrderTldServices::getBe()
{
	return be;
}

void
DomainOrderTldServices::setBe(int be)
{
	this->be = be;
}

int
DomainOrderTldServices::getBiz()
{
	return biz;
}

void
DomainOrderTldServices::setBiz(int biz)
{
	this->biz = biz;
}

int
DomainOrderTldServices::getCa()
{
	return ca;
}

void
DomainOrderTldServices::setCa(int ca)
{
	this->ca = ca;
}



