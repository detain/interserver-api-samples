goog.provide('API.Client.getAccountTfaSetup_200_response');

/**
 * @record
 */
API.Client.GetAccountTfaSetup200Response = function() {}

/**
 * Base64-encoded secret key for TOTP setup.
 * @type {!string}
 * @export
 */
API.Client.GetAccountTfaSetup200Response.prototype._2faGoogleKey;

/**
 * Human-readable formatted key (chunks of 4 characters).
 * @type {!string}
 * @export
 */
API.Client.GetAccountTfaSetup200Response.prototype._2faGoogleSplit;

