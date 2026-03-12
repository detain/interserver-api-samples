
/*
 * VpsServiceExtra.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_VpsServiceExtra_H_
#define TINY_CPP_CLIENT_VpsServiceExtra_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "VpsSnapshot.h"
#include <list>

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class VpsServiceExtra{
public:

    /*! \brief Constructor.
	 */
    VpsServiceExtra();
    VpsServiceExtra(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~VpsServiceExtra();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Spice
	 */
	int getSpice();

	/*! \brief Set Spice
	 */
	void setSpice(int spice);
	/*! \brief Get 
	 */
	std::list<VpsSnapshot> getSnapshots();

	/*! \brief Set 
	 */
	void setSnapshots(std::list<VpsSnapshot> snapshots);


    private:
    int spice{};
    std::list<VpsSnapshot> snapshots;
};
}

#endif /* TINY_CPP_CLIENT_VpsServiceExtra_H_ */
