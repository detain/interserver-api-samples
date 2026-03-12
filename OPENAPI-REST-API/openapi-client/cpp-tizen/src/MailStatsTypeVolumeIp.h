/*
 * MailStatsType_volume_ip.h
 *
 * 
 */

#ifndef _MailStatsType_volume_ip_H_
#define _MailStatsType_volume_ip_H_


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

class MailStatsType_volume_ip : public Object {
public:
	/*! \brief Constructor.
	 */
	MailStatsType_volume_ip();
	MailStatsType_volume_ip(char* str);

	/*! \brief Destructor.
	 */
	virtual ~MailStatsType_volume_ip();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	int get1111();

	/*! \brief Set 
	 */
	void set1111(int  1111);
	/*! \brief Get 
	 */
	int get2222();

	/*! \brief Set 
	 */
	void set2222(int  2222);
	/*! \brief Get 
	 */
	int get3333();

	/*! \brief Set 
	 */
	void set3333(int  3333);
	/*! \brief Get 
	 */
	int get4444();

	/*! \brief Set 
	 */
	void set4444(int  4444);

private:
	int 1111;
	int 2222;
	int 3333;
	int 4444;
	void __init();
	void __cleanup();

};
}
}

#endif /* _MailStatsType_volume_ip_H_ */
