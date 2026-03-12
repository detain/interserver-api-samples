goog.provide('API.Client.AccountInfoData');

/**
 * Detailed account profile data including contact info, billing, API keys, and security settings.
 * @record
 */
API.Client.AccountInfoData = function() {}

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype.group;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype.address;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype.city;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype.country;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype.disableCc;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype.fraudrecordScore;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype.ima;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype.name;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype.paymentMethod;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype.phone;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype.pin;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype.state;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype.status;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype.zip;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype.accountId;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype.accountLid;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype.address2;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype.affiliateDockDescription;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype.affiliateDockTitle;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype.affiliatePaymentMethod;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype.affiliatePaypal;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype.cc;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype.ccAuto;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype.ccExp;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype.ccType;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype.ccWhitelist;

/**
 * @type {!API.Client.AccountInfoDataCcs}
 * @export
 */
API.Client.AccountInfoData.prototype.ccs;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype.ccsAdded;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype.company;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype.currency;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype.disableReinstall;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype.disableReset;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype.email;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype.emailAbuse;

/**
 * @type {!API.Client.AccountInfoData_email_settings}
 * @export
 */
API.Client.AccountInfoData.prototype.emailSettings;

/**
 * @type {!API.Client.AccountInfoData_extra}
 * @export
 */
API.Client.AccountInfoData.prototype.extra;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype.facebookId;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype.facebookUrl;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype.firstname;

/**
 * @type {!API.Client.AccountInfoData_fraudrecord}
 * @export
 */
API.Client.AccountInfoData.prototype.fraudrecord;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype.githubId;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype.githubUrl;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype.googleId;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype.googleUrl;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype.innertellId;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype.lastname;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype.locale;

/**
 * @type {!API.Client.AccountInfoMaxMindResponse}
 * @export
 */
API.Client.AccountInfoData.prototype.maxmind;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype.maxmindScore;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype.mbId;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype.modernbillId;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype.picture;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype.referrerCoupon;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype.resellerMarkup;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype.username;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype.sshKey;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype.sshKeyWrapped;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype.apiKey;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype.apiKeyWrapped;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype._2faGoogleKey;

/**
 * @type {!boolean}
 * @export
 */
API.Client.AccountInfoData.prototype._2faGoogleEnabled;

/**
 * @type {!number}
 * @export
 */
API.Client.AccountInfoData.prototype._2faGoogle;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype._2faGoogleSplit;

/**
 * @type {!string}
 * @export
 */
API.Client.AccountInfoData.prototype._2faGoogleQr;

