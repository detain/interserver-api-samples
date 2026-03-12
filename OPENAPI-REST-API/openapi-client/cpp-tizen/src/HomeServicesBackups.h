/*
 * Home_services_backups.h
 *
 * 
 */

#ifndef _Home_services_backups_H_
#define _Home_services_backups_H_


#include <string>
#include <list>
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

class Home_services_backups : public Object {
public:
	/*! \brief Constructor.
	 */
	Home_services_backups();
	Home_services_backups(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Home_services_backups();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get List of backup links.
	 */
	std::list<std::string> getLinks();

	/*! \brief Set List of backup links.
	 */
	void setLinks(std::list <std::string> links);
	/*! \brief Get Number of backups.
	 */
	int getCount();

	/*! \brief Set Number of backups.
	 */
	void setCount(int  count);

private:
	std::list <std::string>links;
	int count;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Home_services_backups_H_ */
