/*
 * ConfigLists.h
 *
 * All available configuration options (CPU, memory, storage, bandwidth, OS, control panel, RAID) for building a dedicated server order.
 */

#ifndef _ConfigLists_H_
#define _ConfigLists_H_


#include <string>
#include "Bandwidth.h"
#include "ControlPanel.h"
#include "Cpu.h"
#include "HardDrive.h"
#include "IpBlock.h"
#include "MemoryOption.h"
#include "OperatingSystem.h"
#include "RaidOption.h"
#include <list>
#include <map>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief All available configuration options (CPU, memory, storage, bandwidth, OS, control panel, RAID) for building a dedicated server order.
 *
 *  \ingroup Models
 *
 */

class ConfigLists : public Object {
public:
	/*! \brief Constructor.
	 */
	ConfigLists();
	ConfigLists(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ConfigLists();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::map<std::string, std::string> getCpuLi();

	/*! \brief Set 
	 */
	void setCpuLi(std::map <std::string, std::string> cpu_li);
	/*! \brief Get 
	 */
	std::map<std::string, std::string> getMemoryLi();

	/*! \brief Set 
	 */
	void setMemoryLi(std::map <std::string, std::string> memory_li);
	/*! \brief Get 
	 */
	std::map<std::string, std::string> getHdLi();

	/*! \brief Set 
	 */
	void setHdLi(std::map <std::string, std::string> hd_li);
	/*! \brief Get 
	 */
	std::map<std::string, std::string> getBandwidthLi();

	/*! \brief Set 
	 */
	void setBandwidthLi(std::map <std::string, std::string> bandwidth_li);
	/*! \brief Get 
	 */
	std::map<std::string, std::string> getIpsLi();

	/*! \brief Set 
	 */
	void setIpsLi(std::map <std::string, std::string> ips_li);
	/*! \brief Get 
	 */
	std::map<std::string, std::string> getOsLi();

	/*! \brief Set 
	 */
	void setOsLi(std::map <std::string, std::string> os_li);
	/*! \brief Get 
	 */
	std::map<std::string, std::string> getCpLi();

	/*! \brief Set 
	 */
	void setCpLi(std::map <std::string, std::string> cp_li);
	/*! \brief Get 
	 */
	std::list<RaidOption> getRaidLi();

	/*! \brief Set 
	 */
	void setRaidLi(std::list <RaidOption> raid_li);

private:
	std::map <std::string, std::string>cpu_li;
	std::map <std::string, std::string>memory_li;
	std::map <std::string, std::string>hd_li;
	std::map <std::string, std::string>bandwidth_li;
	std::map <std::string, std::string>ips_li;
	std::map <std::string, std::string>os_li;
	std::map <std::string, std::string>cp_li;
	std::list <RaidOption>raid_li;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ConfigLists_H_ */
