
/*
 * BackupsOrderPackageCosts.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_BackupsOrderPackageCosts_H_
#define TINY_CPP_CLIENT_BackupsOrderPackageCosts_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class BackupsOrderPackageCosts{
public:

    /*! \brief Constructor.
	 */
    BackupsOrderPackageCosts();
    BackupsOrderPackageCosts(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~BackupsOrderPackageCosts();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The cost associated with package 11006.
	 */
	int get11006();

	/*! \brief Set The cost associated with package 11006.
	 */
	void set11006(int 11006);


    private:
    int 11006{};
};
}

#endif /* TINY_CPP_CLIENT_BackupsOrderPackageCosts_H_ */
