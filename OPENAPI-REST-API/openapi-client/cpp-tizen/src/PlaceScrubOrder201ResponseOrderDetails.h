/*
 * PlaceScrubOrder_201_response_order_details.h
 *
 * 
 */

#ifndef _PlaceScrubOrder_201_response_order_details_H_
#define _PlaceScrubOrder_201_response_order_details_H_


#include <string>
#include "PlaceScrubOrder_201_response_order_details_cj_params.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class PlaceScrubOrder_201_response_order_details : public Object {
public:
	/*! \brief Constructor.
	 */
	PlaceScrubOrder_201_response_order_details();
	PlaceScrubOrder_201_response_order_details(char* str);

	/*! \brief Destructor.
	 */
	virtual ~PlaceScrubOrder_201_response_order_details();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	int getTotalCost();

	/*! \brief Set 
	 */
	void setTotalCost(int  total_cost);
	/*! \brief Get 
	 */
	int getServiceId();

	/*! \brief Set 
	 */
	void setServiceId(int  service_id);
	/*! \brief Get 
	 */
	int getInvoiceId();

	/*! \brief Set 
	 */
	void setInvoiceId(int  invoice_id);
	/*! \brief Get 
	 */
	std::string getInvoiceDescription();

	/*! \brief Set 
	 */
	void setInvoiceDescription(std::string  invoice_description);
	/*! \brief Get 
	 */
	PlaceScrubOrder_201_response_order_details_cj_params getCjParams();

	/*! \brief Set 
	 */
	void setCjParams(PlaceScrubOrder_201_response_order_details_cj_params  cj_params);

private:
	int total_cost;
	int service_id;
	int invoice_id;
	std::string invoice_description;
	PlaceScrubOrder_201_response_order_details_cj_params cj_params;
	void __init();
	void __cleanup();

};
}
}

#endif /* _PlaceScrubOrder_201_response_order_details_H_ */
