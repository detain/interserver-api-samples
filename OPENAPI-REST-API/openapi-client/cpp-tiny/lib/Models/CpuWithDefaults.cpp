

#include "CpuWithDefaults.h"

using namespace Tiny;

CpuWithDefaults::CpuWithDefaults()
{
	id = int(0);
	short_desc = std::string();
	long_desc = std::string();
	type = std::string();
	speed = std::string();
	num_cores = std::string();
	num_cpus = std::string();
	benchmark = std::string();
	monthly_price = float(0);
	monthly_price_display = std::string();
	max_ram = std::string();
	min_ram = std::string();
	max_lff = std::string();
	max_sff = std::string();
	max_nve = std::string();
	visible = std::string();
	active = std::string();
	memory_det = MemoryOption();
	hd_det = HardDrive();
	monthly_fee = std::string();
}

CpuWithDefaults::CpuWithDefaults(std::string jsonString)
{
	this->fromJson(jsonString);
}

CpuWithDefaults::~CpuWithDefaults()
{

}

void
CpuWithDefaults::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *idKey = "id";

    if(object.has_key(idKey))
    {
        bourne::json value = object[idKey];



        jsonToValue(&id, value, "int");


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



        jsonToValue(&monthly_price, value, "long");


    }

    const char *monthly_price_displayKey = "monthly_price_display";

    if(object.has_key(monthly_price_displayKey))
    {
        bourne::json value = object[monthly_price_displayKey];



        jsonToValue(&monthly_price_display, value, "std::string");


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

    const char *activeKey = "active";

    if(object.has_key(activeKey))
    {
        bourne::json value = object[activeKey];



        jsonToValue(&active, value, "std::string");


    }

    const char *memory_detKey = "memory_det";

    if(object.has_key(memory_detKey))
    {
        bourne::json value = object[memory_detKey];




        MemoryOption* obj = &memory_det;
		obj->fromJson(value.dump());

    }

    const char *hd_detKey = "hd_det";

    if(object.has_key(hd_detKey))
    {
        bourne::json value = object[hd_detKey];




        HardDrive* obj = &hd_det;
		obj->fromJson(value.dump());

    }

    const char *monthly_feeKey = "monthly_fee";

    if(object.has_key(monthly_feeKey))
    {
        bourne::json value = object[monthly_feeKey];



        jsonToValue(&monthly_fee, value, "std::string");


    }


}

bourne::json
CpuWithDefaults::toJson()
{
    bourne::json object = bourne::json::object();





    object["id"] = getId();






    object["short_desc"] = getShortDesc();






    object["long_desc"] = getLongDesc();






    object["type"] = getType();






    object["speed"] = getSpeed();






    object["num_cores"] = getNumCores();






    object["num_cpus"] = getNumCpus();






    object["benchmark"] = getBenchmark();






    object["monthly_price"] = getMonthlyPrice();






    object["monthly_price_display"] = getMonthlyPriceDisplay();






    object["max_ram"] = getMaxRam();






    object["min_ram"] = getMinRam();






    object["max_lff"] = getMaxLff();






    object["max_sff"] = getMaxSff();






    object["max_nve"] = getMaxNve();






    object["visible"] = getVisible();






    object["active"] = getActive();







	object["memory_det"] = getMemoryDet().toJson();






	object["hd_det"] = getHdDet().toJson();





    object["monthly_fee"] = getMonthlyFee();



    return object;

}

int
CpuWithDefaults::getId()
{
	return id;
}

void
CpuWithDefaults::setId(int id)
{
	this->id = id;
}

std::string
CpuWithDefaults::getShortDesc()
{
	return short_desc;
}

void
CpuWithDefaults::setShortDesc(std::string short_desc)
{
	this->short_desc = short_desc;
}

std::string
CpuWithDefaults::getLongDesc()
{
	return long_desc;
}

void
CpuWithDefaults::setLongDesc(std::string long_desc)
{
	this->long_desc = long_desc;
}

std::string
CpuWithDefaults::getType()
{
	return type;
}

void
CpuWithDefaults::setType(std::string type)
{
	this->type = type;
}

std::string
CpuWithDefaults::getSpeed()
{
	return speed;
}

void
CpuWithDefaults::setSpeed(std::string speed)
{
	this->speed = speed;
}

std::string
CpuWithDefaults::getNumCores()
{
	return num_cores;
}

void
CpuWithDefaults::setNumCores(std::string num_cores)
{
	this->num_cores = num_cores;
}

std::string
CpuWithDefaults::getNumCpus()
{
	return num_cpus;
}

void
CpuWithDefaults::setNumCpus(std::string num_cpus)
{
	this->num_cpus = num_cpus;
}

std::string
CpuWithDefaults::getBenchmark()
{
	return benchmark;
}

void
CpuWithDefaults::setBenchmark(std::string benchmark)
{
	this->benchmark = benchmark;
}

long
CpuWithDefaults::getMonthlyPrice()
{
	return monthly_price;
}

void
CpuWithDefaults::setMonthlyPrice(long monthly_price)
{
	this->monthly_price = monthly_price;
}

std::string
CpuWithDefaults::getMonthlyPriceDisplay()
{
	return monthly_price_display;
}

void
CpuWithDefaults::setMonthlyPriceDisplay(std::string monthly_price_display)
{
	this->monthly_price_display = monthly_price_display;
}

std::string
CpuWithDefaults::getMaxRam()
{
	return max_ram;
}

void
CpuWithDefaults::setMaxRam(std::string max_ram)
{
	this->max_ram = max_ram;
}

std::string
CpuWithDefaults::getMinRam()
{
	return min_ram;
}

void
CpuWithDefaults::setMinRam(std::string min_ram)
{
	this->min_ram = min_ram;
}

std::string
CpuWithDefaults::getMaxLff()
{
	return max_lff;
}

void
CpuWithDefaults::setMaxLff(std::string max_lff)
{
	this->max_lff = max_lff;
}

std::string
CpuWithDefaults::getMaxSff()
{
	return max_sff;
}

void
CpuWithDefaults::setMaxSff(std::string max_sff)
{
	this->max_sff = max_sff;
}

std::string
CpuWithDefaults::getMaxNve()
{
	return max_nve;
}

void
CpuWithDefaults::setMaxNve(std::string max_nve)
{
	this->max_nve = max_nve;
}

std::string
CpuWithDefaults::getVisible()
{
	return visible;
}

void
CpuWithDefaults::setVisible(std::string visible)
{
	this->visible = visible;
}

std::string
CpuWithDefaults::getActive()
{
	return active;
}

void
CpuWithDefaults::setActive(std::string active)
{
	this->active = active;
}

MemoryOption
CpuWithDefaults::getMemoryDet()
{
	return memory_det;
}

void
CpuWithDefaults::setMemoryDet(MemoryOption memory_det)
{
	this->memory_det = memory_det;
}

HardDrive
CpuWithDefaults::getHdDet()
{
	return hd_det;
}

void
CpuWithDefaults::setHdDet(HardDrive hd_det)
{
	this->hd_det = hd_det;
}

std::string
CpuWithDefaults::getMonthlyFee()
{
	return monthly_fee;
}

void
CpuWithDefaults::setMonthlyFee(std::string monthly_fee)
{
	this->monthly_fee = monthly_fee;
}



