
/*
 * VpsOrderPostRequest.h
 *
 * request to validate a vps order
 */

#ifndef TINY_CPP_CLIENT_VpsOrderPostRequest_H_
#define TINY_CPP_CLIENT_VpsOrderPostRequest_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief request to validate a vps order
 *
 *  \ingroup Models
 *
 */

class VpsOrderPostRequest{
public:

    /*! \brief Constructor.
	 */
    VpsOrderPostRequest();
    VpsOrderPostRequest(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~VpsOrderPostRequest();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get OS Distribution
	 */
	std::string getOsDistro();

	/*! \brief Set OS Distribution
	 */
	void setOsDistro(std::string osDistro);
	/*! \brief Get Number of slices
	 */
	int getSlices();

	/*! \brief Set Number of slices
	 */
	void setSlices(int slices);
	/*! \brief Get VPS Platform
	 */
	std::string getVpsPlatform();

	/*! \brief Set VPS Platform
	 */
	void setVpsPlatform(std::string vpsPlatform);
	/*! \brief Get Billing Period or Frequency
	 */
	int getPeriod();

	/*! \brief Set Billing Period or Frequency
	 */
	void setPeriod(int period);
	/*! \brief Get Location
	 */
	int getLocation();

	/*! \brief Set Location
	 */
	void setLocation(int location);
	/*! \brief Get OS Version
	 */
	std::string getOsVersion();

	/*! \brief Set OS Version
	 */
	void setOsVersion(std::string osVersion);
	/*! \brief Get The hostname to assign to the VPS
	 */
	std::string getHostname();

	/*! \brief Set The hostname to assign to the VPS
	 */
	void setHostname(std::string hostname);
	/*! \brief Get Root password to assign to the VVPS
	 */
	std::string getRootpass();

	/*! \brief Set Root password to assign to the VVPS
	 */
	void setRootpass(std::string rootpass);
	/*! \brief Get Control Panel
	 */
	std::string getControlpanel();

	/*! \brief Set Control Panel
	 */
	void setControlpanel(std::string controlpanel);
	/*! \brief Get Coupon
	 */
	std::string getCoupon();

	/*! \brief Set Coupon
	 */
	void setCoupon(std::string coupon);
	/*! \brief Get Order comments or notes
	 */
	std::string getComment();

	/*! \brief Set Order comments or notes
	 */
	void setComment(std::string comment);


    private:
    std::string osDistro{};
    int slices{};
    std::string vpsPlatform{};
    int period{};
    int location{};
    std::string osVersion{};
    std::string hostname{};
    std::string rootpass{};
    std::string controlpanel{};
    std::string coupon{};
    std::string comment{};
};
}

#endif /* TINY_CPP_CLIENT_VpsOrderPostRequest_H_ */
