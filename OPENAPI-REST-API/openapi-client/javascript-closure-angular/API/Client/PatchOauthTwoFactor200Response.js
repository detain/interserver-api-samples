goog.provide('API.Client.patchOauthTwoFactor_200_response');

/**
 * @record
 */
API.Client.PatchOauthTwoFactor200Response = function() {}

/**
 * Whether the 2FA verification succeeded and the user is now logged in.
 * @type {!boolean}
 * @export
 */
API.Client.PatchOauthTwoFactor200Response.prototype.login;

