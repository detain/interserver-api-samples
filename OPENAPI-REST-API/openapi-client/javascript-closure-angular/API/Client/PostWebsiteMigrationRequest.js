goog.provide('API.Client.postWebsiteMigration_request');

/**
 * @record
 */
API.Client.PostWebsiteMigrationRequest = function() {}

/**
 * URL of the customer's current hosting portal.
 * @type {!string}
 * @export
 */
API.Client.PostWebsiteMigrationRequest.prototype.custPortal;

/**
 * Registered email address at the current host.
 * @type {!string}
 * @export
 */
API.Client.PostWebsiteMigrationRequest.prototype.regEmail;

/**
 * Password for the current hosting account.
 * @type {!string}
 * @export
 */
API.Client.PostWebsiteMigrationRequest.prototype.password;

/**
 * URL of the current control panel.
 * @type {!string}
 * @export
 */
API.Client.PostWebsiteMigrationRequest.prototype.ctrlPanel;

/**
 * FTP username at the current host.
 * @type {!string}
 * @export
 */
API.Client.PostWebsiteMigrationRequest.prototype.ftpUsername;

/**
 * FTP password at the current host.
 * @type {!string}
 * @export
 */
API.Client.PostWebsiteMigrationRequest.prototype.ftpPassword;

/**
 * Information about site traffic during migration.
 * @type {!string}
 * @export
 */
API.Client.PostWebsiteMigrationRequest.prototype.siteBusyMig;

/**
 * Special requirements for the migration.
 * @type {!string}
 * @export
 */
API.Client.PostWebsiteMigrationRequest.prototype.splReqMig;

/**
 * Whether domain registration assistance is needed.
 * @type {!string}
 * @export
 */
API.Client.PostWebsiteMigrationRequest.prototype.domainReg;

/**
 * Data migration timing preference.
 * @type {!string}
 * @export
 */
API.Client.PostWebsiteMigrationRequest.prototype.dataMig;

/**
 * Domain registrar portal URL.
 * @type {!string}
 * @export
 */
API.Client.PostWebsiteMigrationRequest.prototype.domainRegPortal;

/**
 * Email for the domain registrar account.
 * @type {!string}
 * @export
 */
API.Client.PostWebsiteMigrationRequest.prototype.domainRegEmail;

/**
 * Password for the domain registrar account.
 * @type {!string}
 * @export
 */
API.Client.PostWebsiteMigrationRequest.prototype.domainRegPassword;

