

#include "VpsOrder.h"

using namespace Tiny;

VpsOrder::VpsOrder()
{
	vpsSliceSsdOvzCost = float(0);
	vpsSliceOvzCost = float(0);
	vpsSliceSsdVirtuozzoCost = float(0);
	vpsSliceVirtuozzoCost = float(0);
	vpsSliceHypervCost = float(0);
	vpsSliceVmwareCost = float(0);
	vpsSliceLxcCost = float(0);
	vpsSliceXenCost = float(0);
	vpsSliceKvmLCost = float(0);
	vpsSliceKvmStorageCost = float(0);
	vpsNyCost = float(0);
	vpsSliceKvmWCost = float(0);
	cpanelCost = float(0);
	daCost = float(0);
	ramSlice = std::string();
	hdSlice = std::string();
	hdStorageSlice = std::string();
	bwSlice = std::string();
	bwType = std::string();
	bwTotal = float(0);
	maxSlices = std::string();
	platformPackages = VpsOrder_platformPackages();
	platformNames = VpsOrder_platformNames();
	packageCosts = VpsOrder_packageCosts();
	locationStock = VpsOrder_locationStock();
	locationNames = VpsOrder_locationNames();
	osNames = VpsOrder_osNames();
	templates = VpsOrder_templates();
	serviceTypes = VpsOrder_serviceTypes();
	currency = std::string();
	currencySymbol = std::string();
}

VpsOrder::VpsOrder(std::string jsonString)
{
	this->fromJson(jsonString);
}

VpsOrder::~VpsOrder()
{

}

