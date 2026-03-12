/*
 * VpsOrder.h
 *
 * Pricing and configuration options for ordering a new VPS, including slice costs by platform and available OS templates.
 */

#ifndef _VpsOrder_H_
#define _VpsOrder_H_


#include <string>
#include "VpsOrder_locationNames.h"
#include "VpsOrder_locationStock.h"
#include "VpsOrder_osNames.h"
#include "VpsOrder_packageCosts.h"
#include "VpsOrder_platformNames.h"
#include "VpsOrder_platformPackages.h"
#include "VpsOrder_serviceTypes.h"
#include "VpsOrder_templates.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Pricing and configuration options for ordering a new VPS, including slice costs by platform and available OS templates.
 *
 *  \ingroup Models
 *
 */

class VpsOrder : public Object {
public:
	/*! \brief Constructor.
	 */
	VpsOrder();
	VpsOrder(char* str);

	/*! \brief Destructor.
	 */
	virtual ~VpsOrder();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Cost of VPS Slice SSD OVZ
	 */
	long long getVpsSliceSsdOvzCost();

	/*! \brief Set Cost of VPS Slice SSD OVZ
	 */
	void setVpsSliceSsdOvzCost(long long  vpsSliceSsdOvzCost);
	/*! \brief Get Cost of VPS Slice OVZ
	 */
	long long getVpsSliceOvzCost();

	/*! \brief Set Cost of VPS Slice OVZ
	 */
	void setVpsSliceOvzCost(long long  vpsSliceOvzCost);
	/*! \brief Get Cost of VPS Slice SSD Virtuozzo
	 */
	long long getVpsSliceSsdVirtuozzoCost();

	/*! \brief Set Cost of VPS Slice SSD Virtuozzo
	 */
	void setVpsSliceSsdVirtuozzoCost(long long  vpsSliceSsdVirtuozzoCost);
	/*! \brief Get Cost of VPS Slice Virtuozzo
	 */
	long long getVpsSliceVirtuozzoCost();

	/*! \brief Set Cost of VPS Slice Virtuozzo
	 */
	void setVpsSliceVirtuozzoCost(long long  vpsSliceVirtuozzoCost);
	/*! \brief Get Cost of VPS Slice HyperV
	 */
	long long getVpsSliceHypervCost();

	/*! \brief Set Cost of VPS Slice HyperV
	 */
	void setVpsSliceHypervCost(long long  vpsSliceHypervCost);
	/*! \brief Get Cost of VPS Slice VMware
	 */
	long long getVpsSliceVmwareCost();

	/*! \brief Set Cost of VPS Slice VMware
	 */
	void setVpsSliceVmwareCost(long long  vpsSliceVmwareCost);
	/*! \brief Get Cost of VPS Slice LXC
	 */
	long long getVpsSliceLxcCost();

	/*! \brief Set Cost of VPS Slice LXC
	 */
	void setVpsSliceLxcCost(long long  vpsSliceLxcCost);
	/*! \brief Get Cost of VPS Slice Xen
	 */
	long long getVpsSliceXenCost();

	/*! \brief Set Cost of VPS Slice Xen
	 */
	void setVpsSliceXenCost(long long  vpsSliceXenCost);
	/*! \brief Get Cost of VPS Slice KVM L
	 */
	long long getVpsSliceKvmLCost();

	/*! \brief Set Cost of VPS Slice KVM L
	 */
	void setVpsSliceKvmLCost(long long  vpsSliceKvmLCost);
	/*! \brief Get Cost of VPS Slice KVM Storage
	 */
	long long getVpsSliceKvmStorageCost();

	/*! \brief Set Cost of VPS Slice KVM Storage
	 */
	void setVpsSliceKvmStorageCost(long long  vpsSliceKvmStorageCost);
	/*! \brief Get Cost of VPS in NY
	 */
	long long getVpsNyCost();

	/*! \brief Set Cost of VPS in NY
	 */
	void setVpsNyCost(long long  vpsNyCost);
	/*! \brief Get Cost of VPS Slice KVM Windows
	 */
	long long getVpsSliceKvmWCost();

	/*! \brief Set Cost of VPS Slice KVM Windows
	 */
	void setVpsSliceKvmWCost(long long  vpsSliceKvmWCost);
	/*! \brief Get Cost of cPanel
	 */
	long long getCpanelCost();

	/*! \brief Set Cost of cPanel
	 */
	void setCpanelCost(long long  cpanelCost);
	/*! \brief Get Cost of DirectAdmin (DA)
	 */
	long long getDaCost();

	/*! \brief Set Cost of DirectAdmin (DA)
	 */
	void setDaCost(long long  daCost);
	/*! \brief Get RAM for VPS Slice
	 */
	std::string getRamSlice();

