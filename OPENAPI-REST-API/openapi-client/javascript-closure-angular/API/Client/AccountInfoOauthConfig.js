goog.provide('API.Client.AccountInfoOauthConfig');

/**
 * OAuth integration configuration including callback URL and available providers.
 * @record
 */
API.Client.AccountInfoOauthConfig = function() {}

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoOauthConfig.prototype.callback;

/**
 * @type {!API.Client.AccountInfoOauthConfigProviders}
 * @export
 */
API.Client.AccountInfoOauthConfig.prototype.providers;

