
/*
 * ServerOrderFieldLabel.h
 *
 * A display label for a field in the server order form.
 */

#ifndef TINY_CPP_CLIENT_ServerOrderFieldLabel_H_
#define TINY_CPP_CLIENT_ServerOrderFieldLabel_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief A display label for a field in the server order form.
 *
 *  \ingroup Models
 *
 */

class ServerOrderFieldLabel{
public:

    /*! \brief Constructor.
	 */
    ServerOrderFieldLabel();
    ServerOrderFieldLabel(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ServerOrderFieldLabel();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Name of the field label.
	 */
	std::string getName();

	/*! \brief Set Name of the field label.
	 */
	void setName(std::string name);
	/*! \brief Get Active status of the field label.
	 */
	int getActive();

	/*! \brief Set Active status of the field label.
	 */
	void setActive(int active);


    private:
    std::string name{};
    int active{};
};
}

#endif /* TINY_CPP_CLIENT_ServerOrderFieldLabel_H_ */
