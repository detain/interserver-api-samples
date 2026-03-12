goog.provide('API.Client.postOauthCallback_200_response');

/**
 * @record
 */
API.Client.PostOauthCallback200Response = function() {}

/**
 * Whether the user was logged in to an existing account.
 * @type {!boolean}
 * @export
 */
API.Client.PostOauthCallback200Response.prototype.login;

/**
 * Whether a new account was created.
 * @type {!boolean}
 * @export
 */
API.Client.PostOauthCallback200Response.prototype.signup;

/**
 * Whether the OAuth provider was linked to an existing account.
 * @type {!boolean}
 * @export
 */
API.Client.PostOauthCallback200Response.prototype.linked;

/**
 * The account ID associated with the OAuth login.
 * @type {!number}
 * @export
 */
API.Client.PostOauthCallback200Response.prototype.accountId;

/**
 * Error code if additional verification is needed (e.g. `2fa_required`).
 * @type {!string}
 * @export
 */
API.Client.PostOauthCallback200Response.prototype.errorCode;

