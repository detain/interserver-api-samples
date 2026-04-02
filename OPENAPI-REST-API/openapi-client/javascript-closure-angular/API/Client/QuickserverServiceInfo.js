goog.provide('API.Client.QuickserverServiceInfo');

/**
 * Core service record for a QuickServer including ID, status, IP, OS, and billing details.
 * @record
 */
API.Client.QuickserverServiceInfo = function() {}

/**
 * Quickserver ID
 * @type {!string}
 * @export
 */
API.Client.QuickserverServiceInfo.prototype.qsId;

/**
 * Customer ID
 * @type {!string}
 * @export
 */
API.Client.QuickserverServiceInfo.prototype.qsCustid;

/**
 * Server information
 * @type {!string}
 * @export
 */
API.Client.QuickserverServiceInfo.prototype.qsServer;

/**
 * IP address
 * @type {!string}
 * @export
 */
API.Client.QuickserverServiceInfo.prototype.qsIp;

/**
 * IPv6 address (null)
 * @type {!string}
 * @export
 */
API.Client.QuickserverServiceInfo.prototype.qsIpv6;

/**
 * VZ ID
 * @type {!string}
 * @export
 */
API.Client.QuickserverServiceInfo.prototype.qsVzid;

/**
 * Currency
 * @type {!string}
 * @export
 */
API.Client.QuickserverServiceInfo.prototype.qsCurrency;

/**
 * Type
 * @type {!string}
 * @export
 */
API.Client.QuickserverServiceInfo.prototype.qsType;

/**
 * Order date
 * @type {!string}
 * @export
 */
API.Client.QuickserverServiceInfo.prototype.qsOrderDate;

/**
 * Status
 * @type {!string}
 * @export
 */
API.Client.QuickserverServiceInfo.prototype.qsStatus;

/**
 * Invoice number
 * @type {!string}
 * @export
 */
API.Client.QuickserverServiceInfo.prototype.qsInvoice;

/**
 * Coupon information
 * @type {!string}
 * @export
 */
API.Client.QuickserverServiceInfo.prototype.qsCoupon;

/**
 * Extra information
 * @type {!string}
 * @export
 */
API.Client.QuickserverServiceInfo.prototype.qsExtra;

/**
 * Hostname
 * @type {!string}
 * @export
 */
API.Client.QuickserverServiceInfo.prototype.qsHostname;

/**
 * Server status
 * @type {!string}
 * @export
 */
API.Client.QuickserverServiceInfo.prototype.qsServerStatus;

/**
 * Comment
 * @type {!string}
 * @export
 */
API.Client.QuickserverServiceInfo.prototype.qsComment;

/**
 * Slices information
 * @type {!string}
 * @export
 */
API.Client.QuickserverServiceInfo.prototype.qsSlices;

/**
 * VNC information
 * @type {!string}
 * @export
 */
API.Client.QuickserverServiceInfo.prototype.qsVnc;

/**
 * VNC port (null)
 * @type {!number}
 * @export
 */
API.Client.QuickserverServiceInfo.prototype.qsVncPort;

/**
 * Root password
 * @type {!string}
 * @export
 */
API.Client.QuickserverServiceInfo.prototype.qsRootpass;

/**
 * MAC address
 * @type {!string}
 * @export
 */
API.Client.QuickserverServiceInfo.prototype.qsMac;

/**
 * Operating system
 * @type {!string}
 * @export
 */
API.Client.QuickserverServiceInfo.prototype.qsOs;

/**
 * OS version
 * @type {!string}
 * @export
 */
API.Client.QuickserverServiceInfo.prototype.qsVersion;

/**
 * Location
 * @type {!string}
 * @export
 */
API.Client.QuickserverServiceInfo.prototype.qsLocation;

/**
 * Platform (null)
 * @type {!string}
 * @export
 */
API.Client.QuickserverServiceInfo.prototype.qsPlatform;

