goog.provide('API.Client.LoginErrorResponse');

/**
 * Error resposne during login indicating further action.
 * @record
 */
API.Client.LoginErrorResponse = function() {}

/**
 * @type {!string}
 * @export
 */
API.Client.LoginErrorResponse.prototype.message;

/**
 * @type {!string}
 * @export
 */
API.Client.LoginErrorResponse.prototype.field;

