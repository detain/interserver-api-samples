
/*
 * VpsOrder.h
 *
 * Pricing and configuration options for ordering a new VPS, including slice costs by platform and available OS templates.
 */

#ifndef TINY_CPP_CLIENT_VpsOrder_H_
#define TINY_CPP_CLIENT_VpsOrder_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "VpsOrder_locationNames.h"
#include "VpsOrder_locationStock.h"
#include "VpsOrder_osNames.h"
#include "VpsOrder_packageCosts.h"
#include "VpsOrder_platformNames.h"
#include "VpsOrder_platformPackages.h"
#include "VpsOrder_serviceTypes.h"
#include "VpsOrder_templates.h"

namespace Tiny {


/*! \brief Pricing and configuration options for ordering a new VPS, including slice costs by platform and available OS templates.
 *
 *  \ingroup Models
 *
 */

class VpsOrder{
public:

    /*! \brief Constructor.
	 */
    VpsOrder();
    VpsOrder(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~VpsOrder();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Cost of VPS Slice SSD OVZ
	 */
	long getVpsSliceSsdOvzCost();

	/*! \brief Set Cost of VPS Slice SSD OVZ
	 */
	void setVpsSliceSsdOvzCost(long vpsSliceSsdOvzCost);
	/*! \brief Get Cost of VPS Slice OVZ
	 */
	long getVpsSliceOvzCost();

	/*! \brief Set Cost of VPS Slice OVZ
	 */
	void setVpsSliceOvzCost(long vpsSliceOvzCost);
	/*! \brief Get Cost of VPS Slice SSD Virtuozzo
	 */
	long getVpsSliceSsdVirtuozzoCost();

	/*! \brief Set Cost of VPS Slice SSD Virtuozzo
	 */
	void setVpsSliceSsdVirtuozzoCost(long vpsSliceSsdVirtuozzoCost);
	/*! \brief Get Cost of VPS Slice Virtuozzo
	 */
	long getVpsSliceVirtuozzoCost();

	/*! \brief Set Cost of VPS Slice Virtuozzo
	 */
	void setVpsSliceVirtuozzoCost(long vpsSliceVirtuozzoCost);
	/*! \brief Get Cost of VPS Slice HyperV
	 */
	long getVpsSliceHypervCost();

	/*! \brief Set Cost of VPS Slice HyperV
	 */
	void setVpsSliceHypervCost(long vpsSliceHypervCost);
	/*! \brief Get Cost of VPS Slice VMware
	 */
	long getVpsSliceVmwareCost();

	/*! \brief Set Cost of VPS Slice VMware
	 */
	void setVpsSliceVmwareCost(long vpsSliceVmwareCost);
	/*! \brief Get Cost of VPS Slice LXC
	 */
	long getVpsSliceLxcCost();

	/*! \brief Set Cost of VPS Slice LXC
	 */
	void setVpsSliceLxcCost(long vpsSliceLxcCost);
	/*! \brief Get Cost of VPS Slice Xen
	 */
	long getVpsSliceXenCost();

	/*! \brief Set Cost of VPS Slice Xen
	 */
	void setVpsSliceXenCost(long vpsSliceXenCost);
	/*! \brief Get Cost of VPS Slice KVM L
	 */
	long getVpsSliceKvmLCost();

	/*! \brief Set Cost of VPS Slice KVM L
	 */
	void setVpsSliceKvmLCost(long vpsSliceKvmLCost);
	/*! \brief Get Cost of VPS Slice KVM Storage
	 */
	long getVpsSliceKvmStorageCost();

	/*! \brief Set Cost of VPS Slice KVM Storage
	 */
	void setVpsSliceKvmStorageCost(long vpsSliceKvmStorageCost);
	/*! \brief Get Cost of VPS in NY
	 */
	long getVpsNyCost();

	/*! \brief Set Cost of VPS in NY
	 */
	void setVpsNyCost(long vpsNyCost);
	/*! \brief Get Cost of VPS Slice KVM Windows
	 */
	long getVpsSliceKvmWCost();

	/*! \brief Set Cost of VPS Slice KVM Windows
	 */
	void setVpsSliceKvmWCost(long vpsSliceKvmWCost);
	/*! \brief Get Cost of cPanel
	 */
	long getCpanelCost();

	/*! \brief Set Cost of cPanel
	 */
	void setCpanelCost(long cpanelCost);
	/*! \brief Get Cost of DirectAdmin (DA)
	 */
	long getDaCost();

	/*! \brief Set Cost of DirectAdmin (DA)
	 */
	void setDaCost(long daCost);
	/*! \brief Get RAM for VPS Slice
	 */
	std::string getRamSlice();

	/*! \brief Set RAM for VPS Slice
	 */
	void setRamSlice(std::string ramSlice);
	/*! \brief Get Hard Disk for VPS Slice
	 */
	std::string getHdSlice();

	/*! \brief Set Hard Disk for VPS Slice
	 */
	void setHdSlice(std::string hdSlice);
	/*! \brief Get Storage Hard Disk for VPS Slice
	 */
	std::string getHdStorageSlice();

	/*! \brief Set Storage Hard Disk for VPS Slice
	 */
	void setHdStorageSlice(std::string hdStorageSlice);
	/*! \brief Get Bandwidth for VPS Slice
	 */
	std::string getBwSlice();

	/*! \brief Set Bandwidth for VPS Slice
	 */
	void setBwSlice(std::string bwSlice);
	/*! \brief Get Bandwidth Type
	 */
	std::string getBwType();

	/*! \brief Set Bandwidth Type
	 */
	void setBwType(std::string bwType);
	/*! \brief Get Total Bandwidth
	 */
	long getBwTotal();

	/*! \brief Set Total Bandwidth
	 */
	void setBwTotal(long bwTotal);
	/*! \brief Get Maximum Slices
	 */
	std::string getMaxSlices();

	/*! \brief Set Maximum Slices
	 */
	void setMaxSlices(std::string maxSlices);
	/*! \brief Get 
	 */
	VpsOrder_platformPackages getPlatformPackages();

	/*! \brief Set 
	 */
	void setPlatformPackages(VpsOrder_platformPackages platformPackages);
	/*! \brief Get 
	 */
	VpsOrder_platformNames getPlatformNames();

	/*! \brief Set 
	 */
	void setPlatformNames(VpsOrder_platformNames platformNames);
	/*! \brief Get 
	 */
	VpsOrder_packageCosts getPackageCosts();

	/*! \brief Set 
	 */
	void setPackageCosts(VpsOrder_packageCosts packageCosts);
	/*! \brief Get 
	 */
	VpsOrder_locationStock getLocationStock();

	/*! \brief Set 
	 */
	void setLocationStock(VpsOrder_locationStock locationStock);
	/*! \brief Get 
	 */
	VpsOrder_locationNames getLocationNames();

	/*! \brief Set 
	 */
	void setLocationNames(VpsOrder_locationNames locationNames);
	/*! \brief Get 
	 */
	VpsOrder_osNames getOsNames();

	/*! \brief Set 
	 */
	void setOsNames(VpsOrder_osNames osNames);
	/*! \brief Get 
	 */
	VpsOrder_templates getTemplates();

	/*! \brief Set 
	 */
	void setTemplates(VpsOrder_templates templates);
	/*! \brief Get 
	 */
	VpsOrder_serviceTypes getServiceTypes();

	/*! \brief Set 
	 */
	void setServiceTypes(VpsOrder_serviceTypes serviceTypes);
	/*! \brief Get Currency
	 */
	std::string getCurrency();

	/*! \brief Set Currency
	 */
	void setCurrency(std::string currency);
	/*! \brief Get Currency Symbol
	 */
	std::string getCurrencySymbol();

	/*! \brief Set Currency Symbol
	 */
	void setCurrencySymbol(std::string currencySymbol);


    private:
    long vpsSliceSsdOvzCost{};
    long vpsSliceOvzCost{};
    long vpsSliceSsdVirtuozzoCost{};
    long vpsSliceVirtuozzoCost{};
    long vpsSliceHypervCost{};
    long vpsSliceVmwareCost{};
    long vpsSliceLxcCost{};
    long vpsSliceXenCost{};
    long vpsSliceKvmLCost{};
    long vpsSliceKvmStorageCost{};
    long vpsNyCost{};
    long vpsSliceKvmWCost{};
    long cpanelCost{};
    long daCost{};
    std::string ramSlice{};
    std::string hdSlice{};
    std::string hdStorageSlice{};
    std::string bwSlice{};
    std::string bwType{};
    long bwTotal{};
    std::string maxSlices{};
    VpsOrder_platformPackages platformPackages;
    VpsOrder_platformNames platformNames;
    VpsOrder_packageCosts packageCosts;
    VpsOrder_locationStock locationStock;
    VpsOrder_locationNames locationNames;
    VpsOrder_osNames osNames;
    VpsOrder_templates templates;
    VpsOrder_serviceTypes serviceTypes;
    std::string currency{};
    std::string currencySymbol{};
};
}

#endif /* TINY_CPP_CLIENT_VpsOrder_H_ */
