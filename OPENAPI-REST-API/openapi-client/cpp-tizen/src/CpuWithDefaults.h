/*
 * CpuWithDefaults.h
 *
 * 
 */

#ifndef _CpuWithDefaults_H_
#define _CpuWithDefaults_H_


#include <string>
#include "HardDrive.h"
#include "MemoryOption.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class CpuWithDefaults : public Object {
public:
	/*! \brief Constructor.
	 */
	CpuWithDefaults();
	CpuWithDefaults(char* str);

	/*! \brief Destructor.
	 */
	virtual ~CpuWithDefaults();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	int getId();

	/*! \brief Set 
	 */
	void setId(int  id);
	/*! \brief Get 
	 */
	std::string getShortDesc();

	/*! \brief Set 
	 */
	void setShortDesc(std::string  short_desc);
	/*! \brief Get 
	 */
	std::string getLongDesc();

	/*! \brief Set 
	 */
	void setLongDesc(std::string  long_desc);
	/*! \brief Get 
	 */
	std::string getType();

	/*! \brief Set 
	 */
	void setType(std::string  type);
	/*! \brief Get 
	 */
	std::string getSpeed();

	/*! \brief Set 
	 */
	void setSpeed(std::string  speed);
	/*! \brief Get 
	 */
	std::string getNumCores();

	/*! \brief Set 
	 */
	void setNumCores(std::string  num_cores);
	/*! \brief Get 
	 */
	std::string getNumCpus();

	/*! \brief Set 
	 */
	void setNumCpus(std::string  num_cpus);
	/*! \brief Get 
	 */
	std::string getBenchmark();

	/*! \brief Set 
	 */
	void setBenchmark(std::string  benchmark);
	/*! \brief Get 
	 */
	long long getMonthlyPrice();

	/*! \brief Set 
	 */
	void setMonthlyPrice(long long  monthly_price);
	/*! \brief Get 
	 */
	std::string getMonthlyPriceDisplay();

	/*! \brief Set 
	 */
	void setMonthlyPriceDisplay(std::string  monthly_price_display);
	/*! \brief Get 
	 */
	std::string getMaxRam();

	/*! \brief Set 
	 */
	void setMaxRam(std::string  max_ram);
	/*! \brief Get 
	 */
	std::string getMinRam();

	/*! \brief Set 
	 */
	void setMinRam(std::string  min_ram);
	/*! \brief Get 
	 */
	std::string getMaxLff();

	/*! \brief Set 
	 */
	void setMaxLff(std::string  max_lff);
	/*! \brief Get 
	 */
	std::string getMaxSff();

	/*! \brief Set 
	 */
	void setMaxSff(std::string  max_sff);
	/*! \brief Get 
	 */
	std::string getMaxNve();

	/*! \brief Set 
	 */
	void setMaxNve(std::string  max_nve);
	/*! \brief Get 
	 */
	std::string getVisible();

	/*! \brief Set 
	 */
	void setVisible(std::string  visible);
	/*! \brief Get 
	 */
	std::string getActive();

	/*! \brief Set 
	 */
	void setActive(std::string  active);
	/*! \brief Get 
	 */
	MemoryOption getMemoryDet();

	/*! \brief Set 
	 */
	void setMemoryDet(MemoryOption  memory_det);
	/*! \brief Get 
	 */
	HardDrive getHdDet();

	/*! \brief Set 
	 */
	void setHdDet(HardDrive  hd_det);
	/*! \brief Get 
	 */
	std::string getMonthlyFee();

	/*! \brief Set 
	 */
	void setMonthlyFee(std::string  monthly_fee);

private:
	int id;
	std::string short_desc;
	std::string long_desc;
	std::string type;
	std::string speed;
	std::string num_cores;
	std::string num_cpus;
	std::string benchmark;
	long long monthly_price;
	std::string monthly_price_display;
	std::string max_ram;
	std::string min_ram;
	std::string max_lff;
	std::string max_sff;
	std::string max_nve;
	std::string visible;
	std::string active;
	MemoryOption memory_det;
	HardDrive hd_det;
	std::string monthly_fee;
	void __init();
	void __cleanup();

};
}
}

#endif /* _CpuWithDefaults_H_ */
