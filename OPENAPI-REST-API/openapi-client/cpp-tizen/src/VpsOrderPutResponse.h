/*
 * VpsOrderPutResponse.h
 *
 * Response from VPS order validation request
 */

#ifndef _VpsOrderPutResponse_H_
#define _VpsOrderPutResponse_H_


#include <string>
#include "AnyType.h"
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Response from VPS order validation request
 *
 *  \ingroup Models
 *
 */

class VpsOrderPutResponse : public Object {
public:
	/*! \brief Constructor.
	 */
	VpsOrderPutResponse();
	VpsOrderPutResponse(char* str);

	/*! \brief Destructor.
	 */
	virtual ~VpsOrderPutResponse();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	bool getRContinue();

	/*! \brief Set 
	 */
	void setRContinue(bool  r_continue);
	/*! \brief Get 
	 */
	std::list<AnyType> getErrors();

	/*! \brief Set 
	 */
	void setErrors(std::list <AnyType> errors);
	/*! \brief Get 
	 */
	int getCouponCode();

	/*! \brief Set 
	 */
	void setCouponCode(int  coupon_code);
	/*! \brief Get 
	 */
	int getServiceCost();

	/*! \brief Set 
	 */
	void setServiceCost(int  service_cost);
	/*! \brief Get 
	 */
	int getSliceCost();

	/*! \brief Set 
	 */
	void setSliceCost(int  slice_cost);
	/*! \brief Get 
	 */
	int getServiceType();

	/*! \brief Set 
	 */
	void setServiceType(int  service_type);
	/*! \brief Get 
	 */
	int getRepeatSliceCost();

	/*! \brief Set 
	 */
	void setRepeatSliceCost(int  repeat_slice_cost);
	/*! \brief Get 
	 */
	int getOriginalSliceCost();

	/*! \brief Set 
	 */
	void setOriginalSliceCost(int  original_slice_cost);
	/*! \brief Get 
	 */
	int getOriginalCost();

	/*! \brief Set 
	 */
	void setOriginalCost(int  original_cost);
	/*! \brief Get 
	 */
	int getRepeatServiceCost();

	/*! \brief Set 
	 */
	void setRepeatServiceCost(int  repeat_service_cost);
	/*! \brief Get 
	 */
	int getMonthlyServiceCost();

	/*! \brief Set 
	 */
	void setMonthlyServiceCost(int  monthly_service_cost);
	/*! \brief Get 
	 */
	std::string getCustid();

	/*! \brief Set 
	 */
	void setCustid(std::string  custid);
	/*! \brief Get 
	 */
	std::string getOs();

	/*! \brief Set 
	 */
	void setOs(std::string  os);
	/*! \brief Get 
	 */
	std::string getSlices();

	/*! \brief Set 
	 */
	void setSlices(std::string  slices);
	/*! \brief Get 
	 */
	std::string getPlatform();

	/*! \brief Set 
	 */
	void setPlatform(std::string  platform);
	/*! \brief Get 
	 */
	std::string getControlpanel();

	/*! \brief Set 
	 */
	void setControlpanel(std::string  controlpanel);
	/*! \brief Get 
	 */
	int getPeriod();

	/*! \brief Set 
	 */
	void setPeriod(int  period);
	/*! \brief Get 
	 */
	int getLocation();

	/*! \brief Set 
	 */
	void setLocation(int  location);
	/*! \brief Get 
	 */
	std::string getVersion();

	/*! \brief Set 
	 */
	void setVersion(std::string  version);
	/*! \brief Get 
	 */
	std::string getHostname();

	/*! \brief Set 
	 */
	void setHostname(std::string  hostname);
	/*! \brief Get 
	 */
	std::string getCoupon();

	/*! \brief Set 
	 */
	void setCoupon(std::string  coupon);
	/*! \brief Get 
	 */
	std::string getRootpass();

	/*! \brief Set 
	 */
	void setRootpass(std::string  rootpass);

private:
	bool r_continue;
	std::list <AnyType>errors;
	int coupon_code;
	int service_cost;
	int slice_cost;
	int service_type;
	int repeat_slice_cost;
	int original_slice_cost;
	int original_cost;
	int repeat_service_cost;
	int monthly_service_cost;
	std::string custid;
	std::string os;
	std::string slices;
	std::string platform;
	std::string controlpanel;
	int period;
	int location;
	std::string version;
	std::string hostname;
	std::string coupon;
	std::string rootpass;
	void __init();
	void __cleanup();

};
}
}

#endif /* _VpsOrderPutResponse_H_ */
