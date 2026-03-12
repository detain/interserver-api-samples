goog.provide('API.Client.VpsOrderPutRequest');

/**
 * request to validate a vps order
 * @record
 */
API.Client.VpsOrderPutRequest = function() {}

/**
 * OS Distribution
 * @type {!string}
 * @export
 */
API.Client.VpsOrderPutRequest.prototype.osDistro;

/**
 * Number of slices
 * @type {!number}
 * @export
 */
API.Client.VpsOrderPutRequest.prototype.slices;

/**
 * VPS Platform
 * @type {!string}
 * @export
 */
API.Client.VpsOrderPutRequest.prototype.vpsPlatform;

/**
 * Billing Period or Frequency
 * @type {!number}
 * @export
 */
API.Client.VpsOrderPutRequest.prototype.period;

/**
 * Location
 * @type {!number}
 * @export
 */
API.Client.VpsOrderPutRequest.prototype.location;

/**
 * OS Version
 * @type {!string}
 * @export
 */
API.Client.VpsOrderPutRequest.prototype.osVersion;

/**
 * The hostname to assign to the VPS
 * @type {!string}
 * @export
 */
API.Client.VpsOrderPutRequest.prototype.hostname;

/**
 * Root password to assign to the VVPS
 * @type {!string}
 * @export
 */
API.Client.VpsOrderPutRequest.prototype.rootpass;

/**
 * Control Panel
 * @type {!string}
 * @export
 */
API.Client.VpsOrderPutRequest.prototype.controlpanel;

/**
 * Coupon
 * @type {!string}
 * @export
 */
API.Client.VpsOrderPutRequest.prototype.coupon;

/**
 * Order comments or notes
 * @type {!string}
 * @export
 */
API.Client.VpsOrderPutRequest.prototype.comment;

/** @enum {string} */
API.Client.VpsOrderPutRequest.VpsPlatformEnum = { 
  kvm: 'kvm',
  hyperv: 'hyperv',
  kvmstorage: 'kvmstorage',
}
/** @enum {string} */
API.Client.VpsOrderPutRequest.ControlpanelEnum = { 
  none: 'none',
  cpanel: 'cpanel',
  da: 'da',
}
