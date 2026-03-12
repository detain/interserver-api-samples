goog.provide('API.Client.VpsOrderPostRequest');

/**
 * request to validate a vps order
 * @record
 */
API.Client.VpsOrderPostRequest = function() {}

/**
 * OS Distribution
 * @type {!string}
 * @export
 */
API.Client.VpsOrderPostRequest.prototype.osDistro;

/**
 * Number of slices
 * @type {!number}
 * @export
 */
API.Client.VpsOrderPostRequest.prototype.slices;

/**
 * VPS Platform
 * @type {!string}
 * @export
 */
API.Client.VpsOrderPostRequest.prototype.vpsPlatform;

/**
 * Billing Period or Frequency
 * @type {!number}
 * @export
 */
API.Client.VpsOrderPostRequest.prototype.period;

/**
 * Location
 * @type {!number}
 * @export
 */
API.Client.VpsOrderPostRequest.prototype.location;

/**
 * OS Version
 * @type {!string}
 * @export
 */
API.Client.VpsOrderPostRequest.prototype.osVersion;

/**
 * The hostname to assign to the VPS
 * @type {!string}
 * @export
 */
API.Client.VpsOrderPostRequest.prototype.hostname;

/**
 * Root password to assign to the VVPS
 * @type {!string}
 * @export
 */
API.Client.VpsOrderPostRequest.prototype.rootpass;

/**
 * Control Panel
 * @type {!string}
 * @export
 */
API.Client.VpsOrderPostRequest.prototype.controlpanel;

/**
 * Coupon
 * @type {!string}
 * @export
 */
API.Client.VpsOrderPostRequest.prototype.coupon;

/**
 * Order comments or notes
 * @type {!string}
 * @export
 */
API.Client.VpsOrderPostRequest.prototype.comment;

/** @enum {string} */
API.Client.VpsOrderPostRequest.VpsPlatformEnum = { 
  kvm: 'kvm',
  hyperv: 'hyperv',
  kvmstorage: 'kvmstorage',
}
/** @enum {string} */
API.Client.VpsOrderPostRequest.ControlpanelEnum = { 
  none: 'none',
  cpanel: 'cpanel',
  da: 'da',
}
