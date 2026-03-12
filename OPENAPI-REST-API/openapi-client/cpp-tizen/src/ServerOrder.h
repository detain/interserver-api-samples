/*
 * ServerOrder.h
 *
 * Object representing a server order.
 */

#ifndef _ServerOrder_H_
#define _ServerOrder_H_


#include <string>
#include "ServerOrderConfigIds.h"
#include "ServerOrderFieldLabels.h"
#include "ServerOrderFormValues.h"
#include "ServerOrderRAID.h"
#include "ServerOrder_bandwidth_li.h"
#include "ServerOrder_cp_li.h"
#include "ServerOrder_cpu_li.h"
#include "ServerOrder_ips_li.h"
#include "ServerOrder_memory_li.h"
#include "ServerOrder_os_li.h"
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Object representing a server order.
 *
 *  \ingroup Models
 *
 */

class ServerOrder : public Object {
public:
	/*! \brief Constructor.
	 */
	ServerOrder();
	ServerOrder(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ServerOrder();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	ServerOrderFormValues getFormValues();

	/*! \brief Set 
	 */
	void setFormValues(ServerOrderFormValues  form_values);
	/*! \brief Get 
	 */
	ServerOrderConfigIds getConfigIds();

	/*! \brief Set 
	 */
	void setConfigIds(ServerOrderConfigIds  config_ids);
	/*! \brief Get Number of CPUs for the server order.
	 */
	int getCpu();

	/*! \brief Set Number of CPUs for the server order.
	 */
	void setCpu(int  cpu);
	/*! \brief Get 
	 */
	ServerOrderFieldLabels getFieldLabel();

	/*! \brief Set 
	 */
	void setFieldLabel(ServerOrderFieldLabels  field_label);
	/*! \brief Get 
	 */
	ServerOrder_cpu_li getCpuLi();

	/*! \brief Set 
	 */
	void setCpuLi(ServerOrder_cpu_li  cpu_li);
	/*! \brief Get 
	 */
	ServerOrder_memory_li getMemoryLi();

	/*! \brief Set 
	 */
	void setMemoryLi(ServerOrder_memory_li  memory_li);
	/*! \brief Get 
	 */
	ServerOrder_bandwidth_li getBandwidthLi();

	/*! \brief Set 
	 */
	void setBandwidthLi(ServerOrder_bandwidth_li  bandwidth_li);
	/*! \brief Get 
	 */
	ServerOrder_ips_li getIpsLi();

	/*! \brief Set 
	 */
	void setIpsLi(ServerOrder_ips_li  ips_li);
	/*! \brief Get 
	 */
	ServerOrder_os_li getOsLi();

	/*! \brief Set 
	 */
	void setOsLi(ServerOrder_os_li  os_li);
	/*! \brief Get 
	 */
	ServerOrder_cp_li getCpLi();

	/*! \brief Set 
	 */
	void setCpLi(ServerOrder_cp_li  cp_li);
	/*! \brief Get RAID options for the server order.
	 */
	std::list<ServerOrderRAID> getRaidLi();

	/*! \brief Set RAID options for the server order.
	 */
	void setRaidLi(std::list <ServerOrderRAID> raid_li);

private:
	ServerOrderFormValues form_values;
	ServerOrderConfigIds config_ids;
	int cpu;
	ServerOrderFieldLabels field_label;
	ServerOrder_cpu_li cpu_li;
	ServerOrder_memory_li memory_li;
	ServerOrder_bandwidth_li bandwidth_li;
	ServerOrder_ips_li ips_li;
	ServerOrder_os_li os_li;
	ServerOrder_cp_li cp_li;
	std::list <ServerOrderRAID>raid_li;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ServerOrder_H_ */
