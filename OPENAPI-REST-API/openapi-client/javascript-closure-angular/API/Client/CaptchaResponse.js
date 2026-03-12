goog.provide('API.Client.CaptchaResponse');

/**
 * A base-64 encoded captcha image.
 * @record
 */
API.Client.CaptchaResponse = function() {}

/**
 * The base64 encoded captcha image.
 * @type {!string}
 * @export
 */
API.Client.CaptchaResponse.prototype.captcha;

