goog.provide('API.Client.LicensesOrder');

/**
 * Available license packages and pricing for ordering a new software license.
 * @record
 */
API.Client.LicensesOrder = function() {}

/**
 * @type {!API.Client.LicensesOrder_serviceCategories}
 * @export
 */
API.Client.LicensesOrder.prototype.serviceCategories;

/**
 * @type {!API.Client.LicensesOrder_packageCosts}
 * @export
 */
API.Client.LicensesOrder.prototype.packageCosts;

/**
 * @type {!API.Client.LicensesOrder_serviceTypes}
 * @export
 */
API.Client.LicensesOrder.prototype.serviceTypes;

