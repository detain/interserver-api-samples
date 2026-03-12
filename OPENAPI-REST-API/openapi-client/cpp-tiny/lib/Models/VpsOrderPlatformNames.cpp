

#include "VpsOrder_platformNames.h"

using namespace Tiny;

VpsOrder_platformNames::VpsOrder_platformNames()
{
	kvm = std::string();
	kvmstorage = std::string();
	hyperv = std::string();
}

VpsOrder_platformNames::VpsOrder_platformNames(std::string jsonString)
{
	this->fromJson(jsonString);
}

VpsOrder_platformNames::~VpsOrder_platformNames()
{

}

void
VpsOrder_platformNames::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *kvmKey = "kvm";

    if(object.has_key(kvmKey))
    {
        bourne::json value = object[kvmKey];



        jsonToValue(&kvm, value, "std::string");


    }

    const char *kvmstorageKey = "kvmstorage";

    if(object.has_key(kvmstorageKey))
    {
        bourne::json value = object[kvmstorageKey];



        jsonToValue(&kvmstorage, value, "std::string");


    }

    const char *hypervKey = "hyperv";

    if(object.has_key(hypervKey))
    {
        bourne::json value = object[hypervKey];



        jsonToValue(&hyperv, value, "std::string");


    }


}

bourne::json
VpsOrder_platformNames::toJson()
{
    bourne::json object = bourne::json::object();





    object["kvm"] = getKvm();






    object["kvmstorage"] = getKvmstorage();






    object["hyperv"] = getHyperv();



    return object;

}

std::string
VpsOrder_platformNames::getKvm()
{
	return kvm;
}

void
VpsOrder_platformNames::setKvm(std::string kvm)
{
	this->kvm = kvm;
}

std::string
VpsOrder_platformNames::getKvmstorage()
{
	return kvmstorage;
}

void
VpsOrder_platformNames::setKvmstorage(std::string kvmstorage)
{
	this->kvmstorage = kvmstorage;
}

std::string
VpsOrder_platformNames::getHyperv()
{
	return hyperv;
}

void
VpsOrder_platformNames::setHyperv(std::string hyperv)
{
	this->hyperv = hyperv;
}



