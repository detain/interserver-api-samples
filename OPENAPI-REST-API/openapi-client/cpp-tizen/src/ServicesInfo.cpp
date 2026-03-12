#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ServicesInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ServicesInfo::ServicesInfo()
{
	//__init();
}

ServicesInfo::~ServicesInfo()
{
	//__cleanup();
}

void
ServicesInfo::__init()
{
	//modules = new Modules();
	//services = new Services();
	//serviceTypes = new ServiceTypes();
	//serviceCategories = new ServiceCategories();
}

void
ServicesInfo::__cleanup()
{
	//if(modules != NULL) {
	//
	//delete modules;
	//modules = NULL;
	//}
	//if(services != NULL) {
	//
	//delete services;
	//services = NULL;
	//}
	//if(serviceTypes != NULL) {
	//
	//delete serviceTypes;
	//serviceTypes = NULL;
	//}
	//if(serviceCategories != NULL) {
	//
	//delete serviceCategories;
	//serviceCategories = NULL;
	//}
	//
}

void
ServicesInfo::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *modulesKey = "modules";
	node = json_object_get_member(pJsonObject, modulesKey);
	if (node !=NULL) {
	

		if (isprimitive("Modules")) {
			jsonToValue(&modules, node, "Modules", "Modules");
		} else {
			
			Modules* obj = static_cast<Modules*> (&modules);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *servicesKey = "services";
	node = json_object_get_member(pJsonObject, servicesKey);
	if (node !=NULL) {
	

		if (isprimitive("Services")) {
			jsonToValue(&services, node, "Services", "Services");
		} else {
			
			Services* obj = static_cast<Services*> (&services);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *serviceTypesKey = "serviceTypes";
	node = json_object_get_member(pJsonObject, serviceTypesKey);
	if (node !=NULL) {
	

		if (isprimitive("ServiceTypes")) {
			jsonToValue(&serviceTypes, node, "ServiceTypes", "ServiceTypes");
		} else {
			
			ServiceTypes* obj = static_cast<ServiceTypes*> (&serviceTypes);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *serviceCategoriesKey = "serviceCategories";
	node = json_object_get_member(pJsonObject, serviceCategoriesKey);
	if (node !=NULL) {
	

		if (isprimitive("ServiceCategories")) {
			jsonToValue(&serviceCategories, node, "ServiceCategories", "ServiceCategories");
		} else {
			
			ServiceCategories* obj = static_cast<ServiceCategories*> (&serviceCategories);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

ServicesInfo::ServicesInfo(char* json)
{
	this->fromJson(json);
}

char*
ServicesInfo::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("Modules")) {
		Modules obj = getModules();
		node = converttoJson(&obj, "Modules", "");
	}
	else {
		
		Modules obj = static_cast<Modules> (getModules());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *modulesKey = "modules";
	json_object_set_member(pJsonObject, modulesKey, node);
	if (isprimitive("Services")) {
		Services obj = getServices();
		node = converttoJson(&obj, "Services", "");
	}
	else {
		
		Services obj = static_cast<Services> (getServices());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *servicesKey = "services";
	json_object_set_member(pJsonObject, servicesKey, node);
	if (isprimitive("ServiceTypes")) {
		ServiceTypes obj = getServiceTypes();
		node = converttoJson(&obj, "ServiceTypes", "");
	}
	else {
		
		ServiceTypes obj = static_cast<ServiceTypes> (getServiceTypes());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *serviceTypesKey = "serviceTypes";
	json_object_set_member(pJsonObject, serviceTypesKey, node);
	if (isprimitive("ServiceCategories")) {
		ServiceCategories obj = getServiceCategories();
		node = converttoJson(&obj, "ServiceCategories", "");
	}
	else {
		
		ServiceCategories obj = static_cast<ServiceCategories> (getServiceCategories());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *serviceCategoriesKey = "serviceCategories";
	json_object_set_member(pJsonObject, serviceCategoriesKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

Modules
ServicesInfo::getModules()
{
	return modules;
}

void
ServicesInfo::setModules(Modules  modules)
{
	this->modules = modules;
}

Services
ServicesInfo::getServices()
{
	return services;
}

void
ServicesInfo::setServices(Services  services)
{
	this->services = services;
}

ServiceTypes
ServicesInfo::getServiceTypes()
{
	return serviceTypes;
}

void
ServicesInfo::setServiceTypes(ServiceTypes  serviceTypes)
{
	this->serviceTypes = serviceTypes;
}

ServiceCategories
ServicesInfo::getServiceCategories()
{
	return serviceCategories;
}

void
ServicesInfo::setServiceCategories(ServiceCategories  serviceCategories)
{
	this->serviceCategories = serviceCategories;
}


