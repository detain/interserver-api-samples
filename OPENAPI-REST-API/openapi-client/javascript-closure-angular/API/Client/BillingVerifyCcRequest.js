goog.provide('API.Client.BillingVerifyCcRequest');

/**
 * Payload for verifying a credit card through the verification flow.
 * @record
 */
API.Client.BillingVerifyCcRequest = function() {}

/**
 * Card index to verify.
 * @type {!number}
 * @export
 */
API.Client.BillingVerifyCcRequest.prototype.idx;

/**
 * CVV code for verification.
 * @type {!string}
 * @export
 */
API.Client.BillingVerifyCcRequest.prototype.ccCcv2;

/**
 * First micro-charge amount for verification.
 * @type {!string}
 * @export
 */
API.Client.BillingVerifyCcRequest.prototype.ccAmount1;

/**
 * Second micro-charge amount for verification.
 * @type {!string}
 * @export
 */
API.Client.BillingVerifyCcRequest.prototype.ccAmount2;

/**
 * Whether terms were accepted for verification.
 * @type {!boolean}
 * @export
 */
API.Client.BillingVerifyCcRequest.prototype.terms;

