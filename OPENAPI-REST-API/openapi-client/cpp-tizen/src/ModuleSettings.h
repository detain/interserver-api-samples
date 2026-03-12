/*
 * ModuleSettings.h
 *
 * The settings for a module.
 */

#ifndef _ModuleSettings_H_
#define _ModuleSettings_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief The settings for a module.
 *
 *  \ingroup Models
 *
 */

class ModuleSettings : public Object {
public:
	/*! \brief Constructor.
	 */
	ModuleSettings();
	ModuleSettings(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ModuleSettings();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	int getSERVICEIDOFFSET();

	/*! \brief Set 
	 */
	void setSERVICEIDOFFSET(int  sERVICE_ID_OFFSET);
	/*! \brief Get 
	 */
	bool getUSEREPEATINVOICE();

	/*! \brief Set 
	 */
	void setUSEREPEATINVOICE(bool  uSE_REPEAT_INVOICE);
	/*! \brief Get 
	 */
	bool getUSEPACKAGES();

	/*! \brief Set 
	 */
	void setUSEPACKAGES(bool  uSE_PACKAGES);
	/*! \brief Get 
	 */
	int getBILLINGDAYSOFFSET();

	/*! \brief Set 
	 */
	void setBILLINGDAYSOFFSET(int  bILLING_DAYS_OFFSET);
	/*! \brief Get 
	 */
	std::string getIMGNAME();

	/*! \brief Set 
	 */
	void setIMGNAME(std::string  iMGNAME);
	/*! \brief Get 
	 */
	int getREPEATBILLINGMETHOD();

	/*! \brief Set 
	 */
	void setREPEATBILLINGMETHOD(int  rEPEAT_BILLING_METHOD);
	/*! \brief Get 
	 */
	int getDELETEPENDINGDAYS();

	/*! \brief Set 
	 */
	void setDELETEPENDINGDAYS(int  dELETE_PENDING_DAYS);
	/*! \brief Get 
	 */
	int getSUSPENDDAYS();

	/*! \brief Set 
	 */
	void setSUSPENDDAYS(int  sUSPEND_DAYS);
	/*! \brief Get 
	 */
	int getSUSPENDWARNINGDAYS();

	/*! \brief Set 
	 */
	void setSUSPENDWARNINGDAYS(int  sUSPEND_WARNING_DAYS);
	/*! \brief Get 
	 */
	std::string getTITLE();

	/*! \brief Set 
	 */
	void setTITLE(std::string  tITLE);
	/*! \brief Get 
	 */
	std::string getMENUNAME();

	/*! \brief Set 
	 */
	void setMENUNAME(std::string  mENUNAME);
	/*! \brief Get 
	 */
	std::string getEMAILFROM();

	/*! \brief Set 
	 */
	void setEMAILFROM(std::string  eMAIL_FROM);
	/*! \brief Get 
	 */
	std::string getTBLNAME();

	/*! \brief Set 
	 */
	void setTBLNAME(std::string  tBLNAME);
	/*! \brief Get 
	 */
	std::string getTABLE();

	/*! \brief Set 
	 */
	void setTABLE(std::string  tABLE);
	/*! \brief Get 
	 */
	std::string getTITLEFIELD();

	/*! \brief Set 
	 */
	void setTITLEFIELD(std::string  tITLE_FIELD);
	/*! \brief Get 
	 */
	std::string getPREFIX();

	/*! \brief Set 
	 */
	void setPREFIX(std::string  pREFIX);
	/*! \brief Get 
	 */
	std::string getTITLEFIELD2();

	/*! \brief Set 
	 */
	void setTITLEFIELD2(std::string  tITLE_FIELD2);
	/*! \brief Get 
	 */
	std::string getTITLEFIELD3();

	/*! \brief Set 
	 */
	void setTITLEFIELD3(std::string  tITLE_FIELD3);

private:
	int sERVICE_ID_OFFSET;
	bool uSE_REPEAT_INVOICE;
	bool uSE_PACKAGES;
	int bILLING_DAYS_OFFSET;
	std::string iMGNAME;
	int rEPEAT_BILLING_METHOD;
	int dELETE_PENDING_DAYS;
	int sUSPEND_DAYS;
	int sUSPEND_WARNING_DAYS;
	std::string tITLE;
	std::string mENUNAME;
	std::string eMAIL_FROM;
	std::string tBLNAME;
	std::string tABLE;
	std::string tITLE_FIELD;
	std::string pREFIX;
	std::string tITLE_FIELD2;
	std::string tITLE_FIELD3;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ModuleSettings_H_ */
