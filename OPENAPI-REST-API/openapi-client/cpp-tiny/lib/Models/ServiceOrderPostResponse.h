
/*
 * ServiceOrderPostResponse.h
 *
 * Generic response returned after placing a service order. Contains invoice IDs for payment and the new service ID.
 */

#ifndef TINY_CPP_CLIENT_ServiceOrderPostResponse_H_
#define TINY_CPP_CLIENT_ServiceOrderPostResponse_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include <list>

namespace Tiny {


/*! \brief Generic response returned after placing a service order. Contains invoice IDs for payment and the new service ID.
 *
 *  \ingroup Models
 *
 */

class ServiceOrderPostResponse{
public:

    /*! \brief Constructor.
	 */
    ServiceOrderPostResponse();
    ServiceOrderPostResponse(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ServiceOrderPostResponse();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Whether the order was accepted and can proceed to payment.
	 */
	bool isRContinue();

	/*! \brief Set Whether the order was accepted and can proceed to payment.
	 */
	void setRContinue(bool r_continue);
	/*! \brief Get List of validation errors (empty on success).
	 */
	std::list<std::string> getErrors();

	/*! \brief Set List of validation errors (empty on success).
	 */
	void setErrors(std::list<std::string> errors);
	/*! \brief Get Total cost of the order.
	 */
	std::string getTotalCost();

	/*! \brief Set Total cost of the order.
	 */
	void setTotalCost(std::string total_cost);
	/*! \brief Get Primary invoice ID for payment.
	 */
	std::string getIid();

	/*! \brief Set Primary invoice ID for payment.
	 */
	void setIid(std::string iid);
	/*! \brief Get All invoice identifiers associated with the order.
	 */
	std::list<std::string> getIids();

	/*! \brief Set All invoice identifiers associated with the order.
	 */
	void setIids(std::list<std::string> iids);
	/*! \brief Get Numeric invoice IDs for use with billing endpoints.
	 */
	std::list<std::string> getRealIids();

	/*! \brief Set Numeric invoice IDs for use with billing endpoints.
	 */
	void setRealIids(std::list<std::string> real_iids);
	/*! \brief Get The new service ID created by the order.
	 */
	int getServiceId();

	/*! \brief Set The new service ID created by the order.
	 */
	void setServiceId(int serviceId);
	/*! \brief Get Human-readable description of the invoice.
	 */
	std::string getInvoiceDescription();

	/*! \brief Set Human-readable description of the invoice.
	 */
	void setInvoiceDescription(std::string invoice_description);


    private:
    bool r_continue{};
    std::list<std::string> errors;
    std::string total_cost{};
    std::string iid{};
    std::list<std::string> iids;
    std::list<std::string> real_iids;
    int serviceId{};
    std::string invoice_description{};
};
}

#endif /* TINY_CPP_CLIENT_ServiceOrderPostResponse_H_ */
