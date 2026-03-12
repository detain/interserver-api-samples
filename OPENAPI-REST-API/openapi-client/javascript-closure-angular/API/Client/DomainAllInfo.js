goog.provide('API.Client.DomainAllInfo');

/**
 * Complete domain registration information returned from the registrar, including contacts, nameservers, and expiry dates.
 * @record
 */
API.Client.DomainAllInfo = function() {}

/**
 * @type {!string}
 * @export
 */
API.Client.DomainAllInfo.prototype.oPSVersion;

/**
 * @type {!API.Client.DomainAllInfo_attributes}
 * @export
 */
API.Client.DomainAllInfo.prototype.attributes;

/**
 * @type {!string}
 * @export
 */
API.Client.DomainAllInfo.prototype.object;

/**
 * @type {!string}
 * @export
 */
API.Client.DomainAllInfo.prototype.protocol;

/**
 * @type {!string}
 * @export
 */
API.Client.DomainAllInfo.prototype.responseText;

/**
 * @type {!string}
 * @export
 */
API.Client.DomainAllInfo.prototype.responseCode;

/**
 * @type {!string}
 * @export
 */
API.Client.DomainAllInfo.prototype.action;

/**
 * @type {!string}
 * @export
 */
API.Client.DomainAllInfo.prototype.isSuccess;

