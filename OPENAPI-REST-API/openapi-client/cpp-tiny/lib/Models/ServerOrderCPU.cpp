

#include "ServerOrderCPU.h"

using namespace Tiny;

ServerOrderCPU::ServerOrderCPU()
{
	id = std::string();
	price = int(0);
	img = std::string();
	short_desc = std::string();
	long_desc = std::string();
	location = std::string();
	fsb = std::string();
	manu = std::string();
	type = std::string();
	speed = std::string();
	cache = std::string();
	active = std::string();
	num_cores = std::string();
	num_cpus = std::string();
	benchmark = std::string();
	monthly_price = int(0);
	max_ram = std::string();
	min_ram = std::string();
	max_lff = std::string();
	max_sff = std::string();
	max_nve = std::string();
	visible = std::string();
	hd_ids = std::string();
	price_display = std::string();
	monthly_price_display = std::string();
}

ServerOrderCPU::ServerOrderCPU(std::string jsonString)
{
	this->fromJson(jsonString);
}

ServerOrderCPU::~ServerOrderCPU()
{

}

void
ServerOrderCPU::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *idKey = "id";

    if(object.has_key(idKey))
    {
        bourne::json value = object[idKey];



        jsonToValue(&id, value, "std::string");


    }

    const char *priceKey = "price";

    if(object.has_key(priceKey))
    {
        bourne::json value = object[priceKey];



        jsonToValue(&price, value, "int");


    }

    const char *imgKey = "img";

    if(object.has_key(imgKey))
    {
        bourne::json value = object[imgKey];



        jsonToValue(&img, value, "std::string");


    }

    const char *short_descKey = "short_desc";

    if(object.has_key(short_descKey))
    {
        bourne::json value = object[short_descKey];



        jsonToValue(&short_desc, value, "std::string");


    }

    const char *long_descKey = "long_desc";

    if(object.has_key(long_descKey))
    {
        bourne::json value = object[long_descKey];



        jsonToValue(&long_desc, value, "std::string");


    }

    const char *locationKey = "location";

    if(object.has_key(locationKey))
    {
        bourne::json value = object[locationKey];



        jsonToValue(&location, value, "std::string");


    }

    const char *fsbKey = "fsb";

    if(object.has_key(fsbKey))
    {
        bourne::json value = object[fsbKey];



        jsonToValue(&fsb, value, "std::string");


    }

    const char *manuKey = "manu";

    if(object.has_key(manuKey))
    {
        bourne::json value = object[manuKey];



        jsonToValue(&manu, value, "std::string");


    }

    const char *typeKey = "type";

    if(object.has_key(typeKey))
    {
        bourne::json value = object[typeKey];



        jsonToValue(&type, value, "std::string");


    }

    const char *speedKey = "speed";

    if(object.has_key(speedKey))
    {
        bourne::json value = object[speedKey];



        jsonToValue(&speed, value, "std::string");


    }

    const char *cacheKey = "cache";

    if(object.has_key(cacheKey))
    {
        bourne::json value = object[cacheKey];



        jsonToValue(&cache, value, "std::string");


    }

    const char *activeKey = "active";

    if(object.has_key(activeKey))
    {
        bourne::json value = object[activeKey];



        jsonToValue(&active, value, "std::string");


    }

    const char *num_coresKey = "num_cores";

    if(object.has_key(num_coresKey))
    {
        bourne::json value = object[num_coresKey];



        jsonToValue(&num_cores, value, "std::string");


    }

    const char *num_cpusKey = "num_cpus";

    if(object.has_key(num_cpusKey))
    {
        bourne::json value = object[num_cpusKey];



        jsonToValue(&num_cpus, value, "std::string");


    }

    const char *benchmarkKey = "benchmark";

    if(object.has_key(benchmarkKey))
    {
        bourne::json value = object[benchmarkKey];



        jsonToValue(&benchmark, value, "std::string");


    }

    const char *monthly_priceKey = "monthly_price";

    if(object.has_key(monthly_priceKey))
    {
        bourne::json value = object[monthly_priceKey];



        jsonToValue(&monthly_price, value, "int");


    }

    const char *max_ramKey = "max_ram";

    if(object.has_key(max_ramKey))
    {
        bourne::json value = object[max_ramKey];



        jsonToValue(&max_ram, value, "std::string");


    }

    const char *min_ramKey = "min_ram";

    if(object.has_key(min_ramKey))
    {
        bourne::json value = object[min_ramKey];



        jsonToValue(&min_ram, value, "std::string");


    }

    const char *max_lffKey = "max_lff";

    if(object.has_key(max_lffKey))
    {
        bourne::json value = object[max_lffKey];



        jsonToValue(&max_lff, value, "std::string");


    }

    const char *max_sffKey = "max_sff";

    if(object.has_key(max_sffKey))
    {
        bourne::json value = object[max_sffKey];



        jsonToValue(&max_sff, value, "std::string");


    }

    const char *max_nveKey = "max_nve";

    if(object.has_key(max_nveKey))
    {
        bourne::json value = object[max_nveKey];



        jsonToValue(&max_nve, value, "std::string");


    }

    const char *visibleKey = "visible";

    if(object.has_key(visibleKey))
    {
        bourne::json value = object[visibleKey];



        jsonToValue(&visible, value, "std::string");


    }

    const char *hd_idsKey = "hd_ids";

    if(object.has_key(hd_idsKey))
    {
        bourne::json value = object[hd_idsKey];



        jsonToValue(&hd_ids, value, "std::string");


    }

    const char *price_displayKey = "price_display";

    if(object.has_key(price_displayKey))
    {
        bourne::json value = object[price_displayKey];



        jsonToValue(&price_display, value, "std::string");


    }

    const char *monthly_price_displayKey = "monthly_price_display";

    if(object.has_key(monthly_price_displayKey))
    {
        bourne::json value = object[monthly_price_displayKey];



        jsonToValue(&monthly_price_display, value, "std::string");


    }


}

