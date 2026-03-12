goog.provide('API.Client.DomainWhoisPrivacyRequest');

/**
 * Request payload for enabling or disabling Whois privacy.
 * @record
 */
API.Client.DomainWhoisPrivacyRequest = function() {}

/**
 * Action to perform (enable or disableCancel).
 * @type {!string}
 * @export
 */
API.Client.DomainWhoisPrivacyRequest.prototype.func;

/**
 * CSRF token if the API requires it for the account.
 * @type {!string}
 * @export
 */
API.Client.DomainWhoisPrivacyRequest.prototype.csrfToken;

/**
 * @type {!string}
 * @export
 */
API.Client.DomainWhoisPrivacyRequest.prototype.domainFirstname;

/**
 * @type {!string}
 * @export
 */
API.Client.DomainWhoisPrivacyRequest.prototype.domainLastname;

/**
 * @type {!string}
 * @export
 */
API.Client.DomainWhoisPrivacyRequest.prototype.domainEmail;

/**
 * @type {!string}
 * @export
 */
API.Client.DomainWhoisPrivacyRequest.prototype.domainAddress;

/**
 * @type {!string}
 * @export
 */
API.Client.DomainWhoisPrivacyRequest.prototype.domainAddress2;

/**
 * @type {!string}
 * @export
 */
API.Client.DomainWhoisPrivacyRequest.prototype.domainAddress3;

/**
 * @type {!string}
 * @export
 */
API.Client.DomainWhoisPrivacyRequest.prototype.domainCity;

/**
 * @type {!string}
 * @export
 */
API.Client.DomainWhoisPrivacyRequest.prototype.domainState;

/**
 * @type {!string}
 * @export
 */
API.Client.DomainWhoisPrivacyRequest.prototype.domainZip;

/**
 * @type {!string}
 * @export
 */
API.Client.DomainWhoisPrivacyRequest.prototype.domainCountry;

/**
 * @type {!string}
 * @export
 */
API.Client.DomainWhoisPrivacyRequest.prototype.domainPhone;

/**
 * @type {!string}
 * @export
 */
API.Client.DomainWhoisPrivacyRequest.prototype.domainFax;

/**
 * @type {!string}
 * @export
 */
API.Client.DomainWhoisPrivacyRequest.prototype.domainCompany;

/**
 * @type {!string}
 * @export
 */
API.Client.DomainWhoisPrivacyRequest.prototype.domainExtra;

