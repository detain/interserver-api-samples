goog.provide('API.Client.ServicesInfo');

/**
 * Contains the complete catalog of available modules, services, service types, and service categories.
 * @record
 */
API.Client.ServicesInfo = function() {}

/**
 * @type {!API.Client.Modules}
 * @export
 */
API.Client.ServicesInfo.prototype.modules;

/**
 * @type {!API.Client.Services}
 * @export
 */
API.Client.ServicesInfo.prototype.services;

/**
 * @type {!API.Client.ServiceTypes}
 * @export
 */
API.Client.ServicesInfo.prototype.serviceTypes;

/**
 * @type {!API.Client.ServiceCategories}
 * @export
 */
API.Client.ServicesInfo.prototype.serviceCategories;

