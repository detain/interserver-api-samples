

#include "VpsOrder_platformPackages.h"

using namespace Tiny;

VpsOrder_platformPackages::VpsOrder_platformPackages()
{
	kvm = float(0);
	kvmstorage = float(0);
	hyperv = float(0);
}

VpsOrder_platformPackages::VpsOrder_platformPackages(std::string jsonString)
{
	this->fromJson(jsonString);
}

VpsOrder_platformPackages::~VpsOrder_platformPackages()
{

}

void
VpsOrder_platformPackages::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *kvmKey = "kvm";

    if(object.has_key(kvmKey))
    {
        bourne::json value = object[kvmKey];



        jsonToValue(&kvm, value, "long");


    }

    const char *kvmstorageKey = "kvmstorage";

    if(object.has_key(kvmstorageKey))
    {
        bourne::json value = object[kvmstorageKey];



        jsonToValue(&kvmstorage, value, "long");


    }

    const char *hypervKey = "hyperv";

    if(object.has_key(hypervKey))
    {
        bourne::json value = object[hypervKey];



        jsonToValue(&hyperv, value, "long");


    }


}

bourne::json
VpsOrder_platformPackages::toJson()
{
    bourne::json object = bourne::json::object();





    object["kvm"] = getKvm();






    object["kvmstorage"] = getKvmstorage();






    object["hyperv"] = getHyperv();



    return object;

}

long
VpsOrder_platformPackages::getKvm()
{
	return kvm;
}

void
VpsOrder_platformPackages::setKvm(long kvm)
{
	this->kvm = kvm;
}

long
VpsOrder_platformPackages::getKvmstorage()
{
	return kvmstorage;
}

void
VpsOrder_platformPackages::setKvmstorage(long kvmstorage)
{
	this->kvmstorage = kvmstorage;
}

long
VpsOrder_platformPackages::getHyperv()
{
	return hyperv;
}

void
VpsOrder_platformPackages::setHyperv(long hyperv)
{
	this->hyperv = hyperv;
}



