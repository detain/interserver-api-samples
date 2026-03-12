/*
 * ServerOrder_os_li.h
 *
 * Operating System options for the server order.
 */

#ifndef _ServerOrder_os_li_H_
#define _ServerOrder_os_li_H_


#include <string>
#include "ServerOrderOS.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Operating System options for the server order.
 *
 *  \ingroup Models
 *
 */

class ServerOrder_os_li : public Object {
public:
	/*! \brief Constructor.
	 */
	ServerOrder_os_li();
	ServerOrder_os_li(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ServerOrder_os_li();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	ServerOrderOS get51();

	/*! \brief Set 
	 */
	void set51(ServerOrderOS  51);

private:
	ServerOrderOS 51;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ServerOrder_os_li_H_ */
