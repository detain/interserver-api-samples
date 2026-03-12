goog.provide('API.Client.Backup');

/**
 * Full detail view of a backup service including billing, service info, and configuration.
 * @record
 */
API.Client.Backup = function() {}

/**
 * @type {!API.Client.BackupServiceInfo}
 * @export
 */
API.Client.Backup.prototype.serviceInfo;

/**
 * @type {!Array<!API.Client.BackupClientLink>}
 * @export
 */
API.Client.Backup.prototype.clientLinks;

/**
 * @type {!API.Client.BackupBillingDetails}
 * @export
 */
API.Client.Backup.prototype.billingDetails;

/**
 * Customer's currency.
 * @type {!string}
 * @export
 */
API.Client.Backup.prototype.custCurrency;

/**
 * Customer's currency symbol.
 * @type {!string}
 * @export
 */
API.Client.Backup.prototype.custCurrencySymbol;

/**
 * @type {!API.Client.BackupServiceMaster}
 * @export
 */
API.Client.Backup.prototype.serviceMaster;

/**
 * Package information.
 * @type {!string}
 * @export
 */
API.Client.Backup.prototype._package;

/**
 * @type {!string}
 * @export
 */
API.Client.Backup.prototype.serviceExtra;

/**
 * @type {!API.Client.BackupExtraInfoTables}
 * @export
 */
API.Client.Backup.prototype.extraInfoTables;