void
VpsOrder::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *vpsSliceSsdOvzCostKey = "vpsSliceSsdOvzCost";

    if(object.has_key(vpsSliceSsdOvzCostKey))
    {
        bourne::json value = object[vpsSliceSsdOvzCostKey];



        jsonToValue(&vpsSliceSsdOvzCost, value, "long");


    }

    const char *vpsSliceOvzCostKey = "vpsSliceOvzCost";

    if(object.has_key(vpsSliceOvzCostKey))
    {
        bourne::json value = object[vpsSliceOvzCostKey];



        jsonToValue(&vpsSliceOvzCost, value, "long");


    }

    const char *vpsSliceSsdVirtuozzoCostKey = "vpsSliceSsdVirtuozzoCost";

    if(object.has_key(vpsSliceSsdVirtuozzoCostKey))
    {
        bourne::json value = object[vpsSliceSsdVirtuozzoCostKey];



        jsonToValue(&vpsSliceSsdVirtuozzoCost, value, "long");


    }

    const char *vpsSliceVirtuozzoCostKey = "vpsSliceVirtuozzoCost";

    if(object.has_key(vpsSliceVirtuozzoCostKey))
    {
        bourne::json value = object[vpsSliceVirtuozzoCostKey];



        jsonToValue(&vpsSliceVirtuozzoCost, value, "long");


    }

    const char *vpsSliceHypervCostKey = "vpsSliceHypervCost";

    if(object.has_key(vpsSliceHypervCostKey))
    {
        bourne::json value = object[vpsSliceHypervCostKey];



        jsonToValue(&vpsSliceHypervCost, value, "long");


    }

    const char *vpsSliceVmwareCostKey = "vpsSliceVmwareCost";

    if(object.has_key(vpsSliceVmwareCostKey))
    {
        bourne::json value = object[vpsSliceVmwareCostKey];



        jsonToValue(&vpsSliceVmwareCost, value, "long");


    }

    const char *vpsSliceLxcCostKey = "vpsSliceLxcCost";

    if(object.has_key(vpsSliceLxcCostKey))
    {
        bourne::json value = object[vpsSliceLxcCostKey];



        jsonToValue(&vpsSliceLxcCost, value, "long");


    }

    const char *vpsSliceXenCostKey = "vpsSliceXenCost";

    if(object.has_key(vpsSliceXenCostKey))
    {
        bourne::json value = object[vpsSliceXenCostKey];



        jsonToValue(&vpsSliceXenCost, value, "long");


    }

    const char *vpsSliceKvmLCostKey = "vpsSliceKvmLCost";

    if(object.has_key(vpsSliceKvmLCostKey))
    {
        bourne::json value = object[vpsSliceKvmLCostKey];



        jsonToValue(&vpsSliceKvmLCost, value, "long");


    }

    const char *vpsSliceKvmStorageCostKey = "vpsSliceKvmStorageCost";

    if(object.has_key(vpsSliceKvmStorageCostKey))
    {
        bourne::json value = object[vpsSliceKvmStorageCostKey];



        jsonToValue(&vpsSliceKvmStorageCost, value, "long");


    }

    const char *vpsNyCostKey = "vpsNyCost";

    if(object.has_key(vpsNyCostKey))
    {
        bourne::json value = object[vpsNyCostKey];



        jsonToValue(&vpsNyCost, value, "long");


    }

    const char *vpsSliceKvmWCostKey = "vpsSliceKvmWCost";

    if(object.has_key(vpsSliceKvmWCostKey))
    {
        bourne::json value = object[vpsSliceKvmWCostKey];



        jsonToValue(&vpsSliceKvmWCost, value, "long");


    }

    const char *cpanelCostKey = "cpanelCost";

    if(object.has_key(cpanelCostKey))
    {
        bourne::json value = object[cpanelCostKey];



        jsonToValue(&cpanelCost, value, "long");


    }

    const char *daCostKey = "daCost";

    if(object.has_key(daCostKey))
    {
        bourne::json value = object[daCostKey];



        jsonToValue(&daCost, value, "long");


    }

    const char *ramSliceKey = "ramSlice";

    if(object.has_key(ramSliceKey))
    {
        bourne::json value = object[ramSliceKey];



        jsonToValue(&ramSlice, value, "std::string");


    }

    const char *hdSliceKey = "hdSlice";

    if(object.has_key(hdSliceKey))
    {
        bourne::json value = object[hdSliceKey];



        jsonToValue(&hdSlice, value, "std::string");


    }

    const char *hdStorageSliceKey = "hdStorageSlice";

    if(object.has_key(hdStorageSliceKey))
    {
        bourne::json value = object[hdStorageSliceKey];



        jsonToValue(&hdStorageSlice, value, "std::string");


    }

    const char *bwSliceKey = "bwSlice";

    if(object.has_key(bwSliceKey))
    {
        bourne::json value = object[bwSliceKey];



        jsonToValue(&bwSlice, value, "std::string");


    }

    const char *bwTypeKey = "bwType";

    if(object.has_key(bwTypeKey))
    {
        bourne::json value = object[bwTypeKey];



        jsonToValue(&bwType, value, "std::string");


    }

    const char *bwTotalKey = "bwTotal";

    if(object.has_key(bwTotalKey))
    {
        bourne::json value = object[bwTotalKey];



        jsonToValue(&bwTotal, value, "long");


    }

    const char *maxSlicesKey = "maxSlices";

    if(object.has_key(maxSlicesKey))
    {
        bourne::json value = object[maxSlicesKey];



        jsonToValue(&maxSlices, value, "std::string");


    }

    const char *platformPackagesKey = "platformPackages";

    if(object.has_key(platformPackagesKey))
    {
        bourne::json value = object[platformPackagesKey];




        VpsOrder_platformPackages* obj = &platformPackages;
		obj->fromJson(value.dump());

    }

    const char *platformNamesKey = "platformNames";

    if(object.has_key(platformNamesKey))
    {
        bourne::json value = object[platformNamesKey];




        VpsOrder_platformNames* obj = &platformNames;
		obj->fromJson(value.dump());

    }

    const char *packageCostsKey = "packageCosts";

    if(object.has_key(packageCostsKey))
    {
        bourne::json value = object[packageCostsKey];




        VpsOrder_packageCosts* obj = &packageCosts;
		obj->fromJson(value.dump());

    }

    const char *locationStockKey = "locationStock";

    if(object.has_key(locationStockKey))
    {
        bourne::json value = object[locationStockKey];




        VpsOrder_locationStock* obj = &locationStock;
		obj->fromJson(value.dump());

    }

    const char *locationNamesKey = "locationNames";

    if(object.has_key(locationNamesKey))
    {
        bourne::json value = object[locationNamesKey];




        VpsOrder_locationNames* obj = &locationNames;
		obj->fromJson(value.dump());

    }

    const char *osNamesKey = "osNames";

    if(object.has_key(osNamesKey))
    {
        bourne::json value = object[osNamesKey];




        VpsOrder_osNames* obj = &osNames;
		obj->fromJson(value.dump());

    }

    const char *templatesKey = "templates";

    if(object.has_key(templatesKey))
    {
        bourne::json value = object[templatesKey];




        VpsOrder_templates* obj = &templates;
		obj->fromJson(value.dump());

    }

    const char *serviceTypesKey = "serviceTypes";

    if(object.has_key(serviceTypesKey))
    {
        bourne::json value = object[serviceTypesKey];




        VpsOrder_serviceTypes* obj = &serviceTypes;
		obj->fromJson(value.dump());

    }

    const char *currencyKey = "currency";

    if(object.has_key(currencyKey))
    {
        bourne::json value = object[currencyKey];



        jsonToValue(&currency, value, "std::string");


    }

    const char *currencySymbolKey = "currencySymbol";

    if(object.has_key(currencySymbolKey))
    {
        bourne::json value = object[currencySymbolKey];



        jsonToValue(&currencySymbol, value, "std::string");


    }


}

