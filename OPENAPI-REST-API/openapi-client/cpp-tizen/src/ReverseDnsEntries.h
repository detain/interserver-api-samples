/*
 * ReverseDnsEntries.h
 *
 * The Reverse DNS entries.
 */

#ifndef _ReverseDnsEntries_H_
#define _ReverseDnsEntries_H_


#include <string>
#include "AnyType.h"
#include <map>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief The Reverse DNS entries.
 *
 *  \ingroup Models
 *
 */

class ReverseDnsEntries : public Object {
public:
	/*! \brief Constructor.
	 */
	ReverseDnsEntries();
	ReverseDnsEntries(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ReverseDnsEntries();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The IPs you have access to and their current reverse dns mapping.
	 */
	std::map<std::string, std::string> getIps();

	/*! \brief Set The IPs you have access to and their current reverse dns mapping.
	 */
	void setIps(std::map <std::string, std::string> ips);

private:
	std::map <std::string, std::string>ips;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ReverseDnsEntries_H_ */
