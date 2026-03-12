/*
 * DnsListItem.h
 *
 * A DNS zone entry with its ID, domain name, and record content.
 */

#ifndef _DnsListItem_H_
#define _DnsListItem_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief A DNS zone entry with its ID, domain name, and record content.
 *
 *  \ingroup Models
 *
 */

class DnsListItem : public Object {
public:
	/*! \brief Constructor.
	 */
	DnsListItem();
	DnsListItem(char* str);

	/*! \brief Destructor.
	 */
	virtual ~DnsListItem();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	int getId();

	/*! \brief Set 
	 */
	void setId(int  id);
	/*! \brief Get 
	 */
	std::string getName();

	/*! \brief Set 
	 */
	void setName(std::string  name);
	/*! \brief Get 
	 */
	std::string getContent();

	/*! \brief Set 
	 */
	void setContent(std::string  content);

private:
	int id;
	std::string name;
	std::string content;
	void __init();
	void __cleanup();

};
}
}

#endif /* _DnsListItem_H_ */
