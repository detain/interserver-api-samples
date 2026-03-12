/*
 * MailStatsType_volume_from.h
 *
 * 
 */

#ifndef _MailStatsType_volume_from_H_
#define _MailStatsType_volume_from_H_


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

class MailStatsType_volume_from : public Object {
public:
	/*! \brief Constructor.
	 */
	MailStatsType_volume_from();
	MailStatsType_volume_from(char* str);

	/*! \brief Destructor.
	 */
	virtual ~MailStatsType_volume_from();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	int getBillingsomedomaincom();

	/*! \brief Set 
	 */
	void setBillingsomedomaincom(int  billingsomedomaincom);
	/*! \brief Get 
	 */
	int getSalessomedomaincom();

	/*! \brief Set 
	 */
	void setSalessomedomaincom(int  salessomedomaincom);

private:
	int billingsomedomaincom;
	int salessomedomaincom;
	void __init();
	void __cleanup();

};
}
}

#endif /* _MailStatsType_volume_from_H_ */
