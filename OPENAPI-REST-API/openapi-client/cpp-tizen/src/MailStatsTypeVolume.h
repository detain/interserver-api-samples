/*
 * MailStatsType_volume.h
 *
 * 
 */

#ifndef _MailStatsType_volume_H_
#define _MailStatsType_volume_H_


#include <string>
#include "MailStatsType_volume_from.h"
#include "MailStatsType_volume_ip.h"
#include "MailStatsType_volume_to.h"
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

class MailStatsType_volume : public Object {
public:
	/*! \brief Constructor.
	 */
	MailStatsType_volume();
	MailStatsType_volume(char* str);

	/*! \brief Destructor.
	 */
	virtual ~MailStatsType_volume();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	MailStatsType_volume_to getTo();

	/*! \brief Set 
	 */
	void setTo(MailStatsType_volume_to  to);
	/*! \brief Get 
	 */
	MailStatsType_volume_from getFrom();

	/*! \brief Set 
	 */
	void setFrom(MailStatsType_volume_from  from);
	/*! \brief Get 
	 */
	MailStatsType_volume_ip getIp();

	/*! \brief Set 
	 */
	void setIp(MailStatsType_volume_ip  ip);

private:
	MailStatsType_volume_to to;
	MailStatsType_volume_from from;
	MailStatsType_volume_ip ip;
	void __init();
	void __cleanup();

};
}
}

#endif /* _MailStatsType_volume_H_ */
