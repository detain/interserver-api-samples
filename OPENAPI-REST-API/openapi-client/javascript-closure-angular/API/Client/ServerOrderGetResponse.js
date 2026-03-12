goog.provide('API.Client.ServerOrderGetResponse');

/**
 * Configuration options and pricing data returned when starting a dedicated server order.
 * @record
 */
API.Client.ServerOrderGetResponse = function() {}

/**
 * @type {!API.Client.FormValues}
 * @export
 */
API.Client.ServerOrderGetResponse.prototype.formValues;

/**
 * @type {!API.Client.ConfigIds}
 * @export
 */
API.Client.ServerOrderGetResponse.prototype.configIds;

/**
 * @type {!number}
 * @export
 */
API.Client.ServerOrderGetResponse.prototype.cpu;

/**
 * @type {!Object<!string, API.Client.Cpu>}
 * @export
 */
API.Client.ServerOrderGetResponse.prototype.cpuLi;

/**
 * @type {!API.Client.ConfigLists}
 * @export
 */
API.Client.ServerOrderGetResponse.prototype.configLi;

/**
 * @type {!number}
 * @export
 */
API.Client.ServerOrderGetResponse.prototype.frequency;

/**
 * @type {!string}
 * @export
 */
API.Client.ServerOrderGetResponse.prototype.currency;

/**
 * @type {!string}
 * @export
 */
API.Client.ServerOrderGetResponse.prototype.country;

/**
 * @type {!string}
 * @export
 */
API.Client.ServerOrderGetResponse.prototype.step;

/**
 * @type {!Object<!string, API.Client.FieldLabel>}
 * @export
 */
API.Client.ServerOrderGetResponse.prototype.fieldLabel;

/**
 * @type {!Object<!string, Object<!string, API.Client.CpuWithDefaults>>}
 * @export
 */
API.Client.ServerOrderGetResponse.prototype.cpuCores;

/**
 * @type {!string}
 * @export
 */
API.Client.ServerOrderGetResponse.prototype.currencySymbol;

/**
 * @type {!number}
 * @export
 */
API.Client.ServerOrderGetResponse.prototype.custid;

/**
 * @type {!string}
 * @export
 */
API.Client.ServerOrderGetResponse.prototype.ima;

/**
 * @type {!Array<!API.Client.Region>}
 * @export
 */
API.Client.ServerOrderGetResponse.prototype.regions;

/**
 * @type {!Array<!API.Client.AssetServer>}
 * @export
 */
API.Client.ServerOrderGetResponse.prototype.assetServers;

/**
 * @type {!Array<!API.Client.Object>}
 * @export
 */
API.Client.ServerOrderGetResponse.prototype.buyItServers;

/**
 * @type {!string}
 * @export
 */
API.Client.ServerOrderGetResponse.prototype.displayShowmore;

/**
 * @type {!number}
 * @export
 */
API.Client.ServerOrderGetResponse.prototype.custDiscount;

