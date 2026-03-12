
/*
 * BackupOrderPostResponse.h
 *
 * Backup Order Placement Response
 */

#ifndef TINY_CPP_CLIENT_BackupOrderPostResponse_H_
#define TINY_CPP_CLIENT_BackupOrderPostResponse_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "BackupOrderPostResponse_cj_params.h"
#include <list>

namespace Tiny {


/*! \brief Backup Order Placement Response
 *
 *  \ingroup Models
 *
 */

class BackupOrderPostResponse{
public:

    /*! \brief Constructor.
	 */
    BackupOrderPostResponse();
    BackupOrderPostResponse(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~BackupOrderPostResponse();


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
	std::string getTotalCost();

	/*! \brief Set 
	 */
	void setTotalCost(std::string total_cost);
	/*! \brief Get 
	 */
	std::string getIid();

	/*! \brief Set 
	 */
	void setIid(std::string iid);
	/*! \brief Get 
	 */
	std::list<std::string> getIids();

	/*! \brief Set 
	 */
	void setIids(std::list<std::string> iids);
	/*! \brief Get 
	 */
	std::list<std::string> getRealIids();

	/*! \brief Set 
	 */
	void setRealIids(std::list<std::string> real_iids);
	/*! \brief Get 
	 */
	int getServiceId();

	/*! \brief Set 
	 */
	void setServiceId(int serviceId);
	/*! \brief Get 
	 */
	std::string getInvoiceDescription();

	/*! \brief Set 
	 */
	void setInvoiceDescription(std::string invoice_description);
	/*! \brief Get 
	 */
	BackupOrderPostResponse_cj_params getCjParams();

	/*! \brief Set 
	 */
	void setCjParams(BackupOrderPostResponse_cj_params cj_params);


    private:
    bool r_continue{};
    std::list<std::string> errors;
    std::string total_cost{};
    std::string iid{};
    std::list<std::string> iids;
    std::list<std::string> real_iids;
    int serviceId{};
    std::string invoice_description{};
    BackupOrderPostResponse_cj_params cj_params;
};
}

#endif /* TINY_CPP_CLIENT_BackupOrderPostResponse_H_ */
