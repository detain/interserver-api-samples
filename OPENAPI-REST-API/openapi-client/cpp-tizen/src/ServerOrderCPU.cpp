#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ServerOrderCPU.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ServerOrderCPU::ServerOrderCPU()
{
	//__init();
}

ServerOrderCPU::~ServerOrderCPU()
{
	//__cleanup();
}

void
ServerOrderCPU::__init()
{
	//id = std::string();
	//price = int(0);
	//img = std::string();
	//short_desc = std::string();
	//long_desc = std::string();
	//location = std::string();
	//fsb = std::string();
	//manu = std::string();
	//type = std::string();
	//speed = std::string();
	//cache = std::string();
	//active = std::string();
	//num_cores = std::string();
	//num_cpus = std::string();
	//benchmark = std::string();
	//monthly_price = int(0);
	//max_ram = std::string();
	//min_ram = std::string();
	//max_lff = std::string();
	//max_sff = std::string();
	//max_nve = std::string();
	//visible = std::string();
	//hd_ids = null;
	//price_display = std::string();
	//monthly_price_display = std::string();
}

void
ServerOrderCPU::__cleanup()
{
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(price != NULL) {
	//
	//delete price;
	//price = NULL;
	//}
	//if(img != NULL) {
	//
	//delete img;
	//img = NULL;
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
	//if(location != NULL) {
	//
	//delete location;
	//location = NULL;
	//}
	//if(fsb != NULL) {
	//
	//delete fsb;
	//fsb = NULL;
	//}
	//if(manu != NULL) {
	//
	//delete manu;
	//manu = NULL;
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
	//if(cache != NULL) {
	//
	//delete cache;
	//cache = NULL;
	//}
	//if(active != NULL) {
	//
	//delete active;
	//active = NULL;
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
	//if(hd_ids != NULL) {
	//
	//delete hd_ids;
	//hd_ids = NULL;
	//}
	//if(price_display != NULL) {
	//
	//delete price_display;
	//price_display = NULL;
	//}
	//if(monthly_price_display != NULL) {
	//
	//delete monthly_price_display;
	//monthly_price_display = NULL;
	//}
	//
}

void
ServerOrderCPU::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *idKey = "id";
	node = json_object_get_member(pJsonObject, idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *priceKey = "price";
	node = json_object_get_member(pJsonObject, priceKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&price, node, "int", "");
		} else {
			
		}
	}
	const gchar *imgKey = "img";
	node = json_object_get_member(pJsonObject, imgKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&img, node, "std::string", "");
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
	const gchar *locationKey = "location";
	node = json_object_get_member(pJsonObject, locationKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&location, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *fsbKey = "fsb";
	node = json_object_get_member(pJsonObject, fsbKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&fsb, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *manuKey = "manu";
	node = json_object_get_member(pJsonObject, manuKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&manu, node, "std::string", "");
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
	const gchar *cacheKey = "cache";
	node = json_object_get_member(pJsonObject, cacheKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&cache, node, "std::string", "");
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
	

		if (isprimitive("int")) {
			jsonToValue(&monthly_price, node, "int", "");
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
	const gchar *hd_idsKey = "hd_ids";
	node = json_object_get_member(pJsonObject, hd_idsKey);
	if (node !=NULL) {
	

		if (isprimitive("AnyType")) {
			jsonToValue(&hd_ids, node, "AnyType", "");
		} else {
			
			AnyType* obj = static_cast<AnyType*> (&hd_ids);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *price_displayKey = "price_display";
	node = json_object_get_member(pJsonObject, price_displayKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&price_display, node, "std::string", "");
		} else {
			
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
}

ServerOrderCPU::ServerOrderCPU(char* json)
{
	this->fromJson(json);
}

char*
ServerOrderCPU::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("int")) {
		int obj = getPrice();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *priceKey = "price";
	json_object_set_member(pJsonObject, priceKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getImg();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *imgKey = "img";
	json_object_set_member(pJsonObject, imgKey, node);
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
		std::string obj = getLocation();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *locationKey = "location";
	json_object_set_member(pJsonObject, locationKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getFsb();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *fsbKey = "fsb";
	json_object_set_member(pJsonObject, fsbKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getManu();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *manuKey = "manu";
	json_object_set_member(pJsonObject, manuKey, node);
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
		std::string obj = getCache();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *cacheKey = "cache";
	json_object_set_member(pJsonObject, cacheKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getActive();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *activeKey = "active";
	json_object_set_member(pJsonObject, activeKey, node);
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
	if (isprimitive("int")) {
		int obj = getMonthlyPrice();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *monthly_priceKey = "monthly_price";
	json_object_set_member(pJsonObject, monthly_priceKey, node);
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
	if (isprimitive("AnyType")) {
		AnyType obj = getHdIds();
		node = converttoJson(&obj, "AnyType", "");
	}
	else {
		
		AnyType obj = static_cast<AnyType> (getHdIds());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *hd_idsKey = "hd_ids";
	json_object_set_member(pJsonObject, hd_idsKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getPriceDisplay();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *price_displayKey = "price_display";
	json_object_set_member(pJsonObject, price_displayKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getMonthlyPriceDisplay();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *monthly_price_displayKey = "monthly_price_display";
	json_object_set_member(pJsonObject, monthly_price_displayKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
ServerOrderCPU::getId()
{
	return id;
}

void
ServerOrderCPU::setId(std::string  id)
{
	this->id = id;
}

int
ServerOrderCPU::getPrice()
{
	return price;
}

void
ServerOrderCPU::setPrice(int  price)
{
	this->price = price;
}

std::string
ServerOrderCPU::getImg()
{
	return img;
}

void
ServerOrderCPU::setImg(std::string  img)
{
	this->img = img;
}

std::string
ServerOrderCPU::getShortDesc()
{
	return short_desc;
}

void
ServerOrderCPU::setShortDesc(std::string  short_desc)
{
	this->short_desc = short_desc;
}

std::string
ServerOrderCPU::getLongDesc()
{
	return long_desc;
}

void
ServerOrderCPU::setLongDesc(std::string  long_desc)
{
	this->long_desc = long_desc;
}

std::string
ServerOrderCPU::getLocation()
{
	return location;
}

void
ServerOrderCPU::setLocation(std::string  location)
{
	this->location = location;
}

std::string
ServerOrderCPU::getFsb()
{
	return fsb;
}

void
ServerOrderCPU::setFsb(std::string  fsb)
{
	this->fsb = fsb;
}

std::string
ServerOrderCPU::getManu()
{
	return manu;
}

void
ServerOrderCPU::setManu(std::string  manu)
{
	this->manu = manu;
}

std::string
ServerOrderCPU::getType()
{
	return type;
}

void
ServerOrderCPU::setType(std::string  type)
{
	this->type = type;
}

std::string
ServerOrderCPU::getSpeed()
{
	return speed;
}

void
ServerOrderCPU::setSpeed(std::string  speed)
{
	this->speed = speed;
}

std::string
ServerOrderCPU::getCache()
{
	return cache;
}

void
ServerOrderCPU::setCache(std::string  cache)
{
	this->cache = cache;
}

std::string
ServerOrderCPU::getActive()
{
	return active;
}

void
ServerOrderCPU::setActive(std::string  active)
{
	this->active = active;
}

std::string
ServerOrderCPU::getNumCores()
{
	return num_cores;
}

void
ServerOrderCPU::setNumCores(std::string  num_cores)
{
	this->num_cores = num_cores;
}

std::string
ServerOrderCPU::getNumCpus()
{
	return num_cpus;
}

void
ServerOrderCPU::setNumCpus(std::string  num_cpus)
{
	this->num_cpus = num_cpus;
}

std::string
ServerOrderCPU::getBenchmark()
{
	return benchmark;
}

void
ServerOrderCPU::setBenchmark(std::string  benchmark)
{
	this->benchmark = benchmark;
}

int
ServerOrderCPU::getMonthlyPrice()
{
	return monthly_price;
}

void
ServerOrderCPU::setMonthlyPrice(int  monthly_price)
{
	this->monthly_price = monthly_price;
}

std::string
ServerOrderCPU::getMaxRam()
{
	return max_ram;
}

void
ServerOrderCPU::setMaxRam(std::string  max_ram)
{
	this->max_ram = max_ram;
}

std::string
ServerOrderCPU::getMinRam()
{
	return min_ram;
}

void
ServerOrderCPU::setMinRam(std::string  min_ram)
{
	this->min_ram = min_ram;
}

std::string
ServerOrderCPU::getMaxLff()
{
	return max_lff;
}

void
ServerOrderCPU::setMaxLff(std::string  max_lff)
{
	this->max_lff = max_lff;
}

std::string
ServerOrderCPU::getMaxSff()
{
	return max_sff;
}

void
ServerOrderCPU::setMaxSff(std::string  max_sff)
{
	this->max_sff = max_sff;
}

std::string
ServerOrderCPU::getMaxNve()
{
	return max_nve;
}

void
ServerOrderCPU::setMaxNve(std::string  max_nve)
{
	this->max_nve = max_nve;
}

std::string
ServerOrderCPU::getVisible()
{
	return visible;
}

void
ServerOrderCPU::setVisible(std::string  visible)
{
	this->visible = visible;
}

AnyType
ServerOrderCPU::getHdIds()
{
	return hd_ids;
}

void
ServerOrderCPU::setHdIds(AnyType  hd_ids)
{
	this->hd_ids = hd_ids;
}

std::string
ServerOrderCPU::getPriceDisplay()
{
	return price_display;
}

void
ServerOrderCPU::setPriceDisplay(std::string  price_display)
{
	this->price_display = price_display;
}

std::string
ServerOrderCPU::getMonthlyPriceDisplay()
{
	return monthly_price_display;
}

void
ServerOrderCPU::setMonthlyPriceDisplay(std::string  monthly_price_display)
{
	this->monthly_price_display = monthly_price_display;
}


