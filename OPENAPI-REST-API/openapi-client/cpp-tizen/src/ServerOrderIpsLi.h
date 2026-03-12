/*
 * ServerOrder_ips_li.h
 *
 * IP options for the server order.
 */

#ifndef _ServerOrder_ips_li_H_
#define _ServerOrder_ips_li_H_


#include <string>
#include "ServerOrderIP.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief IP options for the server order.
 *
 *  \ingroup Models
 *
 */

class ServerOrder_ips_li : public Object {
public:
	/*! \brief Constructor.
	 */
	ServerOrder_ips_li();
	ServerOrder_ips_li(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ServerOrder_ips_li();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	ServerOrderIP get9();

	/*! \brief Set 
	 */
	void set9(ServerOrderIP  9);

private:
	ServerOrderIP 9;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ServerOrder_ips_li_H_ */
