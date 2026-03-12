
/*
 * MailStatsType_volume.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_MailStatsType_volume_H_
#define TINY_CPP_CLIENT_MailStatsType_volume_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "MailStatsType_volume_from.h"
#include "MailStatsType_volume_ip.h"
#include "MailStatsType_volume_to.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class MailStatsType_volume{
public:

    /*! \brief Constructor.
	 */
    MailStatsType_volume();
    MailStatsType_volume(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~MailStatsType_volume();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	MailStatsType_volume_to getTo();

	/*! \brief Set 
	 */
	void setTo(MailStatsType_volume_to to);
	/*! \brief Get 
	 */
	MailStatsType_volume_from getFrom();

	/*! \brief Set 
	 */
	void setFrom(MailStatsType_volume_from from);
	/*! \brief Get 
	 */
	MailStatsType_volume_ip getIp();

	/*! \brief Set 
	 */
	void setIp(MailStatsType_volume_ip ip);


    private:
    MailStatsType_volume_to to;
    MailStatsType_volume_from from;
    MailStatsType_volume_ip ip;
};
}

#endif /* TINY_CPP_CLIENT_MailStatsType_volume_H_ */
