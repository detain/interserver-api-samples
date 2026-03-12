#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "VpsOrder.h"

using namespace std;
using namespace Tizen::ArtikCloud;

VpsOrder::VpsOrder()
{
	//__init();
}

VpsOrder::~VpsOrder()
{
	//__cleanup();
}

void
VpsOrder::__init()
{
	//vpsSliceSsdOvzCost = double(0);
	//vpsSliceOvzCost = double(0);
	//vpsSliceSsdVirtuozzoCost = double(0);
	//vpsSliceVirtuozzoCost = double(0);
	//vpsSliceHypervCost = double(0);
	//vpsSliceVmwareCost = double(0);
	//vpsSliceLxcCost = double(0);
	//vpsSliceXenCost = double(0);
	//vpsSliceKvmLCost = double(0);
	//vpsSliceKvmStorageCost = double(0);
	//vpsNyCost = double(0);
	//vpsSliceKvmWCost = double(0);
	//cpanelCost = double(0);
	//daCost = double(0);
	//ramSlice = std::string();
	//hdSlice = std::string();
	//hdStorageSlice = std::string();
	//bwSlice = std::string();
	//bwType = std::string();
	//bwTotal = double(0);
	//maxSlices = std::string();
	//platformPackages = new VpsOrder_platformPackages();
	//platformNames = new VpsOrder_platformNames();
	//packageCosts = new VpsOrder_packageCosts();
	//locationStock = new VpsOrder_locationStock();
	//locationNames = new VpsOrder_locationNames();
	//osNames = new VpsOrder_osNames();
	//templates = new VpsOrder_templates();
	//serviceTypes = new VpsOrder_serviceTypes();
	//currency = std::string();
	//currencySymbol = std::string();
}

void
VpsOrder::__cleanup()
{
	//if(vpsSliceSsdOvzCost != NULL) {
	//
	//delete vpsSliceSsdOvzCost;
	//vpsSliceSsdOvzCost = NULL;
	//}
	//if(vpsSliceOvzCost != NULL) {
	//
	//delete vpsSliceOvzCost;
	//vpsSliceOvzCost = NULL;
	//}
	//if(vpsSliceSsdVirtuozzoCost != NULL) {
	//
	//delete vpsSliceSsdVirtuozzoCost;
	//vpsSliceSsdVirtuozzoCost = NULL;
	//}
	//if(vpsSliceVirtuozzoCost != NULL) {
	//
	//delete vpsSliceVirtuozzoCost;
	//vpsSliceVirtuozzoCost = NULL;
	//}
	//if(vpsSliceHypervCost != NULL) {
	//
	//delete vpsSliceHypervCost;
	//vpsSliceHypervCost = NULL;
	//}
	//if(vpsSliceVmwareCost != NULL) {
	//
	//delete vpsSliceVmwareCost;
	//vpsSliceVmwareCost = NULL;
	//}
	//if(vpsSliceLxcCost != NULL) {
	//
	//delete vpsSliceLxcCost;
	//vpsSliceLxcCost = NULL;
	//}
	//if(vpsSliceXenCost != NULL) {
	//
	//delete vpsSliceXenCost;
	//vpsSliceXenCost = NULL;
	//}
	//if(vpsSliceKvmLCost != NULL) {
	//
	//delete vpsSliceKvmLCost;
	//vpsSliceKvmLCost = NULL;
	//}
	//if(vpsSliceKvmStorageCost != NULL) {
	//
	//delete vpsSliceKvmStorageCost;
	//vpsSliceKvmStorageCost = NULL;
	//}
	//if(vpsNyCost != NULL) {
	//
	//delete vpsNyCost;
	//vpsNyCost = NULL;
	//}
	//if(vpsSliceKvmWCost != NULL) {
	//
	//delete vpsSliceKvmWCost;
	//vpsSliceKvmWCost = NULL;
	//}
	//if(cpanelCost != NULL) {
	//
	//delete cpanelCost;
	//cpanelCost = NULL;
	//}
	//if(daCost != NULL) {
	//
	//delete daCost;
	//daCost = NULL;
	//}
	//if(ramSlice != NULL) {
	//
	//delete ramSlice;
	//ramSlice = NULL;
	//}
	//if(hdSlice != NULL) {
	//
	//delete hdSlice;
	//hdSlice = NULL;
	//}
	//if(hdStorageSlice != NULL) {
	//
	//delete hdStorageSlice;
	//hdStorageSlice = NULL;
	//}
	//if(bwSlice != NULL) {
	//
	//delete bwSlice;
	//bwSlice = NULL;
	//}
	//if(bwType != NULL) {
	//
	//delete bwType;
	//bwType = NULL;
	//}
	//if(bwTotal != NULL) {
	//
	//delete bwTotal;
	//bwTotal = NULL;
	//}
	//if(maxSlices != NULL) {
	//
	//delete maxSlices;
	//maxSlices = NULL;
	//}
	//if(platformPackages != NULL) {
	//
	//delete platformPackages;
	//platformPackages = NULL;
	//}
	//if(platformNames != NULL) {
	//
	//delete platformNames;
	//platformNames = NULL;
	//}
	//if(packageCosts != NULL) {
	//
	//delete packageCosts;
	//packageCosts = NULL;
	//}
	//if(locationStock != NULL) {
	//
	//delete locationStock;
	//locationStock = NULL;
	//}
	//if(locationNames != NULL) {
	//
	//delete locationNames;
	//locationNames = NULL;
	//}
	//if(osNames != NULL) {
	//
	//delete osNames;
	//osNames = NULL;
	//}
	//if(templates != NULL) {
	//
	//delete templates;
	//templates = NULL;
	//}
	//if(serviceTypes != NULL) {
	//
	//delete serviceTypes;
	//serviceTypes = NULL;
	//}
	//if(currency != NULL) {
	//
	//delete currency;
	//currency = NULL;
	//}
	//if(currencySymbol != NULL) {
	//
	//delete currencySymbol;
	//currencySymbol = NULL;
	//}
	//
}

