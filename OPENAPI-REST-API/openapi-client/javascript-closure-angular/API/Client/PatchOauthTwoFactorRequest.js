goog.provide('API.Client.patchOauthTwoFactor_request');

/**
 * @record
 */
API.Client.PatchOauthTwoFactorRequest = function() {}

/**
 * The account ID returned from the POST callback.
 * @type {!number}
 * @export
 */
API.Client.PatchOauthTwoFactorRequest.prototype.accountId;

/**
 * The 6-digit two-factor authentication code.
 * @type {!string}
 * @export
 */
API.Client.PatchOauthTwoFactorRequest.prototype.code;

