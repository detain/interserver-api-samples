
/*
 * MailStatsType_volume_ip.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_MailStatsType_volume_ip_H_
#define TINY_CPP_CLIENT_MailStatsType_volume_ip_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class MailStatsType_volume_ip{
public:

    /*! \brief Constructor.
	 */
    MailStatsType_volume_ip();
    MailStatsType_volume_ip(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~MailStatsType_volume_ip();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	int get1111();

	/*! \brief Set 
	 */
	void set1111(int 1111);
	/*! \brief Get 
	 */
	int get2222();

	/*! \brief Set 
	 */
	void set2222(int 2222);
	/*! \brief Get 
	 */
	int get3333();

	/*! \brief Set 
	 */
	void set3333(int 3333);
	/*! \brief Get 
	 */
	int get4444();

	/*! \brief Set 
	 */
	void set4444(int 4444);


    private:
    int 1111{};
    int 2222{};
    int 3333{};
    int 4444{};
};
}

#endif /* TINY_CPP_CLIENT_MailStatsType_volume_ip_H_ */
