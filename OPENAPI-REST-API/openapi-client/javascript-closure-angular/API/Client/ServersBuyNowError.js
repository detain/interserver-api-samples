goog.provide('API.Client.ServersBuyNowError');

/**
 * Error response when a buy-it-now server order fails validation.
 * @record
 */
API.Client.ServersBuyNowError = function() {}

/**
 * Always false for error responses.
 * @type {!boolean}
 * @export
 */
API.Client.ServersBuyNowError.prototype.success;

/**
 * Human-readable error summary.
 * @type {!string}
 * @export
 */
API.Client.ServersBuyNowError.prototype.text;

/**
 * List of specific validation error messages.
 * @type {!Array<!string>}
 * @export
 */
API.Client.ServersBuyNowError.prototype.errors;

