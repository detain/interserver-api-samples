/*
 * ServerOrder_cp_li.h
 *
 * Control Panel options for the server order.
 */

#ifndef _ServerOrder_cp_li_H_
#define _ServerOrder_cp_li_H_


#include <string>
#include "ServerOrderControlPanel.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Control Panel options for the server order.
 *
 *  \ingroup Models
 *
 */

class ServerOrder_cp_li : public Object {
public:
	/*! \brief Constructor.
	 */
	ServerOrder_cp_li();
	ServerOrder_cp_li(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ServerOrder_cp_li();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	ServerOrderControlPanel get9();

	/*! \brief Set 
	 */
	void set9(ServerOrderControlPanel  9);

private:
	ServerOrderControlPanel 9;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ServerOrder_cp_li_H_ */
