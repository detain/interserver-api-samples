/*
 * ServerOrder_memory_li.h
 *
 * Memory options for the server order.
 */

#ifndef _ServerOrder_memory_li_H_
#define _ServerOrder_memory_li_H_


#include <string>
#include "ServerOrder_memory_li_254.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Memory options for the server order.
 *
 *  \ingroup Models
 *
 */

class ServerOrder_memory_li : public Object {
public:
	/*! \brief Constructor.
	 */
	ServerOrder_memory_li();
	ServerOrder_memory_li(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ServerOrder_memory_li();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	ServerOrder_memory_li_254 get254();

	/*! \brief Set 
	 */
	void set254(ServerOrder_memory_li_254  254);

private:
	ServerOrder_memory_li_254 254;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ServerOrder_memory_li_H_ */