	/*! \brief Set RAM for VPS Slice
	 */
	void setRamSlice(std::string  ramSlice);
	/*! \brief Get Hard Disk for VPS Slice
	 */
	std::string getHdSlice();

	/*! \brief Set Hard Disk for VPS Slice
	 */
	void setHdSlice(std::string  hdSlice);
	/*! \brief Get Storage Hard Disk for VPS Slice
	 */
	std::string getHdStorageSlice();

	/*! \brief Set Storage Hard Disk for VPS Slice
	 */
	void setHdStorageSlice(std::string  hdStorageSlice);
	/*! \brief Get Bandwidth for VPS Slice
	 */
	std::string getBwSlice();

	/*! \brief Set Bandwidth for VPS Slice
	 */
	void setBwSlice(std::string  bwSlice);
	/*! \brief Get Bandwidth Type
	 */
	std::string getBwType();

	/*! \brief Set Bandwidth Type
	 */
	void setBwType(std::string  bwType);
	/*! \brief Get Total Bandwidth
	 */
	long long getBwTotal();

	/*! \brief Set Total Bandwidth
	 */
	void setBwTotal(long long  bwTotal);
	/*! \brief Get Maximum Slices
	 */
	std::string getMaxSlices();

	/*! \brief Set Maximum Slices
	 */
	void setMaxSlices(std::string  maxSlices);
	/*! \brief Get 
	 */
	VpsOrder_platformPackages getPlatformPackages();

	/*! \brief Set 
	 */
	void setPlatformPackages(VpsOrder_platformPackages  platformPackages);
	/*! \brief Get 
	 */
	VpsOrder_platformNames getPlatformNames();

	/*! \brief Set 
	 */
	void setPlatformNames(VpsOrder_platformNames  platformNames);
	/*! \brief Get 
	 */
	VpsOrder_packageCosts getPackageCosts();

	/*! \brief Set 
	 */
	void setPackageCosts(VpsOrder_packageCosts  packageCosts);
	/*! \brief Get 
	 */
	VpsOrder_locationStock getLocationStock();

	/*! \brief Set 
	 */
	void setLocationStock(VpsOrder_locationStock  locationStock);
	/*! \brief Get 
	 */
	VpsOrder_locationNames getLocationNames();

	/*! \brief Set 
	 */
	void setLocationNames(VpsOrder_locationNames  locationNames);
	/*! \brief Get 
	 */
	VpsOrder_osNames getOsNames();

	/*! \brief Set 
	 */
	void setOsNames(VpsOrder_osNames  osNames);
	/*! \brief Get 
	 */
	VpsOrder_templates getTemplates();

	/*! \brief Set 
	 */
	void setTemplates(VpsOrder_templates  templates);
	/*! \brief Get 
	 */
	VpsOrder_serviceTypes getServiceTypes();

	/*! \brief Set 
	 */
	void setServiceTypes(VpsOrder_serviceTypes  serviceTypes);
	/*! \brief Get Currency
	 */
	std::string getCurrency();

	/*! \brief Set Currency
	 */
	void setCurrency(std::string  currency);
	/*! \brief Get Currency Symbol
	 */
	std::string getCurrencySymbol();

	/*! \brief Set Currency Symbol
	 */
	void setCurrencySymbol(std::string  currencySymbol);

private:
	long long vpsSliceSsdOvzCost;
	long long vpsSliceOvzCost;
	long long vpsSliceSsdVirtuozzoCost;
	long long vpsSliceVirtuozzoCost;
	long long vpsSliceHypervCost;
	long long vpsSliceVmwareCost;
	long long vpsSliceLxcCost;
	long long vpsSliceXenCost;
	long long vpsSliceKvmLCost;
	long long vpsSliceKvmStorageCost;
	long long vpsNyCost;
	long long vpsSliceKvmWCost;
	long long cpanelCost;
	long long daCost;
	std::string ramSlice;
	std::string hdSlice;
	std::string hdStorageSlice;
	std::string bwSlice;
	std::string bwType;
	long long bwTotal;
	std::string maxSlices;
	VpsOrder_platformPackages platformPackages;
	VpsOrder_platformNames platformNames;
	VpsOrder_packageCosts packageCosts;
	VpsOrder_locationStock locationStock;
	VpsOrder_locationNames locationNames;
	VpsOrder_osNames osNames;
	VpsOrder_templates templates;
	VpsOrder_serviceTypes serviceTypes;
	std::string currency;
	std::string currencySymbol;
	void __init();
	void __cleanup();

};
}
}

#endif /* _VpsOrder_H_ */