void
VpsOrder::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *vpsSliceSsdOvzCostKey = "vpsSliceSsdOvzCost";
	node = json_object_get_member(pJsonObject, vpsSliceSsdOvzCostKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&vpsSliceSsdOvzCost, node, "long long", "");
		} else {
			
			long long* obj = static_cast<long long*> (&vpsSliceSsdOvzCost);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *vpsSliceOvzCostKey = "vpsSliceOvzCost";
	node = json_object_get_member(pJsonObject, vpsSliceOvzCostKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&vpsSliceOvzCost, node, "long long", "");
		} else {
			
			long long* obj = static_cast<long long*> (&vpsSliceOvzCost);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *vpsSliceSsdVirtuozzoCostKey = "vpsSliceSsdVirtuozzoCost";
	node = json_object_get_member(pJsonObject, vpsSliceSsdVirtuozzoCostKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&vpsSliceSsdVirtuozzoCost, node, "long long", "");
		} else {
			
			long long* obj = static_cast<long long*> (&vpsSliceSsdVirtuozzoCost);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *vpsSliceVirtuozzoCostKey = "vpsSliceVirtuozzoCost";
	node = json_object_get_member(pJsonObject, vpsSliceVirtuozzoCostKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&vpsSliceVirtuozzoCost, node, "long long", "");
		} else {
			
			long long* obj = static_cast<long long*> (&vpsSliceVirtuozzoCost);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *vpsSliceHypervCostKey = "vpsSliceHypervCost";
	node = json_object_get_member(pJsonObject, vpsSliceHypervCostKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&vpsSliceHypervCost, node, "long long", "");
		} else {
			
			long long* obj = static_cast<long long*> (&vpsSliceHypervCost);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *vpsSliceVmwareCostKey = "vpsSliceVmwareCost";
	node = json_object_get_member(pJsonObject, vpsSliceVmwareCostKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&vpsSliceVmwareCost, node, "long long", "");
		} else {
			
			long long* obj = static_cast<long long*> (&vpsSliceVmwareCost);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *vpsSliceLxcCostKey = "vpsSliceLxcCost";
	node = json_object_get_member(pJsonObject, vpsSliceLxcCostKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&vpsSliceLxcCost, node, "long long", "");
		} else {
			
			long long* obj = static_cast<long long*> (&vpsSliceLxcCost);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *vpsSliceXenCostKey = "vpsSliceXenCost";
	node = json_object_get_member(pJsonObject, vpsSliceXenCostKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&vpsSliceXenCost, node, "long long", "");
		} else {
			
			long long* obj = static_cast<long long*> (&vpsSliceXenCost);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *vpsSliceKvmLCostKey = "vpsSliceKvmLCost";
	node = json_object_get_member(pJsonObject, vpsSliceKvmLCostKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&vpsSliceKvmLCost, node, "long long", "");
		} else {
			
			long long* obj = static_cast<long long*> (&vpsSliceKvmLCost);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *vpsSliceKvmStorageCostKey = "vpsSliceKvmStorageCost";
	node = json_object_get_member(pJsonObject, vpsSliceKvmStorageCostKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&vpsSliceKvmStorageCost, node, "long long", "");
		} else {
			
			long long* obj = static_cast<long long*> (&vpsSliceKvmStorageCost);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *vpsNyCostKey = "vpsNyCost";
	node = json_object_get_member(pJsonObject, vpsNyCostKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&vpsNyCost, node, "long long", "");
		} else {
			
			long long* obj = static_cast<long long*> (&vpsNyCost);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *vpsSliceKvmWCostKey = "vpsSliceKvmWCost";
	node = json_object_get_member(pJsonObject, vpsSliceKvmWCostKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&vpsSliceKvmWCost, node, "long long", "");
		} else {
			
			long long* obj = static_cast<long long*> (&vpsSliceKvmWCost);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *cpanelCostKey = "cpanelCost";
	node = json_object_get_member(pJsonObject, cpanelCostKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&cpanelCost, node, "long long", "");
		} else {
			
			long long* obj = static_cast<long long*> (&cpanelCost);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *daCostKey = "daCost";
	node = json_object_get_member(pJsonObject, daCostKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&daCost, node, "long long", "");
		} else {
			
			long long* obj = static_cast<long long*> (&daCost);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *ramSliceKey = "ramSlice";
	node = json_object_get_member(pJsonObject, ramSliceKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&ramSlice, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *hdSliceKey = "hdSlice";
	node = json_object_get_member(pJsonObject, hdSliceKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&hdSlice, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *hdStorageSliceKey = "hdStorageSlice";
	node = json_object_get_member(pJsonObject, hdStorageSliceKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&hdStorageSlice, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *bwSliceKey = "bwSlice";
	node = json_object_get_member(pJsonObject, bwSliceKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&bwSlice, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *bwTypeKey = "bwType";
	node = json_object_get_member(pJsonObject, bwTypeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&bwType, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *bwTotalKey = "bwTotal";
	node = json_object_get_member(pJsonObject, bwTotalKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&bwTotal, node, "long long", "");
		} else {
			
			long long* obj = static_cast<long long*> (&bwTotal);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *maxSlicesKey = "maxSlices";
	node = json_object_get_member(pJsonObject, maxSlicesKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&maxSlices, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *platformPackagesKey = "platformPackages";
	node = json_object_get_member(pJsonObject, platformPackagesKey);
	if (node !=NULL) {
	

		if (isprimitive("VpsOrder_platformPackages")) {
			jsonToValue(&platformPackages, node, "VpsOrder_platformPackages", "VpsOrder_platformPackages");
		} else {
			
			VpsOrder_platformPackages* obj = static_cast<VpsOrder_platformPackages*> (&platformPackages);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *platformNamesKey = "platformNames";
	node = json_object_get_member(pJsonObject, platformNamesKey);
	if (node !=NULL) {
	

		if (isprimitive("VpsOrder_platformNames")) {
			jsonToValue(&platformNames, node, "VpsOrder_platformNames", "VpsOrder_platformNames");
		} else {
			
			VpsOrder_platformNames* obj = static_cast<VpsOrder_platformNames*> (&platformNames);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *packageCostsKey = "packageCosts";
	node = json_object_get_member(pJsonObject, packageCostsKey);
	if (node !=NULL) {
	

		if (isprimitive("VpsOrder_packageCosts")) {
			jsonToValue(&packageCosts, node, "VpsOrder_packageCosts", "VpsOrder_packageCosts");
		} else {
			
			VpsOrder_packageCosts* obj = static_cast<VpsOrder_packageCosts*> (&packageCosts);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *locationStockKey = "locationStock";
	node = json_object_get_member(pJsonObject, locationStockKey);
	if (node !=NULL) {
	

		if (isprimitive("VpsOrder_locationStock")) {
			jsonToValue(&locationStock, node, "VpsOrder_locationStock", "VpsOrder_locationStock");
		} else {
			
			VpsOrder_locationStock* obj = static_cast<VpsOrder_locationStock*> (&locationStock);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *locationNamesKey = "locationNames";
	node = json_object_get_member(pJsonObject, locationNamesKey);
	if (node !=NULL) {
	

		if (isprimitive("VpsOrder_locationNames")) {
			jsonToValue(&locationNames, node, "VpsOrder_locationNames", "VpsOrder_locationNames");
		} else {
			
			VpsOrder_locationNames* obj = static_cast<VpsOrder_locationNames*> (&locationNames);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *osNamesKey = "osNames";
	node = json_object_get_member(pJsonObject, osNamesKey);
	if (node !=NULL) {
	

		if (isprimitive("VpsOrder_osNames")) {
			jsonToValue(&osNames, node, "VpsOrder_osNames", "VpsOrder_osNames");
		} else {
			
			VpsOrder_osNames* obj = static_cast<VpsOrder_osNames*> (&osNames);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *templatesKey = "templates";
	node = json_object_get_member(pJsonObject, templatesKey);
	if (node !=NULL) {
	

		if (isprimitive("VpsOrder_templates")) {
			jsonToValue(&templates, node, "VpsOrder_templates", "VpsOrder_templates");
		} else {
			
			VpsOrder_templates* obj = static_cast<VpsOrder_templates*> (&templates);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *serviceTypesKey = "serviceTypes";
	node = json_object_get_member(pJsonObject, serviceTypesKey);
	if (node !=NULL) {
	

		if (isprimitive("VpsOrder_serviceTypes")) {
			jsonToValue(&serviceTypes, node, "VpsOrder_serviceTypes", "VpsOrder_serviceTypes");
		} else {
			
			VpsOrder_serviceTypes* obj = static_cast<VpsOrder_serviceTypes*> (&serviceTypes);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *currencyKey = "currency";
	node = json_object_get_member(pJsonObject, currencyKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&currency, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *currencySymbolKey = "currencySymbol";
	node = json_object_get_member(pJsonObject, currencySymbolKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&currencySymbol, node, "std::string", "");
		} else {
			
		}
	}
}

VpsOrder::VpsOrder(char* json)
{
	this->fromJson(json);
}

char*
VpsOrder::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("long long")) {
		long long obj = getVpsSliceSsdOvzCost();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
		long long obj = static_cast<long long> (getVpsSliceSsdOvzCost());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *vpsSliceSsdOvzCostKey = "vpsSliceSsdOvzCost";
	json_object_set_member(pJsonObject, vpsSliceSsdOvzCostKey, node);
	if (isprimitive("long long")) {
		long long obj = getVpsSliceOvzCost();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
		long long obj = static_cast<long long> (getVpsSliceOvzCost());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *vpsSliceOvzCostKey = "vpsSliceOvzCost";
	json_object_set_member(pJsonObject, vpsSliceOvzCostKey, node);
	if (isprimitive("long long")) {
		long long obj = getVpsSliceSsdVirtuozzoCost();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
		long long obj = static_cast<long long> (getVpsSliceSsdVirtuozzoCost());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *vpsSliceSsdVirtuozzoCostKey = "vpsSliceSsdVirtuozzoCost";
	json_object_set_member(pJsonObject, vpsSliceSsdVirtuozzoCostKey, node);
	if (isprimitive("long long")) {
		long long obj = getVpsSliceVirtuozzoCost();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
		long long obj = static_cast<long long> (getVpsSliceVirtuozzoCost());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *vpsSliceVirtuozzoCostKey = "vpsSliceVirtuozzoCost";
	json_object_set_member(pJsonObject, vpsSliceVirtuozzoCostKey, node);
	if (isprimitive("long long")) {
		long long obj = getVpsSliceHypervCost();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
		long long obj = static_cast<long long> (getVpsSliceHypervCost());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *vpsSliceHypervCostKey = "vpsSliceHypervCost";
	json_object_set_member(pJsonObject, vpsSliceHypervCostKey, node);
	if (isprimitive("long long")) {
		long long obj = getVpsSliceVmwareCost();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
		long long obj = static_cast<long long> (getVpsSliceVmwareCost());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *vpsSliceVmwareCostKey = "vpsSliceVmwareCost";
	json_object_set_member(pJsonObject, vpsSliceVmwareCostKey, node);
	if (isprimitive("long long")) {
		long long obj = getVpsSliceLxcCost();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
		long long obj = static_cast<long long> (getVpsSliceLxcCost());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *vpsSliceLxcCostKey = "vpsSliceLxcCost";
	json_object_set_member(pJsonObject, vpsSliceLxcCostKey, node);
	if (isprimitive("long long")) {
		long long obj = getVpsSliceXenCost();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
		long long obj = static_cast<long long> (getVpsSliceXenCost());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *vpsSliceXenCostKey = "vpsSliceXenCost";
	json_object_set_member(pJsonObject, vpsSliceXenCostKey, node);
	if (isprimitive("long long")) {
		long long obj = getVpsSliceKvmLCost();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
		long long obj = static_cast<long long> (getVpsSliceKvmLCost());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *vpsSliceKvmLCostKey = "vpsSliceKvmLCost";
	json_object_set_member(pJsonObject, vpsSliceKvmLCostKey, node);
	if (isprimitive("long long")) {
		long long obj = getVpsSliceKvmStorageCost();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
		long long obj = static_cast<long long> (getVpsSliceKvmStorageCost());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *vpsSliceKvmStorageCostKey = "vpsSliceKvmStorageCost";
	json_object_set_member(pJsonObject, vpsSliceKvmStorageCostKey, node);
	if (isprimitive("long long")) {
		long long obj = getVpsNyCost();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
		long long obj = static_cast<long long> (getVpsNyCost());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *vpsNyCostKey = "vpsNyCost";
	json_object_set_member(pJsonObject, vpsNyCostKey, node);
	if (isprimitive("long long")) {
		long long obj = getVpsSliceKvmWCost();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
		long long obj = static_cast<long long> (getVpsSliceKvmWCost());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *vpsSliceKvmWCostKey = "vpsSliceKvmWCost";
	json_object_set_member(pJsonObject, vpsSliceKvmWCostKey, node);
	if (isprimitive("long long")) {
		long long obj = getCpanelCost();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
		long long obj = static_cast<long long> (getCpanelCost());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *cpanelCostKey = "cpanelCost";
	json_object_set_member(pJsonObject, cpanelCostKey, node);
	if (isprimitive("long long")) {
		long long obj = getDaCost();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
		long long obj = static_cast<long long> (getDaCost());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *daCostKey = "daCost";
	json_object_set_member(pJsonObject, daCostKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRamSlice();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *ramSliceKey = "ramSlice";
	json_object_set_member(pJsonObject, ramSliceKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getHdSlice();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *hdSliceKey = "hdSlice";
	json_object_set_member(pJsonObject, hdSliceKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getHdStorageSlice();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *hdStorageSliceKey = "hdStorageSlice";
	json_object_set_member(pJsonObject, hdStorageSliceKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getBwSlice();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *bwSliceKey = "bwSlice";
	json_object_set_member(pJsonObject, bwSliceKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getBwType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *bwTypeKey = "bwType";
	json_object_set_member(pJsonObject, bwTypeKey, node);
	if (isprimitive("long long")) {
		long long obj = getBwTotal();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
		long long obj = static_cast<long long> (getBwTotal());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *bwTotalKey = "bwTotal";
	json_object_set_member(pJsonObject, bwTotalKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getMaxSlices();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *maxSlicesKey = "maxSlices";
	json_object_set_member(pJsonObject, maxSlicesKey, node);
	if (isprimitive("VpsOrder_platformPackages")) {
		VpsOrder_platformPackages obj = getPlatformPackages();
		node = converttoJson(&obj, "VpsOrder_platformPackages", "");
	}
	else {
		
		VpsOrder_platformPackages obj = static_cast<VpsOrder_platformPackages> (getPlatformPackages());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *platformPackagesKey = "platformPackages";
	json_object_set_member(pJsonObject, platformPackagesKey, node);
	if (isprimitive("VpsOrder_platformNames")) {
		VpsOrder_platformNames obj = getPlatformNames();
		node = converttoJson(&obj, "VpsOrder_platformNames", "");
	}
	else {
		
		VpsOrder_platformNames obj = static_cast<VpsOrder_platformNames> (getPlatformNames());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *platformNamesKey = "platformNames";
	json_object_set_member(pJsonObject, platformNamesKey, node);
	if (isprimitive("VpsOrder_packageCosts")) {
		VpsOrder_packageCosts obj = getPackageCosts();
		node = converttoJson(&obj, "VpsOrder_packageCosts", "");
	}
	else {
		
		VpsOrder_packageCosts obj = static_cast<VpsOrder_packageCosts> (getPackageCosts());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *packageCostsKey = "packageCosts";
	json_object_set_member(pJsonObject, packageCostsKey, node);
	if (isprimitive("VpsOrder_locationStock")) {
		VpsOrder_locationStock obj = getLocationStock();
		node = converttoJson(&obj, "VpsOrder_locationStock", "");
	}
	else {
		
		VpsOrder_locationStock obj = static_cast<VpsOrder_locationStock> (getLocationStock());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *locationStockKey = "locationStock";
	json_object_set_member(pJsonObject, locationStockKey, node);
	if (isprimitive("VpsOrder_locationNames")) {
		VpsOrder_locationNames obj = getLocationNames();
		node = converttoJson(&obj, "VpsOrder_locationNames", "");
	}
	else {
		
		VpsOrder_locationNames obj = static_cast<VpsOrder_locationNames> (getLocationNames());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *locationNamesKey = "locationNames";
	json_object_set_member(pJsonObject, locationNamesKey, node);
	if (isprimitive("VpsOrder_osNames")) {
		VpsOrder_osNames obj = getOsNames();
		node = converttoJson(&obj, "VpsOrder_osNames", "");
	}
	else {
		
		VpsOrder_osNames obj = static_cast<VpsOrder_osNames> (getOsNames());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *osNamesKey = "osNames";
	json_object_set_member(pJsonObject, osNamesKey, node);
	if (isprimitive("VpsOrder_templates")) {
		VpsOrder_templates obj = getTemplates();
		node = converttoJson(&obj, "VpsOrder_templates", "");
	}
	else {
		
		VpsOrder_templates obj = static_cast<VpsOrder_templates> (getTemplates());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *templatesKey = "templates";
	json_object_set_member(pJsonObject, templatesKey, node);
	if (isprimitive("VpsOrder_serviceTypes")) {
		VpsOrder_serviceTypes obj = getServiceTypes();
		node = converttoJson(&obj, "VpsOrder_serviceTypes", "");
	}
	else {
		
		VpsOrder_serviceTypes obj = static_cast<VpsOrder_serviceTypes> (getServiceTypes());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *serviceTypesKey = "serviceTypes";
	json_object_set_member(pJsonObject, serviceTypesKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCurrency();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *currencyKey = "currency";
	json_object_set_member(pJsonObject, currencyKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCurrencySymbol();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *currencySymbolKey = "currencySymbol";
	json_object_set_member(pJsonObject, currencySymbolKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

long long
VpsOrder::getVpsSliceSsdOvzCost()
{
	return vpsSliceSsdOvzCost;
}

void
VpsOrder::setVpsSliceSsdOvzCost(long long  vpsSliceSsdOvzCost)
{
	this->vpsSliceSsdOvzCost = vpsSliceSsdOvzCost;
}

long long
VpsOrder::getVpsSliceOvzCost()
{
	return vpsSliceOvzCost;
}

void
VpsOrder::setVpsSliceOvzCost(long long  vpsSliceOvzCost)
{
	this->vpsSliceOvzCost = vpsSliceOvzCost;
}

long long
VpsOrder::getVpsSliceSsdVirtuozzoCost()
{
	return vpsSliceSsdVirtuozzoCost;
}

void
VpsOrder::setVpsSliceSsdVirtuozzoCost(long long  vpsSliceSsdVirtuozzoCost)
{
	this->vpsSliceSsdVirtuozzoCost = vpsSliceSsdVirtuozzoCost;
}

long long
VpsOrder::getVpsSliceVirtuozzoCost()
{
	return vpsSliceVirtuozzoCost;
}

void
VpsOrder::setVpsSliceVirtuozzoCost(long long  vpsSliceVirtuozzoCost)
{
	this->vpsSliceVirtuozzoCost = vpsSliceVirtuozzoCost;
}

long long
VpsOrder::getVpsSliceHypervCost()
{
	return vpsSliceHypervCost;
}

void
VpsOrder::setVpsSliceHypervCost(long long  vpsSliceHypervCost)
{
	this->vpsSliceHypervCost = vpsSliceHypervCost;
}

long long
VpsOrder::getVpsSliceVmwareCost()
{
	return vpsSliceVmwareCost;
}

void
VpsOrder::setVpsSliceVmwareCost(long long  vpsSliceVmwareCost)
{
	this->vpsSliceVmwareCost = vpsSliceVmwareCost;
}

long long
VpsOrder::getVpsSliceLxcCost()
{
	return vpsSliceLxcCost;
}

void
VpsOrder::setVpsSliceLxcCost(long long  vpsSliceLxcCost)
{
	this->vpsSliceLxcCost = vpsSliceLxcCost;
}

long long
VpsOrder::getVpsSliceXenCost()
{
	return vpsSliceXenCost;
}

void
VpsOrder::setVpsSliceXenCost(long long  vpsSliceXenCost)
{
	this->vpsSliceXenCost = vpsSliceXenCost;
}

long long
VpsOrder::getVpsSliceKvmLCost()
{
	return vpsSliceKvmLCost;
}

void
VpsOrder::setVpsSliceKvmLCost(long long  vpsSliceKvmLCost)
{
	this->vpsSliceKvmLCost = vpsSliceKvmLCost;
}

long long
VpsOrder::getVpsSliceKvmStorageCost()
{
	return vpsSliceKvmStorageCost;
}

void
VpsOrder::setVpsSliceKvmStorageCost(long long  vpsSliceKvmStorageCost)
{
	this->vpsSliceKvmStorageCost = vpsSliceKvmStorageCost;
}

long long
VpsOrder::getVpsNyCost()
{
	return vpsNyCost;
}

void
VpsOrder::setVpsNyCost(long long  vpsNyCost)
{
	this->vpsNyCost = vpsNyCost;
}

long long
VpsOrder::getVpsSliceKvmWCost()
{
	return vpsSliceKvmWCost;
}

void
VpsOrder::setVpsSliceKvmWCost(long long  vpsSliceKvmWCost)
{
	this->vpsSliceKvmWCost = vpsSliceKvmWCost;
}

long long
VpsOrder::getCpanelCost()
{
	return cpanelCost;
}

void
VpsOrder::setCpanelCost(long long  cpanelCost)
{
	this->cpanelCost = cpanelCost;
}

long long
VpsOrder::getDaCost()
{
	return daCost;
}

void
VpsOrder::setDaCost(long long  daCost)
{
	this->daCost = daCost;
}

std::string
VpsOrder::getRamSlice()
{
	return ramSlice;
}

void
VpsOrder::setRamSlice(std::string  ramSlice)
{
	this->ramSlice = ramSlice;
}

std::string
VpsOrder::getHdSlice()
{
	return hdSlice;
}

void
VpsOrder::setHdSlice(std::string  hdSlice)
{
	this->hdSlice = hdSlice;
}

std::string
VpsOrder::getHdStorageSlice()
{
	return hdStorageSlice;
}

void
VpsOrder::setHdStorageSlice(std::string  hdStorageSlice)
{
	this->hdStorageSlice = hdStorageSlice;
}

std::string
VpsOrder::getBwSlice()
{
	return bwSlice;
}

void
VpsOrder::setBwSlice(std::string  bwSlice)
{
	this->bwSlice = bwSlice;
}

std::string
VpsOrder::getBwType()
{
	return bwType;
}

void
VpsOrder::setBwType(std::string  bwType)
{
	this->bwType = bwType;
}

long long
VpsOrder::getBwTotal()
{
	return bwTotal;
}

void
VpsOrder::setBwTotal(long long  bwTotal)
{
	this->bwTotal = bwTotal;
}

std::string
VpsOrder::getMaxSlices()
{
	return maxSlices;
}

void
VpsOrder::setMaxSlices(std::string  maxSlices)
{
	this->maxSlices = maxSlices;
}

VpsOrder_platformPackages
VpsOrder::getPlatformPackages()
{
	return platformPackages;
}

void
VpsOrder::setPlatformPackages(VpsOrder_platformPackages  platformPackages)
{
	this->platformPackages = platformPackages;
}

VpsOrder_platformNames
VpsOrder::getPlatformNames()
{
	return platformNames;
}

void
VpsOrder::setPlatformNames(VpsOrder_platformNames  platformNames)
{
	this->platformNames = platformNames;
}

VpsOrder_packageCosts
VpsOrder::getPackageCosts()
{
	return packageCosts;
}

void
VpsOrder::setPackageCosts(VpsOrder_packageCosts  packageCosts)
{
	this->packageCosts = packageCosts;
}

VpsOrder_locationStock
VpsOrder::getLocationStock()
{
	return locationStock;
}

void
VpsOrder::setLocationStock(VpsOrder_locationStock  locationStock)
{
	this->locationStock = locationStock;
}

VpsOrder_locationNames
VpsOrder::getLocationNames()
{
	return locationNames;
}

void
VpsOrder::setLocationNames(VpsOrder_locationNames  locationNames)
{
	this->locationNames = locationNames;
}

VpsOrder_osNames
VpsOrder::getOsNames()
{
	return osNames;
}

void
VpsOrder::setOsNames(VpsOrder_osNames  osNames)
{
	this->osNames = osNames;
}

VpsOrder_templates
VpsOrder::getTemplates()
{
	return templates;
}

void
VpsOrder::setTemplates(VpsOrder_templates  templates)
{
	this->templates = templates;
}

VpsOrder_serviceTypes
VpsOrder::getServiceTypes()
{
	return serviceTypes;
}

void
VpsOrder::setServiceTypes(VpsOrder_serviceTypes  serviceTypes)
{
	this->serviceTypes = serviceTypes;
}

std::string
VpsOrder::getCurrency()
{
	return currency;
}

void
VpsOrder::setCurrency(std::string  currency)
{
	this->currency = currency;
}

std::string
VpsOrder::getCurrencySymbol()
{
	return currencySymbol;
}

void
VpsOrder::setCurrencySymbol(std::string  currencySymbol)
{
	this->currencySymbol = currencySymbol;
}


