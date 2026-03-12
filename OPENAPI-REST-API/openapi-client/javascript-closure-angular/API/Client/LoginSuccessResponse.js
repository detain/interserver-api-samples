goog.provide('API.Client.LoginSuccessResponse');

/**
 * The response from a successful login.
 * @record
 */
API.Client.LoginSuccessResponse = function() {}

/**
 * @type {!string}
 * @export
 */
API.Client.LoginSuccessResponse.prototype.sessionId;

/**
 * @type {!number}
 * @export
 */
API.Client.LoginSuccessResponse.prototype.accountId;

/**
 * @type {!string}
 * @export
 */
API.Client.LoginSuccessResponse.prototype.accountLid;

/**
 * @type {!string}
 * @export
 */
API.Client.LoginSuccessResponse.prototype.ima;

/**
 * @type {!string}
 * @export
 */
API.Client.LoginSuccessResponse.prototype.gravatar;

