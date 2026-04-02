/*
 * QuickserverServiceMaster.h
 *
 * Information about the host node running this QuickServer, including hardware specs and resource utilization.
 */

#ifndef _QuickserverServiceMaster_H_
#define _QuickserverServiceMaster_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Information about the host node running this QuickServer, including hardware specs and resource utilization.
 *
 *  \ingroup Models
 *
 */

class QuickserverServiceMaster : public Object {
public:
	/*! \brief Constructor.
	 */
	QuickserverServiceMaster();
	QuickserverServiceMaster(char* str);

	/*! \brief Destructor.
	 */
	virtual ~QuickserverServiceMaster();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Quickserver ID
	 */
	std::string getQsId();

	/*! \brief Set Quickserver ID
	 */
	void setQsId(std::string  qs_id);
	/*! \brief Get Quickserver name
	 */
	std::string getQsName();

	/*! \brief Set Quickserver name
	 */
	void setQsName(std::string  qs_name);
	/*! \brief Get IP address
	 */
	std::string getQsIp();

	/*! \brief Set IP address
	 */
	void setQsIp(std::string  qs_ip);
	/*! \brief Get Type
	 */
	std::string getQsType();

	/*! \brief Set Type
	 */
	void setQsType(std::string  qs_type);
	/*! \brief Get HDD size
	 */
	std::string getQsHdsize();

	/*! \brief Set HDD size
	 */
	void setQsHdsize(std::string  qs_hdsize);
	/*! \brief Get Free HDD space
	 */
	std::string getQsHdfree();

	/*! \brief Set Free HDD space
	 */
	void setQsHdfree(std::string  qs_hdfree);
	/*! \brief Get Bits
	 */
	std::string getQsBits();

	/*! \brief Set Bits
	 */
	void setQsBits(std::string  qs_bits);
	/*! \brief Get Load
	 */
	std::string getQsLoad();

	/*! \brief Set Load
	 */
	void setQsLoad(std::string  qs_load);
	/*! \brief Get RAM information
	 */
	std::string getQsRam();

	/*! \brief Set RAM information
	 */
	void setQsRam(std::string  qs_ram);
	/*! \brief Get CPU model
	 */
	std::string getQsCpuModel();

	/*! \brief Set CPU model
	 */
	void setQsCpuModel(std::string  qs_cpu_model);
	/*! \brief Get CPU frequency
	 */
	std::string getQsCpuMhz();

	/*! \brief Set CPU frequency
	 */
	void setQsCpuMhz(std::string  qs_cpu_mhz);
	/*! \brief Get Location
	 */
	std::string getQsLocation();

	/*! \brief Set Location
	 */
	void setQsLocation(std::string  qs_location);
	/*! \brief Get Available information
	 */
	std::string getQsAvailable();

	/*! \brief Set Available information
	 */
	void setQsAvailable(std::string  qs_available);
	/*! \brief Get Cost
	 */
	std::string getQsCost();

	/*! \brief Set Cost
	 */
	void setQsCost(std::string  qs_cost);
	/*! \brief Get Last update date
	 */
	std::string getQsLastUpdate();

	/*! \brief Set Last update date
	 */
	void setQsLastUpdate(std::string  qs_last_update);
	/*! \brief Get Number of cores
	 */
	std::string getQsCores();

	/*! \brief Set Number of cores
	 */
	void setQsCores(std::string  qs_cores);
	/*! \brief Get I/O wait
	 */
	std::string getQsIowait();

	/*! \brief Set I/O wait
	 */
	void setQsIowait(std::string  qs_iowait);
	/*! \brief Get RAID status
	 */
	std::string getQsRaidStatus();

	/*! \brief Set RAID status
	 */
	void setQsRaidStatus(std::string  qs_raid_status);
	/*! \brief Get Drive type
	 */
	std::string getQsDriveType();

	/*! \brief Set Drive type
	 */
	void setQsDriveType(std::string  qs_drive_type);
	/*! \brief Get Order number
	 */
	std::string getQsOrder();

