goog.provide('API.Client.BillingPaymentMethodRequest');

/**
 * Payload for updating the default account payment method.
 * @record
 */
API.Client.BillingPaymentMethodRequest = function() {}

/**
 * Payment method identifier (cc, paypal, or cc{index}).
 * @type {!string}
 * @export
 */
API.Client.BillingPaymentMethodRequest.prototype.paymentMethod;

/**
 * Whether automatic credit card payments are enabled.
 * @type {!string}
 * @export
 */
API.Client.BillingPaymentMethodRequest.prototype.ccAuto;

