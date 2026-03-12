/*
 * CreateFilter.h
 *
 * Create firewall rule for your ip
 */

#ifndef _CreateFilter_H_
#define _CreateFilter_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Create firewall rule for your ip
 *
 *  \ingroup Models
 *
 */

class CreateFilter : public Object {
public:
	/*! \brief Constructor.
	 */
	CreateFilter();
	CreateFilter(char* str);

	/*! \brief Destructor.
	 */
	virtual ~CreateFilter();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getFilterType();

	/*! \brief Set 
	 */
	void setFilterType(std::string  filter_type);
	/*! \brief Get 
	 */
	int getPort();

	/*! \brief Set 
	 */
	void setPort(int  port);

private:
	std::string filter_type;
	int port;
	void __init();
	void __cleanup();

};
}
}

#endif /* _CreateFilter_H_ */
