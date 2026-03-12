goog.provide('API.Client.WebsitesOrder');

/**
 * Schema for the WebsitesOrder object
 * @record
 */
API.Client.WebsitesOrder = function() {}

/**
 * Step description
 * @type {!string}
 * @export
 */
API.Client.WebsitesOrder.prototype.step;

/**
 * Website description
 * @type {!string}
 * @export
 */
API.Client.WebsitesOrder.prototype.website;

/**
 * Period description
 * @type {!number}
 * @export
 */
API.Client.WebsitesOrder.prototype.period;

/**
 * Service offer ID description
 * @type {!number}
 * @export
 */
API.Client.WebsitesOrder.prototype.serviceOfferId;

/**
 * @type {!API.Client.WebsitesOrderPackages}
 * @export
 */
API.Client.WebsitesOrder.prototype.packages;

/**
 * Enable domain registering description
 * @type {!boolean}
 * @export
 */
API.Client.WebsitesOrder.prototype.enableDomainRegistering;

/**
 * @type {!API.Client.WebsitesOrderJsonServices}
 * @export
 */
API.Client.WebsitesOrder.prototype.jsonServices;

/**
 * @type {!API.Client.WebsitesOrderJsonServiceOffers}
 * @export
 */
API.Client.WebsitesOrder.prototype.jsonServiceOffers;

/**
 * @type {!API.Client.WebsitesOrder_serviceTypes}
 * @export
 */
API.Client.WebsitesOrder.prototype.serviceTypes;

/**
 * @type {!API.Client.WebsitesOrder_serviceOffers}
 * @export
 */
API.Client.WebsitesOrder.prototype.serviceOffers;

/**
 * @type {!API.Client.WebsitesOrder_packges}
 * @export
 */
API.Client.WebsitesOrder.prototype.packges;

