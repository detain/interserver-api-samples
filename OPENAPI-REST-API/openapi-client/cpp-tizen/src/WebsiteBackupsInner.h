/*
 * WebsiteBackups_inner.h
 *
 * 
 */

#ifndef _WebsiteBackups_inner_H_
#define _WebsiteBackups_inner_H_


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

class WebsiteBackups_inner : public Object {
public:
	/*! \brief Constructor.
	 */
	WebsiteBackups_inner();
	WebsiteBackups_inner(char* str);

	/*! \brief Destructor.
	 */
	virtual ~WebsiteBackups_inner();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getName();

	/*! \brief Set 
	 */
	void setName(std::string  name);
	/*! \brief Get 
	 */
	int getSize();

	/*! \brief Set 
	 */
	void setSize(int  size);

private:
	std::string name;
	int size;
	void __init();
	void __cleanup();

};
}
}

#endif /* _WebsiteBackups_inner_H_ */
