#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "Cpu.h"

using namespace std;
using namespace Tizen::ArtikCloud;

Cpu::Cpu()
{
	//__init();
}

Cpu::~Cpu()
{
	//__cleanup();
}

void
Cpu::__init()
{
	//id = int(0);
	//short_desc = std::string();
	//long_desc = std::string();
	//type = std::string();
	//speed = std::string();
	//num_cores = std::string();
	//num_cpus = std::string();
	//benchmark = std::string();
	//monthly_price = double(0);
	//monthly_price_display = std::string();
	//max_ram = std::string();
	//min_ram = std::string();
	//max_lff = std::string();
	//max_sff = std::string();
	//max_nve = std::string();
	//visible = std::string();
	//active = std::string();
}

void
Cpu::__cleanup()
{
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(short_desc != NULL) {
	//
	//delete short_desc;
	//short_desc = NULL;
	//}
	//if(long_desc != NULL) {
	//
	//delete long_desc;
	//long_desc = NULL;
	//}
	//if(type != NULL) {
	//
	//delete type;
	//type = NULL;
	//}
	//if(speed != NULL) {
	//
	//delete speed;
	//speed = NULL;
	//}
	//if(num_cores != NULL) {
	//
	//delete num_cores;
	//num_cores = NULL;
	//}
	//if(num_cpus != NULL) {
	//
	//delete num_cpus;
	//num_cpus = NULL;
	//}
	//if(benchmark != NULL) {
	//
	//delete benchmark;
	//benchmark = NULL;
	//}
	//if(monthly_price != NULL) {
	//
	//delete monthly_price;
	//monthly_price = NULL;
	//}
	//if(monthly_price_display != NULL) {
	//
	//delete monthly_price_display;
	//monthly_price_display = NULL;
	//}
	//if(max_ram != NULL) {
	//
	//delete max_ram;
	//max_ram = NULL;
	//}
	//if(min_ram != NULL) {
	//
	//delete min_ram;
	//min_ram = NULL;
	//}
	//if(max_lff != NULL) {
	//
	//delete max_lff;
	//max_lff = NULL;
	//}
	//if(max_sff != NULL) {
	//
	//delete max_sff;
	//max_sff = NULL;
	//}
	//if(max_nve != NULL) {
	//
	//delete max_nve;
	//max_nve = NULL;
	//}
	//if(visible != NULL) {
	//
	//delete visible;
	//visible = NULL;
	//}
	//if(active != NULL) {
	//
	//delete active;
	//active = NULL;
	//}
	//
}

void
Cpu::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *idKey = "id";
	node = json_object_get_member(pJsonObject, idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&id, node, "int", "");
		} else {
			
		}
	}
	const gchar *short_descKey = "short_desc";
	node = json_object_get_member(pJsonObject, short_descKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&short_desc, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *long_descKey = "long_desc";
	node = json_object_get_member(pJsonObject, long_descKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&long_desc, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *typeKey = "type";
	node = json_object_get_member(pJsonObject, typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&type, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *speedKey = "speed";
	node = json_object_get_member(pJsonObject, speedKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&speed, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *num_coresKey = "num_cores";
	node = json_object_get_member(pJsonObject, num_coresKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&num_cores, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *num_cpusKey = "num_cpus";
	node = json_object_get_member(pJsonObject, num_cpusKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&num_cpus, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *benchmarkKey = "benchmark";
	node = json_object_get_member(pJsonObject, benchmarkKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&benchmark, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *monthly_priceKey = "monthly_price";
	node = json_object_get_member(pJsonObject, monthly_priceKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&monthly_price, node, "long long", "");
		} else {
			
			long long* obj = static_cast<long long*> (&monthly_price);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *monthly_price_displayKey = "monthly_price_display";
	node = json_object_get_member(pJsonObject, monthly_price_displayKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&monthly_price_display, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *max_ramKey = "max_ram";
	node = json_object_get_member(pJsonObject, max_ramKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&max_ram, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *min_ramKey = "min_ram";
	node = json_object_get_member(pJsonObject, min_ramKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&min_ram, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *max_lffKey = "max_lff";
	node = json_object_get_member(pJsonObject, max_lffKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&max_lff, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *max_sffKey = "max_sff";
	node = json_object_get_member(pJsonObject, max_sffKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&max_sff, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *max_nveKey = "max_nve";
	node = json_object_get_member(pJsonObject, max_nveKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&max_nve, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *visibleKey = "visible";
	node = json_object_get_member(pJsonObject, visibleKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&visible, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *activeKey = "active";
	node = json_object_get_member(pJsonObject, activeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&active, node, "std::string", "");
		} else {
			
		}
	}
}

Cpu::Cpu(char* json)
{
	this->fromJson(json);
}

char*
Cpu::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getShortDesc();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *short_descKey = "short_desc";
	json_object_set_member(pJsonObject, short_descKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLongDesc();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *long_descKey = "long_desc";
	json_object_set_member(pJsonObject, long_descKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *typeKey = "type";
	json_object_set_member(pJsonObject, typeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getSpeed();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *speedKey = "speed";
	json_object_set_member(pJsonObject, speedKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getNumCores();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *num_coresKey = "num_cores";
	json_object_set_member(pJsonObject, num_coresKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getNumCpus();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *num_cpusKey = "num_cpus";
	json_object_set_member(pJsonObject, num_cpusKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getBenchmark();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *benchmarkKey = "benchmark";
	json_object_set_member(pJsonObject, benchmarkKey, node);
	if (isprimitive("long long")) {
		long long obj = getMonthlyPrice();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
		long long obj = static_cast<long long> (getMonthlyPrice());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *monthly_priceKey = "monthly_price";
	json_object_set_member(pJsonObject, monthly_priceKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getMonthlyPriceDisplay();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *monthly_price_displayKey = "monthly_price_display";
	json_object_set_member(pJsonObject, monthly_price_displayKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getMaxRam();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *max_ramKey = "max_ram";
	json_object_set_member(pJsonObject, max_ramKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getMinRam();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *min_ramKey = "min_ram";
	json_object_set_member(pJsonObject, min_ramKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getMaxLff();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *max_lffKey = "max_lff";
	json_object_set_member(pJsonObject, max_lffKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getMaxSff();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *max_sffKey = "max_sff";
	json_object_set_member(pJsonObject, max_sffKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getMaxNve();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *max_nveKey = "max_nve";
	json_object_set_member(pJsonObject, max_nveKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVisible();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *visibleKey = "visible";
	json_object_set_member(pJsonObject, visibleKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getActive();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *activeKey = "active";
	json_object_set_member(pJsonObject, activeKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
Cpu::getId()
{
	return id;
}

void
Cpu::setId(int  id)
{
	this->id = id;
}

std::string
Cpu::getShortDesc()
{
	return short_desc;
}

void
Cpu::setShortDesc(std::string  short_desc)
{
	this->short_desc = short_desc;
}

std::string
Cpu::getLongDesc()
{
	return long_desc;
}

void
Cpu::setLongDesc(std::string  long_desc)
{
	this->long_desc = long_desc;
}

std::string
Cpu::getType()
{
	return type;
}

void
Cpu::setType(std::string  type)
{
	this->type = type;
}

std::string
Cpu::getSpeed()
{
	return speed;
}

void
Cpu::setSpeed(std::string  speed)
{
	this->speed = speed;
}

std::string
Cpu::getNumCores()
{
	return num_cores;
}

void
Cpu::setNumCores(std::string  num_cores)
{
	this->num_cores = num_cores;
}

std::string
Cpu::getNumCpus()
{
	return num_cpus;
}

void
Cpu::setNumCpus(std::string  num_cpus)
{
	this->num_cpus = num_cpus;
}

std::string
Cpu::getBenchmark()
{
	return benchmark;
}

void
Cpu::setBenchmark(std::string  benchmark)
{
	this->benchmark = benchmark;
}

long long
Cpu::getMonthlyPrice()
{
	return monthly_price;
}

void
Cpu::setMonthlyPrice(long long  monthly_price)
{
	this->monthly_price = monthly_price;
}

std::string
Cpu::getMonthlyPriceDisplay()
{
	return monthly_price_display;
}

void
Cpu::setMonthlyPriceDisplay(std::string  monthly_price_display)
{
	this->monthly_price_display = monthly_price_display;
}

std::string
Cpu::getMaxRam()
{
	return max_ram;
}

void
Cpu::setMaxRam(std::string  max_ram)
{
	this->max_ram = max_ram;
}

std::string
Cpu::getMinRam()
{
	return min_ram;
}

void
Cpu::setMinRam(std::string  min_ram)
{
	this->min_ram = min_ram;
}

std::string
Cpu::getMaxLff()
{
	return max_lff;
}

void
Cpu::setMaxLff(std::string  max_lff)
{
	this->max_lff = max_lff;
}

std::string
Cpu::getMaxSff()
{
	return max_sff;
}

void
Cpu::setMaxSff(std::string  max_sff)
{
	this->max_sff = max_sff;
}

std::string
Cpu::getMaxNve()
{
	return max_nve;
}

void
Cpu::setMaxNve(std::string  max_nve)
{
	this->max_nve = max_nve;
}

std::string
Cpu::getVisible()
{
	return visible;
}

void
Cpu::setVisible(std::string  visible)
{
	this->visible = visible;
}

std::string
Cpu::getActive()
{
	return active;
}

void
Cpu::setActive(std::string  active)
{
	this->active = active;
}


