goog.provide('API.Client.WebsiteTable');

/**
 * @record
 */
API.Client.WebsiteTable = function() {}

/**
 * Title of the table
 * @type {!string}
 * @export
 */
API.Client.WebsiteTable.prototype.title;

/**
 * @type {!Array<!API.Client.WebsiteTableRow>}
 * @export
 */
API.Client.WebsiteTable.prototype.rows;

