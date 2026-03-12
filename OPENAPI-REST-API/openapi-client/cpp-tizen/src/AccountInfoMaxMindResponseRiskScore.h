/*
 * AccountInfoMaxMindResponse_riskScore.h
 *
 * 
 */

#ifndef _AccountInfoMaxMindResponse_riskScore_H_
#define _AccountInfoMaxMindResponse_riskScore_H_


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

class AccountInfoMaxMindResponse_riskScore : public Object {
public:
	/*! \brief Constructor.
	 */
	AccountInfoMaxMindResponse_riskScore();
	AccountInfoMaxMindResponse_riskScore(char* str);

	/*! \brief Destructor.
	 */
	virtual ~AccountInfoMaxMindResponse_riskScore();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);


private:
	void __init();
	void __cleanup();

};
}
}

#endif /* _AccountInfoMaxMindResponse_riskScore_H_ */