bourne::json
VpsOrder::toJson()
{
    bourne::json object = bourne::json::object();





    object["vpsSliceSsdOvzCost"] = getVpsSliceSsdOvzCost();






    object["vpsSliceOvzCost"] = getVpsSliceOvzCost();






    object["vpsSliceSsdVirtuozzoCost"] = getVpsSliceSsdVirtuozzoCost();






    object["vpsSliceVirtuozzoCost"] = getVpsSliceVirtuozzoCost();






    object["vpsSliceHypervCost"] = getVpsSliceHypervCost();






    object["vpsSliceVmwareCost"] = getVpsSliceVmwareCost();






    object["vpsSliceLxcCost"] = getVpsSliceLxcCost();






    object["vpsSliceXenCost"] = getVpsSliceXenCost();






    object["vpsSliceKvmLCost"] = getVpsSliceKvmLCost();






    object["vpsSliceKvmStorageCost"] = getVpsSliceKvmStorageCost();






    object["vpsNyCost"] = getVpsNyCost();






    object["vpsSliceKvmWCost"] = getVpsSliceKvmWCost();






    object["cpanelCost"] = getCpanelCost();






    object["daCost"] = getDaCost();






    object["ramSlice"] = getRamSlice();






    object["hdSlice"] = getHdSlice();






    object["hdStorageSlice"] = getHdStorageSlice();






    object["bwSlice"] = getBwSlice();






    object["bwType"] = getBwType();






    object["bwTotal"] = getBwTotal();






    object["maxSlices"] = getMaxSlices();







	object["platformPackages"] = getPlatformPackages().toJson();






	object["platformNames"] = getPlatformNames().toJson();






	object["packageCosts"] = getPackageCosts().toJson();






	object["locationStock"] = getLocationStock().toJson();






	object["locationNames"] = getLocationNames().toJson();






	object["osNames"] = getOsNames().toJson();






	object["templates"] = getTemplates().toJson();






	object["serviceTypes"] = getServiceTypes().toJson();





    object["currency"] = getCurrency();






    object["currencySymbol"] = getCurrencySymbol();



    return object;

}

long
VpsOrder::getVpsSliceSsdOvzCost()
{
	return vpsSliceSsdOvzCost;
}

void
VpsOrder::setVpsSliceSsdOvzCost(long vpsSliceSsdOvzCost)
{
	this->vpsSliceSsdOvzCost = vpsSliceSsdOvzCost;
}

long
VpsOrder::getVpsSliceOvzCost()
{
	return vpsSliceOvzCost;
}

void
VpsOrder::setVpsSliceOvzCost(long vpsSliceOvzCost)
{
	this->vpsSliceOvzCost = vpsSliceOvzCost;
}

long
VpsOrder::getVpsSliceSsdVirtuozzoCost()
{
	return vpsSliceSsdVirtuozzoCost;
}

void
VpsOrder::setVpsSliceSsdVirtuozzoCost(long vpsSliceSsdVirtuozzoCost)
{
	this->vpsSliceSsdVirtuozzoCost = vpsSliceSsdVirtuozzoCost;
}

long
VpsOrder::getVpsSliceVirtuozzoCost()
{
	return vpsSliceVirtuozzoCost;
}

void
VpsOrder::setVpsSliceVirtuozzoCost(long vpsSliceVirtuozzoCost)
{
	this->vpsSliceVirtuozzoCost = vpsSliceVirtuozzoCost;
}

long
VpsOrder::getVpsSliceHypervCost()
{
	return vpsSliceHypervCost;
}

void
VpsOrder::setVpsSliceHypervCost(long vpsSliceHypervCost)
{
	this->vpsSliceHypervCost = vpsSliceHypervCost;
}

long
VpsOrder::getVpsSliceVmwareCost()
{
	return vpsSliceVmwareCost;
}

void
VpsOrder::setVpsSliceVmwareCost(long vpsSliceVmwareCost)
{
	this->vpsSliceVmwareCost = vpsSliceVmwareCost;
}

long
VpsOrder::getVpsSliceLxcCost()
{
	return vpsSliceLxcCost;
}

void
VpsOrder::setVpsSliceLxcCost(long vpsSliceLxcCost)
{
	this->vpsSliceLxcCost = vpsSliceLxcCost;
}

long
VpsOrder::getVpsSliceXenCost()
{
	return vpsSliceXenCost;
}

void
VpsOrder::setVpsSliceXenCost(long vpsSliceXenCost)
{
	this->vpsSliceXenCost = vpsSliceXenCost;
}

long
VpsOrder::getVpsSliceKvmLCost()
{
	return vpsSliceKvmLCost;
}

void
VpsOrder::setVpsSliceKvmLCost(long vpsSliceKvmLCost)
{
	this->vpsSliceKvmLCost = vpsSliceKvmLCost;
}

