goog.provide('API.Client.AccountInfoMaxMindResponse');

/**
 * MaxMind fraud detection scoring data for a credit card transaction.
 * @record
 */
API.Client.AccountInfoMaxMindResponse = function() {}

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoMaxMindResponse.prototype.distance;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoMaxMindResponse.prototype.countryMatch;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoMaxMindResponse.prototype.countryCode;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoMaxMindResponse.prototype.freeMail;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoMaxMindResponse.prototype.anonymousProxy;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoMaxMindResponse.prototype.score;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoMaxMindResponse.prototype.binMatch;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoMaxMindResponse.prototype.binCountry;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoMaxMindResponse.prototype.err;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoMaxMindResponse.prototype.proxyScore;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoMaxMindResponse.prototype.ipRegion;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoMaxMindResponse.prototype.ipCity;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoMaxMindResponse.prototype.ipLatitude;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoMaxMindResponse.prototype.ipLongitude;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoMaxMindResponse.prototype.binName;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoMaxMindResponse.prototype.ipIsp;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoMaxMindResponse.prototype.ipOrg;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoMaxMindResponse.prototype.binNameMatch;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoMaxMindResponse.prototype.binPhoneMatch;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoMaxMindResponse.prototype.binPhone;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoMaxMindResponse.prototype.custPhoneInBillingLoc;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoMaxMindResponse.prototype.highRiskCountry;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoMaxMindResponse.prototype.queriesRemaining;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoMaxMindResponse.prototype.cityPostalMatch;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoMaxMindResponse.prototype.shipCityPostalMatch;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoMaxMindResponse.prototype.maxmindID;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoMaxMindResponse.prototype.ipAsnum;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoMaxMindResponse.prototype.ipUserType;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoMaxMindResponse.prototype.ipCountryConf;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoMaxMindResponse.prototype.ipRegionConf;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoMaxMindResponse.prototype.ipCityConf;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoMaxMindResponse.prototype.ipPostalCode;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoMaxMindResponse.prototype.ipPostalConf;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoMaxMindResponse.prototype.ipAccuracyRadius;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoMaxMindResponse.prototype.ipNetSpeedCell;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoMaxMindResponse.prototype.ipMetroCode;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoMaxMindResponse.prototype.ipAreaCode;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoMaxMindResponse.prototype.ipTimeZone;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoMaxMindResponse.prototype.ipRegionName;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoMaxMindResponse.prototype.ipDomain;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoMaxMindResponse.prototype.ipCountryName;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoMaxMindResponse.prototype.ipContinentCode;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoMaxMindResponse.prototype.ipCorporateProxy;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoMaxMindResponse.prototype.carderEmail;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoMaxMindResponse.prototype.highRiskUsername;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoMaxMindResponse.prototype.highRiskPassword;

/**
 * @type {!API.Client.AccountInfoMaxMindResponse_riskScore}
 * @export
 */
API.Client.AccountInfoMaxMindResponse.prototype.riskScore;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoMaxMindResponse.prototype.isTransProxy;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoMaxMindResponse.prototype.prepaid;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoMaxMindResponse.prototype.minfraudVersion;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoMaxMindResponse.prototype.serviceLevel;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoMaxMindResponse.prototype.explanation;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoMaxMindResponse.prototype.femaleName;

