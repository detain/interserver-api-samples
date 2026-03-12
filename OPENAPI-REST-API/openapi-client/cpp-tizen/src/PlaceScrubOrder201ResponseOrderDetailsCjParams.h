/*
 * PlaceScrubOrder_201_response_order_details_cj_params.h
 *
 * 
 */

#ifndef _PlaceScrubOrder_201_response_order_details_cj_params_H_
#define _PlaceScrubOrder_201_response_order_details_cj_params_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class PlaceScrubOrder_201_response_order_details_cj_params : public Object {
public:
	/*! \brief Constructor.
	 */
	PlaceScrubOrder_201_response_order_details_cj_params();
	PlaceScrubOrder_201_response_order_details_cj_params(char* str);

	/*! \brief Destructor.
	 */
	virtual ~PlaceScrubOrder_201_response_order_details_cj_params();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	int getContainerTagId();

	/*! \brief Set 
	 */
	void setContainerTagId(int  containerTagId);
	/*! \brief Get 
	 */
	int getCID();

	/*! \brief Set 
	 */
	void setCID(int  cID);
	/*! \brief Get 
	 */
	std::string getOID();

	/*! \brief Set 
	 */
	void setOID(std::string  oID);
	/*! \brief Get 
	 */
	int getTYPE();

	/*! \brief Set 
	 */
	void setTYPE(int  tYPE);
	/*! \brief Get 
	 */
	std::string getITEM1();

	/*! \brief Set 
	 */
	void setITEM1(std::string  iTEM1);
	/*! \brief Get 
	 */
	int getAMT1();

	/*! \brief Set 
	 */
	void setAMT1(int  aMT1);
	/*! \brief Get 
	 */
	int getQTY1();

	/*! \brief Set 
	 */
	void setQTY1(int  qTY1);
	/*! \brief Get 
	 */
	std::string getCURRENCY();

	/*! \brief Set 
	 */
	void setCURRENCY(std::string  cURRENCY);

private:
	int containerTagId;
	int cID;
	std::string oID;
	int tYPE;
	std::string iTEM1;
	int aMT1;
	int qTY1;
	std::string cURRENCY;
	void __init();
	void __cleanup();

};
}
}

#endif /* _PlaceScrubOrder_201_response_order_details_cj_params_H_ */
