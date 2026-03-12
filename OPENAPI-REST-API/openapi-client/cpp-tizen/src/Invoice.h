/*
 * Invoice.h
 *
 * An invoice record
 */

#ifndef _Invoice_H_
#define _Invoice_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief An invoice record
 *
 *  \ingroup Models
 *
 */

class Invoice : public Object {
public:
	/*! \brief Constructor.
	 */
	Invoice();
	Invoice(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Invoice();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	long long getId();

	/*! \brief Set 
	 */
	void setId(long long  id);

private:
	long long id;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Invoice_H_ */
