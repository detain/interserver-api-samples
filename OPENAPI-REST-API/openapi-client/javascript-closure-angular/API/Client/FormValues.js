goog.provide('API.Client.FormValues');

/**
 * Currently selected configuration option IDs for a server order form.
 * @record
 */
API.Client.FormValues = function() {}

/**
 * Selected memory option ID.
 * @type {!number}
 * @export
 */
API.Client.FormValues.prototype.memory;

/**
 * Selected bandwidth option ID.
 * @type {!number}
 * @export
 */
API.Client.FormValues.prototype.bandwidth;

/**
 * Selected IP block option ID.
 * @type {!number}
 * @export
 */
API.Client.FormValues.prototype.ips;

/**
 * Selected operating system option ID.
 * @type {!number}
 * @export
 */
API.Client.FormValues.prototype.os;

/**
 * Selected control panel option ID.
 * @type {!number}
 * @export
 */
API.Client.FormValues.prototype.cp;

/**
 * Selected RAID option ID.
 * @type {!number}
 * @export
 */
API.Client.FormValues.prototype.raid;

/**
 * Selected hard drive option ID.
 * @type {!number}
 * @export
 */
API.Client.FormValues.prototype.hd;

/**
 * Selected datacenter region ID.
 * @type {!number}
 * @export
 */
API.Client.FormValues.prototype.region;

