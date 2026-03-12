
/*
 * CreateFilter.h
 *
 * Create firewall rule for your ip
 */

#ifndef TINY_CPP_CLIENT_CreateFilter_H_
#define TINY_CPP_CLIENT_CreateFilter_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Create firewall rule for your ip
 *
 *  \ingroup Models
 *
 */

class CreateFilter{
public:

    /*! \brief Constructor.
	 */
    CreateFilter();
    CreateFilter(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~CreateFilter();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getFilterType();

	/*! \brief Set 
	 */
	void setFilterType(std::string filter_type);
	/*! \brief Get 
	 */
	int getPort();

	/*! \brief Set 
	 */
	void setPort(int port);


    private:
    std::string filter_type{};
    int port{};
};
}

#endif /* TINY_CPP_CLIENT_CreateFilter_H_ */