long
VpsOrder::getVpsSliceKvmStorageCost()
{
	return vpsSliceKvmStorageCost;
}

void
VpsOrder::setVpsSliceKvmStorageCost(long vpsSliceKvmStorageCost)
{
	this->vpsSliceKvmStorageCost = vpsSliceKvmStorageCost;
}

long
VpsOrder::getVpsNyCost()
{
	return vpsNyCost;
}

void
VpsOrder::setVpsNyCost(long vpsNyCost)
{
	this->vpsNyCost = vpsNyCost;
}

long
VpsOrder::getVpsSliceKvmWCost()
{
	return vpsSliceKvmWCost;
}

void
VpsOrder::setVpsSliceKvmWCost(long vpsSliceKvmWCost)
{
	this->vpsSliceKvmWCost = vpsSliceKvmWCost;
}

long
VpsOrder::getCpanelCost()
{
	return cpanelCost;
}

void
VpsOrder::setCpanelCost(long cpanelCost)
{
	this->cpanelCost = cpanelCost;
}

long
VpsOrder::getDaCost()
{
	return daCost;
}

void
VpsOrder::setDaCost(long daCost)
{
	this->daCost = daCost;
}

std::string
VpsOrder::getRamSlice()
{
	return ramSlice;
}

void
VpsOrder::setRamSlice(std::string ramSlice)
{
	this->ramSlice = ramSlice;
}

std::string
VpsOrder::getHdSlice()
{
	return hdSlice;
}

void
VpsOrder::setHdSlice(std::string hdSlice)
{
	this->hdSlice = hdSlice;
}

std::string
VpsOrder::getHdStorageSlice()
{
	return hdStorageSlice;
}

void
VpsOrder::setHdStorageSlice(std::string hdStorageSlice)
{
	this->hdStorageSlice = hdStorageSlice;
}

std::string
VpsOrder::getBwSlice()
{
	return bwSlice;
}

void
VpsOrder::setBwSlice(std::string bwSlice)
{
	this->bwSlice = bwSlice;
}

std::string
VpsOrder::getBwType()
{
	return bwType;
}

void
VpsOrder::setBwType(std::string bwType)
{
	this->bwType = bwType;
}

long
VpsOrder::getBwTotal()
{
	return bwTotal;
}

void
VpsOrder::setBwTotal(long bwTotal)
{
	this->bwTotal = bwTotal;
}

std::string
VpsOrder::getMaxSlices()
{
	return maxSlices;
}

void
VpsOrder::setMaxSlices(std::string maxSlices)
{
	this->maxSlices = maxSlices;
}

VpsOrder_platformPackages
VpsOrder::getPlatformPackages()
{
	return platformPackages;
}

void
VpsOrder::setPlatformPackages(VpsOrder_platformPackages platformPackages)
{
	this->platformPackages = platformPackages;
}

VpsOrder_platformNames
VpsOrder::getPlatformNames()
{
	return platformNames;
}

void
VpsOrder::setPlatformNames(VpsOrder_platformNames platformNames)
{
	this->platformNames = platformNames;
}

VpsOrder_packageCosts
VpsOrder::getPackageCosts()
{
	return packageCosts;
}

void
VpsOrder::setPackageCosts(VpsOrder_packageCosts packageCosts)
{
	this->packageCosts = packageCosts;
}

VpsOrder_locationStock
VpsOrder::getLocationStock()
{
	return locationStock;
}

void
VpsOrder::setLocationStock(VpsOrder_locationStock locationStock)
{
	this->locationStock = locationStock;
}

VpsOrder_locationNames
VpsOrder::getLocationNames()
{
	return locationNames;
}

void
VpsOrder::setLocationNames(VpsOrder_locationNames locationNames)
{
	this->locationNames = locationNames;
}

VpsOrder_osNames
VpsOrder::getOsNames()
{
	return osNames;
}

void
VpsOrder::setOsNames(VpsOrder_osNames osNames)
{
	this->osNames = osNames;
}

VpsOrder_templates
VpsOrder::getTemplates()
{
	return templates;
}

void
VpsOrder::setTemplates(VpsOrder_templates templates)
{
	this->templates = templates;
}

VpsOrder_serviceTypes
VpsOrder::getServiceTypes()
{
	return serviceTypes;
}

void
VpsOrder::setServiceTypes(VpsOrder_serviceTypes serviceTypes)
{
	this->serviceTypes = serviceTypes;
}

std::string
VpsOrder::getCurrency()
{
	return currency;
}

void
VpsOrder::setCurrency(std::string currency)
{
	this->currency = currency;
}

std::string
VpsOrder::getCurrencySymbol()
{
	return currencySymbol;
}

void
VpsOrder::setCurrencySymbol(std::string currencySymbol)
{
	this->currencySymbol = currencySymbol;
}



