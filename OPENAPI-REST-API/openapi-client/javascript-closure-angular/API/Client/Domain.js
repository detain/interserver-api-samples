goog.provide('API.Client.Domain');

/**
 * Full detail view of a domain service including billing, contacts, DNS, and configuration.
 * @record
 */
API.Client.Domain = function() {}

/**
 * @type {!API.Client.DomainServiceInfo}
 * @export
 */
API.Client.Domain.prototype.serviceInfo;

/**
 * @type {!Object<!string, API.Client.DomainServiceType>}
 * @export
 */
API.Client.Domain.prototype.serviceTypes;

/**
 * @type {!Array<!API.Client.DomainClientLink>}
 * @export
 */
API.Client.Domain.prototype.clientLinks;

/**
 * @type {!API.Client.DomainBillingDetails}
 * @export
 */
API.Client.Domain.prototype.billingDetails;

/**
 * @type {!string}
 * @export
 */
API.Client.Domain.prototype.custCurrency;

/**
 * @type {!string}
 * @export
 */
API.Client.Domain.prototype.custCurrencySymbol;

/**
 * @type {!API.Client.DomainBillingExtra}
 * @export
 */
API.Client.Domain.prototype.serviceExtra;

/**
 * @type {!API.Client.BackupExtraInfoTables}
 * @export
 */
API.Client.Domain.prototype.extraInfoTables;

/**
 * @type {!API.Client.DomainServiceType}
 * @export
 */
API.Client.Domain.prototype.serviceType;

/**
 * @type {!API.Client.DomainContactDetails}
 * @export
 */
API.Client.Domain.prototype.contactDetails;

/**
 * @type {!string}
 * @export
 */
API.Client.Domain.prototype.pwarning;

/**
 * @type {!string}
 * @export
 */
API.Client.Domain.prototype.transferInfo;

/**
 * @type {!boolean}
 * @export
 */
API.Client.Domain.prototype.errors;

/**
 * @type {!Array<!string>}
 * @export
 */
API.Client.Domain.prototype.domainLogs;

/**
 * @type {!API.Client.DomainAllInfo}
 * @export
 */
API.Client.Domain.prototype.allInfo;

/**
 * @type {!string}
 * @export
 */
API.Client.Domain.prototype.registrarStatus;

/**
 * @type {!string}
 * @export
 */
API.Client.Domain.prototype.locked;

/**
 * @type {!string}
 * @export
 */
API.Client.Domain.prototype.whoisPrivacy;

/**
 * @type {!string}
 * @export
 */
API.Client.Domain.prototype.autoRenew;

