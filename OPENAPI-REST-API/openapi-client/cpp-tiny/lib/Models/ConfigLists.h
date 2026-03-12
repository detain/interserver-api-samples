
/*
 * ConfigLists.h
 *
 * All available configuration options (CPU, memory, storage, bandwidth, OS, control panel, RAID) for building a dedicated server order.
 */

#ifndef TINY_CPP_CLIENT_ConfigLists_H_
#define TINY_CPP_CLIENT_ConfigLists_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
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

namespace Tiny {


/*! \brief All available configuration options (CPU, memory, storage, bandwidth, OS, control panel, RAID) for building a dedicated server order.
 *
 *  \ingroup Models
 *
 */

class ConfigLists{
public:

    /*! \brief Constructor.
	 */
    ConfigLists();
    ConfigLists(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ConfigLists();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::map<std::string, Cpu> getCpuLi();

	/*! \brief Set 
	 */
	void setCpuLi(std::map<std::string, Cpu> cpu_li);
	/*! \brief Get 
	 */
	std::map<std::string, std::map<std::string, MemoryOption>> getMemoryLi();

	/*! \brief Set 
	 */
	void setMemoryLi(std::map<std::string, std::map<std::string, MemoryOption>> memory_li);
	/*! \brief Get 
	 */
	std::map<std::string, std::map<std::string, HardDrive>> getHdLi();

	/*! \brief Set 
	 */
	void setHdLi(std::map<std::string, std::map<std::string, HardDrive>> hd_li);
	/*! \brief Get 
	 */
	std::map<std::string, Bandwidth> getBandwidthLi();

	/*! \brief Set 
	 */
	void setBandwidthLi(std::map<std::string, Bandwidth> bandwidth_li);
	/*! \brief Get 
	 */
	std::map<std::string, IpBlock> getIpsLi();

	/*! \brief Set 
	 */
	void setIpsLi(std::map<std::string, IpBlock> ips_li);
	/*! \brief Get 
	 */
	std::map<std::string, OperatingSystem> getOsLi();

	/*! \brief Set 
	 */
	void setOsLi(std::map<std::string, OperatingSystem> os_li);
	/*! \brief Get 
	 */
	std::map<std::string, ControlPanel> getCpLi();

	/*! \brief Set 
	 */
	void setCpLi(std::map<std::string, ControlPanel> cp_li);
	/*! \brief Get 
	 */
	std::list<RaidOption> getRaidLi();

	/*! \brief Set 
	 */
	void setRaidLi(std::list<RaidOption> raid_li);


    private:
    std::map<std::string, Cpu> cpu_li;
    std::map<std::string, std::map<std::string, MemoryOption>> memory_li;
    std::map<std::string, std::map<std::string, HardDrive>> hd_li;
    std::map<std::string, Bandwidth> bandwidth_li;
    std::map<std::string, IpBlock> ips_li;
    std::map<std::string, OperatingSystem> os_li;
    std::map<std::string, ControlPanel> cp_li;
    std::list<RaidOption> raid_li;
};
}

#endif /* TINY_CPP_CLIENT_ConfigLists_H_ */
