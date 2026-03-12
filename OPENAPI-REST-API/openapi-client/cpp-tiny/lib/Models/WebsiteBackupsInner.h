
/*
 * WebsiteBackups_inner.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_WebsiteBackups_inner_H_
#define TINY_CPP_CLIENT_WebsiteBackups_inner_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class WebsiteBackups_inner{
public:

    /*! \brief Constructor.
	 */
    WebsiteBackups_inner();
    WebsiteBackups_inner(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~WebsiteBackups_inner();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getName();

	/*! \brief Set 
	 */
	void setName(std::string name);
	/*! \brief Get 
	 */
	int getSize();

	/*! \brief Set 
	 */
	void setSize(int size);


    private:
    std::string name{};
    int size{};
};
}

#endif /* TINY_CPP_CLIENT_WebsiteBackups_inner_H_ */
