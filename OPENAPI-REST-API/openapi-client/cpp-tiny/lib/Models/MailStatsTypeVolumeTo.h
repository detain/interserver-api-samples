
/*
 * MailStatsType_volume_to.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_MailStatsType_volume_to_H_
#define TINY_CPP_CLIENT_MailStatsType_volume_to_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class MailStatsType_volume_to{
public:

    /*! \brief Constructor.
	 */
    MailStatsType_volume_to();
    MailStatsType_volume_to(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~MailStatsType_volume_to();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	int getClientdomaincom();

	/*! \brief Set 
	 */
	void setClientdomaincom(int clientdomaincom);
	/*! \brief Get 
	 */
	int getUsersitenet();

	/*! \brief Set 
	 */
	void setUsersitenet(int usersitenet);
	/*! \brief Get 
	 */
	int getSalescompanycom();

	/*! \brief Set 
	 */
	void setSalescompanycom(int salescompanycom);
	/*! \brief Get 
	 */
	int getClientanothersitecom();

	/*! \brief Set 
	 */
	void setClientanothersitecom(int clientanothersitecom);


    private:
    int clientdomaincom{};
    int usersitenet{};
    int salescompanycom{};
    int clientanothersitecom{};
};
}

#endif /* TINY_CPP_CLIENT_MailStatsType_volume_to_H_ */
