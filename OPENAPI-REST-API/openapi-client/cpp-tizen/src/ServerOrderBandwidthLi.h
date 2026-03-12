/*
 * ServerOrder_bandwidth_li.h
 *
 * Bandwidth options for the server order.
 */

#ifndef _ServerOrder_bandwidth_li_H_
#define _ServerOrder_bandwidth_li_H_


#include <string>
#include "ServerOrderBandwidth.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Bandwidth options for the server order.
 *
 *  \ingroup Models
 *
 */

class ServerOrder_bandwidth_li : public Object {
public:
	/*! \brief Constructor.
	 */
	ServerOrder_bandwidth_li();
	ServerOrder_bandwidth_li(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ServerOrder_bandwidth_li();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	ServerOrderBandwidth get15();

	/*! \brief Set 
	 */
	void set15(ServerOrderBandwidth  15);

private:
	ServerOrderBandwidth 15;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ServerOrder_bandwidth_li_H_ */
