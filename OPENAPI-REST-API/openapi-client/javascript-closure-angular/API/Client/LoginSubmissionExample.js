goog.provide('API.Client.LoginSubmissionExample');

/**
 * The data to submit in the login request.
 * @record
 */
API.Client.LoginSubmissionExample = function() {}

/**
 * @type {!string}
 * @export
 */
API.Client.LoginSubmissionExample.prototype.login;

/**
 * @type {!string}
 * @export
 */
API.Client.LoginSubmissionExample.prototype.passwd;

/**
 * @type {!string}
 * @export
 */
API.Client.LoginSubmissionExample.prototype.remember;

/**
 * @type {!API.Client.LoginSubmissionExample_g_recaptcha_response}
 * @export
 */
API.Client.LoginSubmissionExample.prototype.gRecaptchaResponse;

/**
 * Two Factor Authentication Response.
 * @type {!string}
 * @export
 */
API.Client.LoginSubmissionExample.prototype.tfa;

