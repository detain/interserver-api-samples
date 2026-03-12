/*
 * VpsServiceMaster.h
 *
 * Information about the host node (hypervisor) running this VPS, including hardware specs and resource utilization.
 */

#ifndef _VpsServiceMaster_H_
#define _VpsServiceMaster_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Information about the host node (hypervisor) running this VPS, including hardware specs and resource utilization.
 *
 *  \ingroup Models
 *
 */

class VpsServiceMaster : public Object {
public:
	/*! \brief Constructor.
	 */
	VpsServiceMaster();
	VpsServiceMaster(char* str);

	/*! \brief Destructor.
	 */
	virtual ~VpsServiceMaster();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get VPS ID
	 */
	std::string getVpsId();

	/*! \brief Set VPS ID
	 */
	void setVpsId(std::string  vps_id);
	/*! \brief Get VPS name
	 */
	std::string getVpsName();

	/*! \brief Set VPS name
	 */
	void setVpsName(std::string  vps_name);
	/*! \brief Get IP address of the VPS
	 */
	std::string getVpsIp();

	/*! \brief Set IP address of the VPS
	 */
	void setVpsIp(std::string  vps_ip);
	/*! \brief Get VPS type
	 */
	std::string getVpsType();

	/*! \brief Set VPS type
	 */
	void setVpsType(std::string  vps_type);
	/*! \brief Get Hard drive size
	 */
	std::string getVpsHdsize();

	/*! \brief Set Hard drive size
	 */
	void setVpsHdsize(std::string  vps_hdsize);
	/*! \brief Get Free hard drive space
	 */
	std::string getVpsHdfree();

	/*! \brief Set Free hard drive space
	 */
	void setVpsHdfree(std::string  vps_hdfree);
	/*! \brief Get Bits
	 */
	std::string getVpsBits();

	/*! \brief Set Bits
	 */
	void setVpsBits(std::string  vps_bits);
	/*! \brief Get CPU load
	 */
	std::string getVpsLoad();

	/*! \brief Set CPU load
	 */
	void setVpsLoad(std::string  vps_load);
	/*! \brief Get RAM
	 */
	std::string getVpsRam();

	/*! \brief Set RAM
	 */
	void setVpsRam(std::string  vps_ram);
	/*! \brief Get CPU model
	 */
	std::string getVpsCpuModel();

	/*! \brief Set CPU model
	 */
	void setVpsCpuModel(std::string  vps_cpu_model);
	/*! \brief Get CPU frequency in MHz
	 */
	std::string getVpsCpuMhz();

	/*! \brief Set CPU frequency in MHz
	 */
	void setVpsCpuMhz(std::string  vps_cpu_mhz);
	/*! \brief Get Location of the VPS
	 */
	std::string getVpsLocation();

	/*! \brief Set Location of the VPS
	 */
	void setVpsLocation(std::string  vps_location);
	/*! \brief Get Last update date
	 */
	std::string getVpsLastUpdate();

	/*! \brief Set Last update date
	 */
	void setVpsLastUpdate(std::string  vps_last_update);
	/*! \brief Get RAID building status
	 */
	std::string getVpsRaidBuilding();

	/*! \brief Set RAID building status
	 */
	void setVpsRaidBuilding(std::string  vps_raid_building);
	/*! \brief Get Kernel version
	 */
	std::string getVpsKernel();

	/*! \brief Set Kernel version
	 */
	void setVpsKernel(std::string  vps_kernel);
	/*! \brief Get Available
	 */
	std::string getVpsAvailable();

	/*! \brief Set Available
	 */
	void setVpsAvailable(std::string  vps_available);
	/*! \brief Get Number of CPU cores
	 */
	std::string getVpsCores();

	/*! \brief Set Number of CPU cores
	 */
	void setVpsCores(std::string  vps_cores);
	/*! \brief Get I/O wait
	 */
	std::string getVpsIowait();

	/*! \brief Set I/O wait
	 */
	void setVpsIowait(std::string  vps_iowait);
	/*! \brief Get RAID status
	 */
	std::string getVpsRaidStatus();

	/*! \brief Set RAID status
	 */
	void setVpsRaidStatus(std::string  vps_raid_status);
	/*! \brief Get Mounts
	 */
	std::string getVpsMounts();

	/*! \brief Set Mounts
	 */
	void setVpsMounts(std::string  vps_mounts);
	/*! \brief Get Maximum number of servers
	 */
	std::string getVpsServerMax();

	/*! \brief Set Maximum number of servers
	 */
	void setVpsServerMax(std::string  vps_server_max);
	/*! \brief Get Maximum number of server slices
	 */
	std::string getVpsServerMaxSlices();

	/*! \brief Set Maximum number of server slices
	 */
	void setVpsServerMaxSlices(std::string  vps_server_max_slices);
	/*! \brief Get Drive type
	 */
	std::string getVpsDriveType();

	/*! \brief Set Drive type
	 */
	void setVpsDriveType(std::string  vps_drive_type);
	/*! \brief Get Order number
	 */
	std::string getVpsOrder();

	/*! \brief Set Order number
	 */
	void setVpsOrder(std::string  vps_order);

private:
	std::string vps_id;
	std::string vps_name;
	std::string vps_ip;
	std::string vps_type;
	std::string vps_hdsize;
	std::string vps_hdfree;
	std::string vps_bits;
	std::string vps_load;
	std::string vps_ram;
	std::string vps_cpu_model;
	std::string vps_cpu_mhz;
	std::string vps_location;
	std::string vps_last_update;
	std::string vps_raid_building;
	std::string vps_kernel;
	std::string vps_available;
	std::string vps_cores;
	std::string vps_iowait;
	std::string vps_raid_status;
	std::string vps_mounts;
	std::string vps_server_max;
	std::string vps_server_max_slices;
	std::string vps_drive_type;
	std::string vps_order;
	void __init();
	void __cleanup();

};
}
}

#endif /* _VpsServiceMaster_H_ */
