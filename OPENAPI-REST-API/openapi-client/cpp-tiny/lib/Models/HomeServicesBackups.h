
/*
 * Home_services_backups.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_Home_services_backups_H_
#define TINY_CPP_CLIENT_Home_services_backups_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include <list>

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class Home_services_backups{
public:

    /*! \brief Constructor.
	 */
    Home_services_backups();
    Home_services_backups(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Home_services_backups();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get List of backup links.
	 */
	std::list<std::string> getLinks();

	/*! \brief Set List of backup links.
	 */
	void setLinks(std::list<std::string> links);
	/*! \brief Get Number of backups.
	 */
	int getCount();

	/*! \brief Set Number of backups.
	 */
	void setCount(int count);


    private:
    std::list<std::string> links;
    int count{};
};
}

#endif /* TINY_CPP_CLIENT_Home_services_backups_H_ */
