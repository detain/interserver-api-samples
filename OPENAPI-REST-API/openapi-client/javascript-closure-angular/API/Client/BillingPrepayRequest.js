goog.provide('API.Client.BillingPrepayRequest');

/**
 * Request payload for creating a new prepay balance.
 * @record
 */
API.Client.BillingPrepayRequest = function() {}

/**
 * Module the prepay should be applied to (for example `default`).
 * @type {!string}
 * @export
 */
API.Client.BillingPrepayRequest.prototype.module;

/**
 * Amount to add to prepay balance. Minimum is $10.
 * @type {!number}
 * @export
 */
API.Client.BillingPrepayRequest.prototype.amount;

/**
 * Whether the prepay balance should be used automatically.
 * @type {!string}
 * @export
 */
API.Client.BillingPrepayRequest.prototype.automaticUse;

