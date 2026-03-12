
/*
 * PlaceScrubOrder_201_response_order_details_cj_params.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_PlaceScrubOrder_201_response_order_details_cj_params_H_
#define TINY_CPP_CLIENT_PlaceScrubOrder_201_response_order_details_cj_params_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class PlaceScrubOrder_201_response_order_details_cj_params{
public:

    /*! \brief Constructor.
	 */
    PlaceScrubOrder_201_response_order_details_cj_params();
    PlaceScrubOrder_201_response_order_details_cj_params(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~PlaceScrubOrder_201_response_order_details_cj_params();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	int getContainerTagId();

	/*! \brief Set 
	 */
	void setContainerTagId(int containerTagId);
	/*! \brief Get 
	 */
	int getCID();

	/*! \brief Set 
	 */
	void setCID(int cID);
	/*! \brief Get 
	 */
	std::string getOID();

	/*! \brief Set 
	 */
	void setOID(std::string oID);
	/*! \brief Get 
	 */
	int getTYPE();

	/*! \brief Set 
	 */
	void setTYPE(int tYPE);
	/*! \brief Get 
	 */
	std::string getITEM1();

	/*! \brief Set 
	 */
	void setITEM1(std::string iTEM1);
	/*! \brief Get 
	 */
	int getAMT1();

	/*! \brief Set 
	 */
	void setAMT1(int aMT1);
	/*! \brief Get 
	 */
	int getQTY1();

	/*! \brief Set 
	 */
	void setQTY1(int qTY1);
	/*! \brief Get 
	 */
	std::string getCURRENCY();

	/*! \brief Set 
	 */
	void setCURRENCY(std::string cURRENCY);


    private:
    int containerTagId{};
    int cID{};
    std::string oID{};
    int tYPE{};
    std::string iTEM1{};
    int aMT1{};
    int qTY1{};
    std::string cURRENCY{};
};
}

#endif /* TINY_CPP_CLIENT_PlaceScrubOrder_201_response_order_details_cj_params_H_ */
