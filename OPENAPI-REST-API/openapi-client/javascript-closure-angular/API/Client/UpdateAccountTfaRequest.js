goog.provide('API.Client.updateAccountTfa_request');

/**
 * @record
 */
API.Client.UpdateAccountTfaRequest = function() {}

/**
 * The 6-digit verification code from your authenticator app.
 * @type {!string}
 * @export
 */
API.Client.UpdateAccountTfaRequest.prototype._2faGoogleCode;

