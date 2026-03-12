
/*
 * VpsOrder_osNames.h
 *
 * OS Names
 */

#ifndef TINY_CPP_CLIENT_VpsOrder_osNames_H_
#define TINY_CPP_CLIENT_VpsOrder_osNames_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief OS Names
 *
 *  \ingroup Models
 *
 */

class VpsOrder_osNames{
public:

    /*! \brief Constructor.
	 */
    VpsOrder_osNames();
    VpsOrder_osNames(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~VpsOrder_osNames();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getOpensuse();

	/*! \brief Set 
	 */
	void setOpensuse(std::string opensuse);
	/*! \brief Get 
	 */
	std::string getUbuntu();

	/*! \brief Set 
	 */
	void setUbuntu(std::string ubuntu);


    private:
    std::string opensuse{};
    std::string ubuntu{};
};
}

#endif /* TINY_CPP_CLIENT_VpsOrder_osNames_H_ */
