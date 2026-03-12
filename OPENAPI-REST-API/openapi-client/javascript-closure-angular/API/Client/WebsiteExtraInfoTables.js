goog.provide('API.Client.WebsiteExtraInfoTables');

/**
 * Supplementary information tables displayed for a webhosting service (links, DNS, preview).
 * @record
 */
API.Client.WebsiteExtraInfoTables = function() {}

/**
 * @type {!API.Client.WebsiteTable}
 * @export
 */
API.Client.WebsiteExtraInfoTables.prototype.links;

/**
 * @type {!API.Client.WebsiteTable}
 * @export
 */
API.Client.WebsiteExtraInfoTables.prototype.preview;

/**
 * @type {!API.Client.WebsiteTable}
 * @export
 */
API.Client.WebsiteExtraInfoTables.prototype.dns;

