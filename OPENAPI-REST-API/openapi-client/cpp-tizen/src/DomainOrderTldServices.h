/*
 * DomainOrderTldServices.h
 *
 * Example map of TLDs to service IDs for domain ordering.
 */

#ifndef _DomainOrderTldServices_H_
#define _DomainOrderTldServices_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Example map of TLDs to service IDs for domain ordering.
 *
 *  \ingroup Models
 *
 */

class DomainOrderTldServices : public Object {
public:
	/*! \brief Constructor.
	 */
	DomainOrderTldServices();
	DomainOrderTldServices(char* str);

	/*! \brief Destructor.
	 */
	virtual ~DomainOrderTldServices();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Service ID for .asia TLD
	 */
	int getAsia();

	/*! \brief Set Service ID for .asia TLD
	 */
	void setAsia(int  asia);
	/*! \brief Get Service ID for .be TLD
	 */
	int getBe();

	/*! \brief Set Service ID for .be TLD
	 */
	void setBe(int  be);
	/*! \brief Get Service ID for .biz TLD
	 */
	int getBiz();

	/*! \brief Set Service ID for .biz TLD
	 */
	void setBiz(int  biz);
	/*! \brief Get Service ID for .ca TLD
	 */
	int getCa();

	/*! \brief Set Service ID for .ca TLD
	 */
	void setCa(int  ca);

private:
	int asia;
	int be;
	int biz;
	int ca;
	void __init();
	void __cleanup();

};
}
}

#endif /* _DomainOrderTldServices_H_ */
