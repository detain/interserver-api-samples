goog.provide('API.Client.WebsitesOrderServiceOffer');

/**
 * @record
 */
API.Client.WebsitesOrderServiceOffer = function() {}

/**
 * The ID of the service offer.
 * @type {!string}
 * @export
 */
API.Client.WebsitesOrderServiceOffer.prototype.serviceOfferId;

/**
 * The ID of the associated service.
 * @type {!string}
 * @export
 */
API.Client.WebsitesOrderServiceOffer.prototype.serviceId;

/**
 * The introductory cost of the service offer.
 * @type {!string}
 * @export
 */
API.Client.WebsitesOrderServiceOffer.prototype.introCost;

/**
 * The renewal cost of the service offer.
 * @type {!string}
 * @export
 */
API.Client.WebsitesOrderServiceOffer.prototype.renewalCost;

/**
 * The introductory frequency of the service offer.
 * @type {!string}
 * @export
 */
API.Client.WebsitesOrderServiceOffer.prototype.introFrequency;

/**
 * The renewal frequency of the service offer.
 * @type {!string}
 * @export
 */
API.Client.WebsitesOrderServiceOffer.prototype.renewalFrequency;

/**
 * Indicates if coupons are allowed (1 for yes, 0 for no).
 * @type {!string}
 * @export
 */
API.Client.WebsitesOrderServiceOffer.prototype.allowCoupon;

/**
 * The module of the service offer.
 * @type {!string}
 * @export
 */
API.Client.WebsitesOrderServiceOffer.prototype.serviceModule;

/**
 * The creation timestamp of the service offer.
 * @type {!string}
 * @export
 */
API.Client.WebsitesOrderServiceOffer.prototype.createdAt;

/**
 * The update timestamp of the service offer.
 * @type {!string}
 * @export
 */
API.Client.WebsitesOrderServiceOffer.prototype.updatedAt;

/**
 * The deletion timestamp of the service offer.
 * @type {!string}
 * @export
 */
API.Client.WebsitesOrderServiceOffer.prototype.deletedAt;

