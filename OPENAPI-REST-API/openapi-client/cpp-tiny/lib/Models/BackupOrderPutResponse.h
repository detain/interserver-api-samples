
/*
 * BackupOrderPutResponse.h
 *
 * Backup Order validation response
 */

#ifndef TINY_CPP_CLIENT_BackupOrderPutResponse_H_
#define TINY_CPP_CLIENT_BackupOrderPutResponse_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include <list>

namespace Tiny {


/*! \brief Backup Order validation response
 *
 *  \ingroup Models
 *
 */

class BackupOrderPutResponse{
public:

    /*! \brief Constructor.
	 */
    BackupOrderPutResponse();
    BackupOrderPutResponse(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~BackupOrderPutResponse();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	bool isRContinue();

	/*! \brief Set 
	 */
	void setRContinue(bool r_continue);
	/*! \brief Get 
	 */
	std::list<std::string> getErrors();

	/*! \brief Set 
	 */
	void setErrors(std::list<std::string> errors);
	/*! \brief Get 
	 */
	int getServiceType();

	/*! \brief Set 
	 */
	void setServiceType(int serviceType);
	/*! \brief Get 
	 */
	std::string getServiceCost();

	/*! \brief Set 
	 */
	void setServiceCost(std::string serviceCost);
	/*! \brief Get 
	 */
	std::string getOriginalCost();

	/*! \brief Set 
	 */
	void setOriginalCost(std::string originalCost);
	/*! \brief Get 
	 */
	std::string getRepeatServiceCost();

	/*! \brief Set 
	 */
	void setRepeatServiceCost(std::string repeatServiceCost);
	/*! \brief Get 
	 */
	std::string getHostname();

	/*! \brief Set 
	 */
	void setHostname(std::string hostname);
	/*! \brief Get 
	 */
	std::string getPassword();

	/*! \brief Set 
	 */
	void setPassword(std::string password);
	/*! \brief Get 
	 */
	std::string getCoupon();

	/*! \brief Set 
	 */
	void setCoupon(std::string coupon);
	/*! \brief Get 
	 */
	int getCouponCode();

	/*! \brief Set 
	 */
	void setCouponCode(int couponCode);


    private:
    bool r_continue{};
    std::list<std::string> errors;
    int serviceType{};
    std::string serviceCost{};
    std::string originalCost{};
    std::string repeatServiceCost{};
    std::string hostname{};
    std::string password{};
    std::string coupon{};
    int couponCode{};
};
}

#endif /* TINY_CPP_CLIENT_BackupOrderPutResponse_H_ */