bourne::json
ServerOrderCPU::toJson()
{
    bourne::json object = bourne::json::object();





    object["id"] = getId();






    object["price"] = getPrice();






    object["img"] = getImg();






    object["short_desc"] = getShortDesc();






    object["long_desc"] = getLongDesc();






    object["location"] = getLocation();






    object["fsb"] = getFsb();






    object["manu"] = getManu();






    object["type"] = getType();






    object["speed"] = getSpeed();






    object["cache"] = getCache();






    object["active"] = getActive();






    object["num_cores"] = getNumCores();






    object["num_cpus"] = getNumCpus();






    object["benchmark"] = getBenchmark();






    object["monthly_price"] = getMonthlyPrice();






    object["max_ram"] = getMaxRam();






    object["min_ram"] = getMinRam();






    object["max_lff"] = getMaxLff();






    object["max_sff"] = getMaxSff();






    object["max_nve"] = getMaxNve();






    object["visible"] = getVisible();






    object["hd_ids"] = getHdIds();






    object["price_display"] = getPriceDisplay();






    object["monthly_price_display"] = getMonthlyPriceDisplay();



    return object;

}

std::string
ServerOrderCPU::getId()
{
	return id;
}

void
ServerOrderCPU::setId(std::string id)
{
	this->id = id;
}

int
ServerOrderCPU::getPrice()
{
	return price;
}

void
ServerOrderCPU::setPrice(int price)
{
	this->price = price;
}

std::string
ServerOrderCPU::getImg()
{
	return img;
}

void
ServerOrderCPU::setImg(std::string img)
{
	this->img = img;
}

std::string
ServerOrderCPU::getShortDesc()
{
	return short_desc;
}

void
ServerOrderCPU::setShortDesc(std::string short_desc)
{
	this->short_desc = short_desc;
}

std::string
ServerOrderCPU::getLongDesc()
{
	return long_desc;
}

