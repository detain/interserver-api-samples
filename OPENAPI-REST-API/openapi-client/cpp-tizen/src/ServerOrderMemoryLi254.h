/*
 * ServerOrder_memory_li_254.h
 *
 * 
 */

#ifndef _ServerOrder_memory_li_254_H_
#define _ServerOrder_memory_li_254_H_


#include <string>
#include "ServerOrderMemory.h"
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

class ServerOrder_memory_li_254 : public Object {
public:
	/*! \brief Constructor.
	 */
	ServerOrder_memory_li_254();
	ServerOrder_memory_li_254(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ServerOrder_memory_li_254();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	ServerOrderMemory get65();

	/*! \brief Set 
	 */
	void set65(ServerOrderMemory  65);

private:
	ServerOrderMemory 65;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ServerOrder_memory_li_254_H_ */
