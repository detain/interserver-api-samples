goog.provide('API.Client.LoginInfo');

/**
 * Basic information useful for rendering a login page.
 * @record
 */
API.Client.LoginInfo = function() {}

/**
 * A base64 encoded image to use for rendering the alternateive captcha.
 * @type {!string}
 * @export
 */
API.Client.LoginInfo.prototype.captcha;

/**
 * @type {!API.Client.LoginServiceCounts}
 * @export
 */
API.Client.LoginInfo.prototype.counts;

/**
 * A logo image url.
 * @type {!string}
 * @export
 */
API.Client.LoginInfo.prototype.logo;

/**
 * The desired langauge to render the site with.
 * @type {!string}
 * @export
 */
API.Client.LoginInfo.prototype.language;

