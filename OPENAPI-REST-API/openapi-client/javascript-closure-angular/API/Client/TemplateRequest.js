goog.provide('API.Client.TemplateRequest');

/**
 * VPS OS Template Request
 * @record
 */
API.Client.TemplateRequest = function() {}

/**
 * OS Template Filename
 * @type {!string}
 * @export
 */
API.Client.TemplateRequest.prototype.template;

/**
 * Password for this account.
 * @type {!string}
 * @export
 */
API.Client.TemplateRequest.prototype.localPassword;

/**
 * Password for Root / Administrator Account.
 * @type {!string}
 * @export
 */
API.Client.TemplateRequest.prototype.password;