void
ServerOrderCPU::setLongDesc(std::string long_desc)
{
	this->long_desc = long_desc;
}

std::string
ServerOrderCPU::getLocation()
{
	return location;
}

void
ServerOrderCPU::setLocation(std::string location)
{
	this->location = location;
}

std::string
ServerOrderCPU::getFsb()
{
	return fsb;
}

void
ServerOrderCPU::setFsb(std::string fsb)
{
	this->fsb = fsb;
}

std::string
ServerOrderCPU::getManu()
{
	return manu;
}

void
ServerOrderCPU::setManu(std::string manu)
{
	this->manu = manu;
}

std::string
ServerOrderCPU::getType()
{
	return type;
}

void
ServerOrderCPU::setType(std::string type)
{
	this->type = type;
}

std::string
ServerOrderCPU::getSpeed()
{
	return speed;
}

void
ServerOrderCPU::setSpeed(std::string speed)
{
	this->speed = speed;
}

std::string
ServerOrderCPU::getCache()
{
	return cache;
}

void
ServerOrderCPU::setCache(std::string cache)
{
	this->cache = cache;
}

std::string
ServerOrderCPU::getActive()
{
	return active;
}

void
ServerOrderCPU::setActive(std::string active)
{
	this->active = active;
}

std::string
ServerOrderCPU::getNumCores()
{
	return num_cores;
}

void
ServerOrderCPU::setNumCores(std::string num_cores)
{
	this->num_cores = num_cores;
}

std::string
ServerOrderCPU::getNumCpus()
{
	return num_cpus;
}

void
ServerOrderCPU::setNumCpus(std::string num_cpus)
{
	this->num_cpus = num_cpus;
}

std::string
ServerOrderCPU::getBenchmark()
{
	return benchmark;
}

void
ServerOrderCPU::setBenchmark(std::string benchmark)
{
	this->benchmark = benchmark;
}

int
ServerOrderCPU::getMonthlyPrice()
{
	return monthly_price;
}

void
ServerOrderCPU::setMonthlyPrice(int monthly_price)
{
	this->monthly_price = monthly_price;
}

std::string
ServerOrderCPU::getMaxRam()
{
	return max_ram;
}

void
ServerOrderCPU::setMaxRam(std::string max_ram)
{
	this->max_ram = max_ram;
}

std::string
ServerOrderCPU::getMinRam()
{
	return min_ram;
}

void
ServerOrderCPU::setMinRam(std::string min_ram)
{
	this->min_ram = min_ram;
}

std::string
ServerOrderCPU::getMaxLff()
{
	return max_lff;
}

void
ServerOrderCPU::setMaxLff(std::string max_lff)
{
	this->max_lff = max_lff;
}

std::string
ServerOrderCPU::getMaxSff()
{
	return max_sff;
}

void
ServerOrderCPU::setMaxSff(std::string max_sff)
{
	this->max_sff = max_sff;
}

std::string
ServerOrderCPU::getMaxNve()
{
	return max_nve;
}

void
ServerOrderCPU::setMaxNve(std::string max_nve)
{
	this->max_nve = max_nve;
}

std::string
ServerOrderCPU::getVisible()
{
	return visible;
}

void
ServerOrderCPU::setVisible(std::string visible)
{
	this->visible = visible;
}

std::string
ServerOrderCPU::getHdIds()
{
	return hd_ids;
}

void
ServerOrderCPU::setHdIds(std::string hd_ids)
{
	this->hd_ids = hd_ids;
}

std::string
ServerOrderCPU::getPriceDisplay()
{
	return price_display;
}

void
ServerOrderCPU::setPriceDisplay(std::string price_display)
{
	this->price_display = price_display;
}

std::string
ServerOrderCPU::getMonthlyPriceDisplay()
{
	return monthly_price_display;
}

void
ServerOrderCPU::setMonthlyPriceDisplay(std::string monthly_price_display)
{
	this->monthly_price_display = monthly_price_display;
}



