/*
 * InvoiceRow.h
 *
 * 
 */

#ifndef _InvoiceRow_H_
#define _InvoiceRow_H_


#include <string>
#include <list>
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

class InvoiceRow : public Object {
public:
	/*! \brief Constructor.
	 */
	InvoiceRow();
	InvoiceRow(char* str);

	/*! \brief Destructor.
	 */
	virtual ~InvoiceRow();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);


private:
	void __init();
	void __cleanup();

};
}
}

#endif /* _InvoiceRow_H_ */
