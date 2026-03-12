/*
 * VpsTrafficResponse.h
 *
 * VPS Traffic Information
 */

#ifndef _VpsTrafficResponse_H_
#define _VpsTrafficResponse_H_


#include <string>
#include "VpsTrafficDataSectionResponse.h"
#include "VpsTrafficHistoryResponse.h"
#include "VpsTrafficTotalsResposne.h"
#include "VpsTrafficUsageResponse.h"
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief VPS Traffic Information
 *
 *  \ingroup Models
 *
 */

class VpsTrafficResponse : public Object {
public:
	/*! \brief Constructor.
	 */
	VpsTrafficResponse();
	VpsTrafficResponse(char* str);

	/*! \brief Destructor.
	 */
	virtual ~VpsTrafficResponse();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getName();

	/*! \brief Set 
	 */
	void setName(std::string  name);
	/*! \brief Get 
	 */
	std::string getTarget();

	/*! \brief Set 
	 */
	void setTarget(std::string  target);
	/*! \brief Get 
	 */
	int getInterval();

	/*! \brief Set 
	 */
	void setInterval(int  interval);
	/*! \brief Get 
	 */
	VpsTrafficHistoryResponse getHistory();

	/*! \brief Set 
	 */
	void setHistory(VpsTrafficHistoryResponse  history);
	/*! \brief Get 
	 */
	std::string getLast();

	/*! \brief Set 
	 */
	void setLast(std::string  last);
	/*! \brief Get 
	 */
	std::list<std::string> getTimes();

	/*! \brief Set 
	 */
	void setTimes(std::list <std::string> times);
	/*! \brief Get 
	 */
	VpsTrafficTotalsResposne getTotals();

	/*! \brief Set 
	 */
	void setTotals(VpsTrafficTotalsResposne  totals);
	/*! \brief Get 
	 */
	VpsTrafficUsageResponse getUsage();

	/*! \brief Set 
	 */
	void setUsage(VpsTrafficUsageResponse  usage);
	/*! \brief Get 
	 */
	std::list<VpsTrafficDataSectionResponse> getData();

	/*! \brief Set 
	 */
	void setData(std::list <VpsTrafficDataSectionResponse> data);

private:
	std::string name;
	std::string target;
	int interval;
	VpsTrafficHistoryResponse history;
	std::string last;
	std::list <std::string>times;
	VpsTrafficTotalsResposne totals;
	VpsTrafficUsageResponse usage;
	std::list <VpsTrafficDataSectionResponse>data;
	void __init();
	void __cleanup();

};
}
}

#endif /* _VpsTrafficResponse_H_ */
