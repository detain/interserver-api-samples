goog.provide('API.Client.DomainProvProcessPending');

/**
 * Provisioning status data for a pending domain order.
 * @record
 */
API.Client.DomainProvProcessPending = function() {}

/**
 * @type {!string}
 * @export
 */
API.Client.DomainProvProcessPending.prototype.oPSVersion;

/**
 * @type {!string}
 * @export
 */
API.Client.DomainProvProcessPending.prototype.responseText;

/**
 * @type {!string}
 * @export
 */
API.Client.DomainProvProcessPending.prototype.protocol;

/**
 * @type {!string}
 * @export
 */
API.Client.DomainProvProcessPending.prototype.responseCode;

/**
 * @type {!string}
 * @export
 */
API.Client.DomainProvProcessPending.prototype.action;

/**
 * @type {!string}
 * @export
 */
API.Client.DomainProvProcessPending.prototype.object;

/**
 * @type {!string}
 * @export
 */
API.Client.DomainProvProcessPending.prototype.isSuccess;

/**
 * @type {!API.Client.DomainProvProcessPending_attributes}
 * @export
 */
API.Client.DomainProvProcessPending.prototype.attributes;

