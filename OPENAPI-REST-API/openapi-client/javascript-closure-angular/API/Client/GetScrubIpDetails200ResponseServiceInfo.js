goog.provide('API.Client.getScrubIpDetails_200_response_serviceInfo');

/**
 * @record
 */
API.Client.GetScrubIpDetails200ResponseServiceInfo = function() {}

/**
 * @type {!string}
 * @export
 */
API.Client.GetScrubIpDetails200ResponseServiceInfo.prototype.scrubIpId;

/**
 * @type {!string}
 * @export
 */
API.Client.GetScrubIpDetails200ResponseServiceInfo.prototype.scrubIpType;

/**
 * @type {!string}
 * @export
 */
API.Client.GetScrubIpDetails200ResponseServiceInfo.prototype.scrubIpCustid;

/**
 * @type {!string}
 * @export
 */
API.Client.GetScrubIpDetails200ResponseServiceInfo.prototype.scrubIpOrderDate;

/**
 * @type {!string}
 * @export
 */
API.Client.GetScrubIpDetails200ResponseServiceInfo.prototype.scrubIpIp;

/**
 * @type {!string}
 * @export
 */
API.Client.GetScrubIpDetails200ResponseServiceInfo.prototype.scrubIpServiceId;

/**
 * @type {!string}
 * @export
 */
API.Client.GetScrubIpDetails200ResponseServiceInfo.prototype.scrubIpServiceModule;

/**
 * @type {!string}
 * @export
 */
API.Client.GetScrubIpDetails200ResponseServiceInfo.prototype.scrubIpStatus;

/**
 * @type {!string}
 * @export
 */
API.Client.GetScrubIpDetails200ResponseServiceInfo.prototype.scrubIpInvoice;

/**
 * @type {!string}
 * @export
 */
API.Client.GetScrubIpDetails200ResponseServiceInfo.prototype.scrubIpCurrency;

/**
 * @type {!string}
 * @export
 */
API.Client.GetScrubIpDetails200ResponseServiceInfo.prototype.scrubIpCoupon;

/**
 * @type {!string}
 * @export
 */
API.Client.GetScrubIpDetails200ResponseServiceInfo.prototype.scrubIpComment;

/** @enum {string} */
API.Client.GetScrubIpDetails200ResponseServiceInfo.ScrubIpStatusEnum = { 
  active: 'active',
  pending: 'pending',
  canceled: 'canceled',
  expired: 'expired',
}
