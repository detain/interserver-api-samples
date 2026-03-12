goog.provide('API.Client.AccountInfo');

/**
 * Contains the full account profile including personal info, billing details, OAuth connections, and security settings.
 * @record
 */
API.Client.AccountInfo = function() {}

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfo.prototype.custid;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfo.prototype.ima;

/**
 * @type {!API.Client.AccountInfoData}
 * @export
 */
API.Client.AccountInfo.prototype.data;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfo.prototype.ip;

/**
 * @type {!API.Client.AccountInfo_oauthproviders}
 * @export
 */
API.Client.AccountInfo.prototype.oauthproviders;

/**
 * @type {!API.Client.AccountInfoOauthConfig}
 * @export
 */
API.Client.AccountInfo.prototype.oauthconfig;

/**
 * @type {!Array<!string>}
 * @export
 */
API.Client.AccountInfo.prototype.oauthadapters;

/**
 * @type {!API.Client.AccountInfoLimits}
 * @export
 */
API.Client.AccountInfo.prototype.limits;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfo.prototype.language;

/**
 * @type {!API.Client.AccountInfoCountryCurrencies}
 * @export
 */
API.Client.AccountInfo.prototype.countryCurrencies;

/**
 * @type {!boolean}
 * @export
 */
API.Client.AccountInfo.prototype.enableLocales;

/**
 * @type {!boolean}
 * @export
 */
API.Client.AccountInfo.prototype.enableCurrencies;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfo.prototype.gravatar;

