
/*
 * PlaceScrubOrder_201_response_order_details.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_PlaceScrubOrder_201_response_order_details_H_
#define TINY_CPP_CLIENT_PlaceScrubOrder_201_response_order_details_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "PlaceScrubOrder_201_response_order_details_cj_params.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class PlaceScrubOrder_201_response_order_details{
public:

    /*! \brief Constructor.
	 */
    PlaceScrubOrder_201_response_order_details();
    PlaceScrubOrder_201_response_order_details(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~PlaceScrubOrder_201_response_order_details();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	int getTotalCost();

	/*! \brief Set 
	 */
	void setTotalCost(int total_cost);
	/*! \brief Get 
	 */
	int getServiceId();

	/*! \brief Set 
	 */
	void setServiceId(int service_id);
	/*! \brief Get 
	 */
	int getInvoiceId();

	/*! \brief Set 
	 */
	void setInvoiceId(int invoice_id);
	/*! \brief Get 
	 */
	std::string getInvoiceDescription();

	/*! \brief Set 
	 */
	void setInvoiceDescription(std::string invoice_description);
	/*! \brief Get 
	 */
	PlaceScrubOrder_201_response_order_details_cj_params getCjParams();

	/*! \brief Set 
	 */
	void setCjParams(PlaceScrubOrder_201_response_order_details_cj_params cj_params);


    private:
    int total_cost{};
    int service_id{};
    int invoice_id{};
    std::string invoice_description{};
    PlaceScrubOrder_201_response_order_details_cj_params cj_params;
};
}

#endif /* TINY_CPP_CLIENT_PlaceScrubOrder_201_response_order_details_H_ */
