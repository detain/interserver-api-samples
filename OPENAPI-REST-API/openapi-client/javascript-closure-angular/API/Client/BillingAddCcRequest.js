goog.provide('API.Client.BillingAddCcRequest');

/**
 * Request to add a new creditcard into the system.
 * @record
 */
API.Client.BillingAddCcRequest = function() {}

/**
 * @type {!string}
 * @export
 */
API.Client.BillingAddCcRequest.prototype.name;

/**
 * @type {!string}
 * @export
 */
API.Client.BillingAddCcRequest.prototype.address;

/**
 * @type {!string}
 * @export
 */
API.Client.BillingAddCcRequest.prototype.city;

/**
 * @type {!string}
 * @export
 */
API.Client.BillingAddCcRequest.prototype.state;

/**
 * @type {!string}
 * @export
 */
API.Client.BillingAddCcRequest.prototype.country;

/**
 * @type {!string}
 * @export
 */
API.Client.BillingAddCcRequest.prototype.zip;

/**
 * @type {!string}
 * @export
 */
API.Client.BillingAddCcRequest.prototype.cc;

/**
 * @type {!string}
 * @export
 */
API.Client.BillingAddCcRequest.prototype.ccExp;

/**
 * @type {!string}
 * @export
 */
API.Client.BillingAddCcRequest.prototype.ccCcv2;

