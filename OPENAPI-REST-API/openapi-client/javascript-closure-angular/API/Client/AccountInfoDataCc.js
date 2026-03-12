goog.provide('API.Client.AccountInfoDataCc');

/**
 * Credit card information stored on the account.
 * @record
 */
API.Client.AccountInfoDataCc = function() {}

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoDataCc.prototype.cc;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoDataCc.prototype.ccExp;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoDataCc.prototype.name;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoDataCc.prototype.address;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoDataCc.prototype.city;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoDataCc.prototype.state;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoDataCc.prototype.zip;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoDataCc.prototype.country;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoDataCc.prototype.maxmindRiskscore;

/**
 * @type {!API.Client.AccountInfoMaxMindResponse}
 * @export
 */
API.Client.AccountInfoDataCc.prototype.maxmind;

/**
 * @type {!boolean}
 * @export
 */
API.Client.AccountInfoDataCc.prototype.verified;

