/*
 * LoginServiceCounts.h
 *
 * Order counts per module.
 */

#ifndef _LoginServiceCounts_H_
#define _LoginServiceCounts_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Order counts per module.
 *
 *  \ingroup Models
 *
 */

class LoginServiceCounts : public Object {
public:
	/*! \brief Constructor.
	 */
	LoginServiceCounts();
	LoginServiceCounts(char* str);

	/*! \brief Destructor.
	 */
	virtual ~LoginServiceCounts();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The number of total VPS orders that have been placed in our billing system.
	 */
	int getVps();

	/*! \brief Set The number of total VPS orders that have been placed in our billing system.
	 */
	void setVps(int  vps);
	/*! \brief Get The number of total website orders that have been placed in our billing system.
	 */
	int getWebsites();

	/*! \brief Set The number of total website orders that have been placed in our billing system.
	 */
	void setWebsites(int  websites);
	/*! \brief Get The number of total server orders that have been placed in our billing system.
	 */
	int getServers();

	/*! \brief Set The number of total server orders that have been placed in our billing system.
	 */
	void setServers(int  servers);

private:
	int vps;
	int websites;
	int servers;
	void __init();
	void __cleanup();

};
}
}

#endif /* _LoginServiceCounts_H_ */
