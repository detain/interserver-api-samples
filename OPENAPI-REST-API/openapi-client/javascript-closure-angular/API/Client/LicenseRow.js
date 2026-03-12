goog.provide('API.Client.LicenseRow');

/**
 * A result row from the `Licenses` `GET` request.
 * @record
 */
API.Client.LicenseRow = function() {}

/**
 * The id of the license.
 * @type {!string}
 * @export
 */
API.Client.LicenseRow.prototype.licenseId;

/**
 * The hostname of the license.
 * @type {!string}
 * @export
 */
API.Client.LicenseRow.prototype.licenseHostname;

/**
 * The ip of the license.
 * @type {!string}
 * @export
 */
API.Client.LicenseRow.prototype.licenseIp;

/**
 * The services name of the license.
 * @type {!string}
 * @export
 */
API.Client.LicenseRow.prototype.servicesName;

/**
 * The cost of the license.
 * @type {!string}
 * @export
 */
API.Client.LicenseRow.prototype.cost;

/**
 * The status of the license.
 * @type {!string}
 * @export
 */
API.Client.LicenseRow.prototype.licenseStatus;

/**
 * The invoices paid of the license.
 * @type {!string}
 * @export
 */
API.Client.LicenseRow.prototype.invoicesPaid;

/**
 * The invoices date of the license.
 * @type {!Date}
 * @export
 */
API.Client.LicenseRow.prototype.invoicesDate;

