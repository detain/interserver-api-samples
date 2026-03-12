/*
 * BackupOrderPostResponse.h
 *
 * Backup Order Placement Response
 */

#ifndef _BackupOrderPostResponse_H_
#define _BackupOrderPostResponse_H_


#include <string>
#include "BackupOrderPostResponse_cj_params.h"
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Backup Order Placement Response
 *
 *  \ingroup Models
 *
 */

class BackupOrderPostResponse : public Object {
public:
	/*! \brief Constructor.
	 */
	BackupOrderPostResponse();
	BackupOrderPostResponse(char* str);

	/*! \brief Destructor.
	 */
	virtual ~BackupOrderPostResponse();

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
	std::list<std::string> getErrors();

	/*! \brief Set 
	 */
	void setErrors(std::list <std::string> errors);
	/*! \brief Get 
	 */
	std::string getTotalCost();

	/*! \brief Set 
	 */
	void setTotalCost(std::string  total_cost);
	/*! \brief Get 
	 */
	std::string getIid();

	/*! \brief Set 
	 */
	void setIid(std::string  iid);
	/*! \brief Get 
	 */
	std::list<std::string> getIids();

	/*! \brief Set 
	 */
	void setIids(std::list <std::string> iids);
	/*! \brief Get 
	 */
	std::list<std::string> getRealIids();

	/*! \brief Set 
	 */
	void setRealIids(std::list <std::string> real_iids);
	/*! \brief Get 
	 */
	int getServiceId();

	/*! \brief Set 
	 */
	void setServiceId(int  serviceId);
	/*! \brief Get 
	 */
	std::string getInvoiceDescription();

	/*! \brief Set 
	 */
	void setInvoiceDescription(std::string  invoice_description);
	/*! \brief Get 
	 */
	BackupOrderPostResponse_cj_params getCjParams();

	/*! \brief Set 
	 */
	void setCjParams(BackupOrderPostResponse_cj_params  cj_params);

private:
	bool r_continue;
	std::list <std::string>errors;
	std::string total_cost;
	std::string iid;
	std::list <std::string>iids;
	std::list <std::string>real_iids;
	int serviceId;
	std::string invoice_description;
	BackupOrderPostResponse_cj_params cj_params;
	void __init();
	void __cleanup();

};
}
}

#endif /* _BackupOrderPostResponse_H_ */
