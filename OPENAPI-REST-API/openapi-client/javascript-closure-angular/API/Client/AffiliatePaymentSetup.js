goog.provide('API.Client.AffiliatePaymentSetup');

/**
 * Affiliate Payment Setup.  Here you can set if you want the payments to go to `prepay` or `paypal` and the PayPal email address.
 * @record
 */
API.Client.AffiliatePaymentSetup = function() {}

/**
 * @type {!string}
 * @export
 */
API.Client.AffiliatePaymentSetup.prototype.affiliatePaypal;

/**
 * @type {!string}
 * @export
 */
API.Client.AffiliatePaymentSetup.prototype.affiliatePaymentMethod;

