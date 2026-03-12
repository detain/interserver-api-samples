
/*
 * LoginServiceCounts.h
 *
 * Order counts per module.
 */

#ifndef TINY_CPP_CLIENT_LoginServiceCounts_H_
#define TINY_CPP_CLIENT_LoginServiceCounts_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Order counts per module.
 *
 *  \ingroup Models
 *
 */

class LoginServiceCounts{
public:

    /*! \brief Constructor.
	 */
    LoginServiceCounts();
    LoginServiceCounts(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~LoginServiceCounts();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The number of total VPS orders that have been placed in our billing system.
	 */
	int getVps();

	/*! \brief Set The number of total VPS orders that have been placed in our billing system.
	 */
	void setVps(int vps);
	/*! \brief Get The number of total website orders that have been placed in our billing system.
	 */
	int getWebsites();

	/*! \brief Set The number of total website orders that have been placed in our billing system.
	 */
	void setWebsites(int websites);
	/*! \brief Get The number of total server orders that have been placed in our billing system.
	 */
	int getServers();

	/*! \brief Set The number of total server orders that have been placed in our billing system.
	 */
	void setServers(int servers);


    private:
    int vps{};
    int websites{};
    int servers{};
};
}

#endif /* TINY_CPP_CLIENT_LoginServiceCounts_H_ */
