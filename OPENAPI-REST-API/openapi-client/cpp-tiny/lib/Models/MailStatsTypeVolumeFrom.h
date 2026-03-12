
/*
 * MailStatsType_volume_from.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_MailStatsType_volume_from_H_
#define TINY_CPP_CLIENT_MailStatsType_volume_from_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class MailStatsType_volume_from{
public:

    /*! \brief Constructor.
	 */
    MailStatsType_volume_from();
    MailStatsType_volume_from(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~MailStatsType_volume_from();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	int getBillingsomedomaincom();

	/*! \brief Set 
	 */
	void setBillingsomedomaincom(int billingsomedomaincom);
	/*! \brief Get 
	 */
	int getSalessomedomaincom();

	/*! \brief Set 
	 */
	void setSalessomedomaincom(int salessomedomaincom);


    private:
    int billingsomedomaincom{};
    int salessomedomaincom{};
};
}

#endif /* TINY_CPP_CLIENT_MailStatsType_volume_from_H_ */
