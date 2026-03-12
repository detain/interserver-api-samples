/*
 * ServerOrder_cpu_li.h
 *
 * CPU options for the server order.
 */

#ifndef _ServerOrder_cpu_li_H_
#define _ServerOrder_cpu_li_H_


#include <string>
#include "ServerOrderCPU.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief CPU options for the server order.
 *
 *  \ingroup Models
 *
 */

class ServerOrder_cpu_li : public Object {
public:
	/*! \brief Constructor.
	 */
	ServerOrder_cpu_li();
	ServerOrder_cpu_li(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ServerOrder_cpu_li();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	ServerOrderCPU get254();

	/*! \brief Set 
	 */
	void set254(ServerOrderCPU  254);

private:
	ServerOrderCPU 254;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ServerOrder_cpu_li_H_ */
