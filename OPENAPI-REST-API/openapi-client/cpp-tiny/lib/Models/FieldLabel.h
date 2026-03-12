
/*
 * FieldLabel.h
 *
 * A display label for a server order form field.
 */

#ifndef TINY_CPP_CLIENT_FieldLabel_H_
#define TINY_CPP_CLIENT_FieldLabel_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief A display label for a server order form field.
 *
 *  \ingroup Models
 *
 */

class FieldLabel{
public:

    /*! \brief Constructor.
	 */
    FieldLabel();
    FieldLabel(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~FieldLabel();


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
	int getActive();

	/*! \brief Set 
	 */
	void setActive(int active);


    private:
    std::string name{};
    int active{};
};
}

#endif /* TINY_CPP_CLIENT_FieldLabel_H_ */
