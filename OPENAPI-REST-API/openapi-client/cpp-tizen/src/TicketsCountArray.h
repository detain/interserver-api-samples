/*
 * Tickets_countArray.h
 *
 * 
 */

#ifndef _Tickets_countArray_H_
#define _Tickets_countArray_H_


#include <string>
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

class Tickets_countArray : public Object {
public:
	/*! \brief Constructor.
	 */
	Tickets_countArray();
	Tickets_countArray(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Tickets_countArray();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	int getOpen();

	/*! \brief Set 
	 */
	void setOpen(int  open);
	/*! \brief Get 
	 */
	int getOnHold();

	/*! \brief Set 
	 */
	void setOnHold(int  onHold);
	/*! \brief Get 
	 */
	int getClosed();

	/*! \brief Set 
	 */
	void setClosed(int  closed);

private:
	int open;
	int onHold;
	int closed;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Tickets_countArray_H_ */
