goog.provide('API.Client.Quickserver');

/**
 * @record
 */
API.Client.Quickserver = function() {}

/**
 * @type {!API.Client.QuickserverServiceInfo}
 * @export
 */
API.Client.Quickserver.prototype.serviceInfo;

/**
 * @type {!Array<!API.Client.QuickserverClientLink>}
 * @export
 */
API.Client.Quickserver.prototype.clientLinks;

/**
 * @type {!API.Client.QuickserverBillingDetails}
 * @export
 */
API.Client.Quickserver.prototype.billingDetails;

/**
 * Currency of the customer
 * @type {!string}
 * @export
 */
API.Client.Quickserver.prototype.custCurrency;

/**
 * Currency symbol of the customer
 * @type {!string}
 * @export
 */
API.Client.Quickserver.prototype.custCurrencySymbol;

/**
 * @type {!API.Client.QuickserverServiceMaster}
 * @export
 */
API.Client.Quickserver.prototype.serviceMaster;

/**
 * Package name
 * @type {!string}
 * @export
 */
API.Client.Quickserver.prototype._package;

/**
 * Operating system template
 * @type {!string}
 * @export
 */
API.Client.Quickserver.prototype.osTemplate;

/**
 * @type {!API.Client.Quickserver_serviceExtra}
 * @export
 */
API.Client.Quickserver.prototype.serviceExtra;

/**
 * @type {!API.Client.Quickserver_extraInfoTables}
 * @export
 */
API.Client.Quickserver.prototype.extraInfoTables;

/**
 * CPU graph data
 * @type {!string}
 * @export
 */
API.Client.Quickserver.prototype.cpuGraphData;

/**
 * Bandwidth x-axis data
 * @type {!string}
 * @export
 */
API.Client.Quickserver.prototype.bandwidthXaxis;

/**
 * Bandwidth y-axis data
 * @type {!string}
 * @export
 */
API.Client.Quickserver.prototype.bandwidthYaxis;

/**
 * Module information
 * @type {!string}
 * @export
 */
API.Client.Quickserver.prototype.module;

/**
 * Authentication token
 * @type {!string}
 * @export
 */
API.Client.Quickserver.prototype.token;

/**
 * Used disk space
 * @type {!string}
 * @export
 */
API.Client.Quickserver.prototype.serviceDiskUsed;

/**
 * Total disk space
 * @type {!string}
 * @export
 */
API.Client.Quickserver.prototype.serviceDiskTotal;

/**
 * Disk usage percentage
 * @type {!number}
 * @export
 */
API.Client.Quickserver.prototype.diskPercentage;

/**
 * Memory information
 * @type {!string}
 * @export
 */
API.Client.Quickserver.prototype.memory;

/**
 * HDD information
 * @type {!string}
 * @export
 */
API.Client.Quickserver.prototype.hdd;

/**
 * @type {!Array<!string>}
 * @export
 */
API.Client.Quickserver.prototype.serviceOverviewExtra;

