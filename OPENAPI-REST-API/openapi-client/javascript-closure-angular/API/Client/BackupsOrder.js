goog.provide('API.Client.BackupsOrder');

/**
 * Available backup storage packages and pricing for ordering a new backup service.
 * @record
 */
API.Client.BackupsOrder = function() {}

/**
 * @type {!API.Client.BackupsOrderPackageCosts}
 * @export
 */
API.Client.BackupsOrder.prototype.packageCosts;

/**
 * @type {!API.Client.BackupsOrder_serviceTypes}
 * @export
 */
API.Client.BackupsOrder.prototype.serviceTypes;

