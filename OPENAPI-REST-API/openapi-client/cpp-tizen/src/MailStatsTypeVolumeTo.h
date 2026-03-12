/*
 * MailStatsType_volume_to.h
 *
 * 
 */

#ifndef _MailStatsType_volume_to_H_
#define _MailStatsType_volume_to_H_


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

class MailStatsType_volume_to : public Object {
public:
	/*! \brief Constructor.
	 */
	MailStatsType_volume_to();
	MailStatsType_volume_to(char* str);

	/*! \brief Destructor.
	 */
	virtual ~MailStatsType_volume_to();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	int getClientdomaincom();

	/*! \brief Set 
	 */
	void setClientdomaincom(int  clientdomaincom);
	/*! \brief Get 
	 */
	int getUsersitenet();

	/*! \brief Set 
	 */
	void setUsersitenet(int  usersitenet);
	/*! \brief Get 
	 */
	int getSalescompanycom();

	/*! \brief Set 
	 */
	void setSalescompanycom(int  salescompanycom);
	/*! \brief Get 
	 */
	int getClientanothersitecom();

	/*! \brief Set 
	 */
	void setClientanothersitecom(int  clientanothersitecom);

private:
	int clientdomaincom;
	int usersitenet;
	int salescompanycom;
	int clientanothersitecom;
	void __init();
	void __cleanup();

};
}
}

#endif /* _MailStatsType_volume_to_H_ */