	/*! \brief Set Order number
	 */
	void setQsOrder(std::string  qs_order);
	/*! \brief Get RAID building information
	 */
	std::string getQsRaidBuilding();

	/*! \brief Set RAID building information
	 */
	void setQsRaidBuilding(std::string  qs_raid_building);
	/*! \brief Get Kernel version
	 */
	std::string getQsKernel();

	/*! \brief Set Kernel version
	 */
	void setQsKernel(std::string  qs_kernel);
	/*! \brief Get IOPing information
	 */
	std::string getQsIoping();

	/*! \brief Set IOPing information
	 */
	void setQsIoping(std::string  qs_ioping);
	/*! \brief Get Speed information
	 */
	std::string getQsSpeed();

	/*! \brief Set Speed information
	 */
	void setQsSpeed(std::string  qs_speed);
	/*! \brief Get Distribution name
	 */
	std::string getQsDistro();

	/*! \brief Set Distribution name
	 */
	void setQsDistro(std::string  qs_distro);
	/*! \brief Get Distribution version
	 */
	std::string getQsDistroVersion();

	/*! \brief Set Distribution version
	 */
	void setQsDistroVersion(std::string  qs_distro_version);
	/*! \brief Get Bytes/sec in
	 */
	std::string getQsBytesSecIn();

	/*! \brief Set Bytes/sec in
	 */
	void setQsBytesSecIn(std::string  qs_bytes_sec_in);
	/*! \brief Get Bytes/sec out
	 */
	std::string getQsBytesSecOut();

	/*! \brief Set Bytes/sec out
	 */
	void setQsBytesSecOut(std::string  qs_bytes_sec_out);
	/*! \brief Get Packets/sec in
	 */
	std::string getQsPacketsSecIn();

	/*! \brief Set Packets/sec in
	 */
	void setQsPacketsSecIn(std::string  qs_packets_sec_in);
	/*! \brief Get Packets/sec out
	 */
	std::string getQsPacketsSecOut();

	/*! \brief Set Packets/sec out
	 */
	void setQsPacketsSecOut(std::string  qs_packets_sec_out);
	/*! \brief Get Last install time (null)
	 */
	std::string getQsLastInstallTime();

	/*! \brief Set Last install time (null)
	 */
	void setQsLastInstallTime(std::string  qs_last_install_time);
	/*! \brief Get Partitions information (null)
	 */
	std::string getQsPartitions();

	/*! \brief Set Partitions information (null)
	 */
	void setQsPartitions(std::string  qs_partitions);
	/*! \brief Get CPU flags
	 */
	std::string getQsCpuFlags();

	/*! \brief Set CPU flags
	 */
	void setQsCpuFlags(std::string  qs_cpu_flags);

private:
	std::string qs_id;
	std::string qs_name;
	std::string qs_ip;
	std::string qs_type;
	std::string qs_hdsize;
	std::string qs_hdfree;
	std::string qs_bits;
	std::string qs_load;
	std::string qs_ram;
	std::string qs_cpu_model;
	std::string qs_cpu_mhz;
	std::string qs_location;
	std::string qs_available;
	std::string qs_cost;
	std::string qs_last_update;
	std::string qs_cores;
	std::string qs_iowait;
	std::string qs_raid_status;
	std::string qs_drive_type;
	std::string qs_order;
	std::string qs_raid_building;
	std::string qs_kernel;
	std::string qs_ioping;
	std::string qs_speed;
	std::string qs_distro;
	std::string qs_distro_version;
	std::string qs_bytes_sec_in;
	std::string qs_bytes_sec_out;
	std::string qs_packets_sec_in;
	std::string qs_packets_sec_out;
	std::string qs_last_install_time;
	std::string qs_partitions;
	std::string qs_cpu_flags;
	void __init();
	void __cleanup();

};
}
}

#endif /* _QuickserverServiceMaster_H_ */
