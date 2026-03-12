goog.provide('API.Client.ServerOrder');

/**
 * Object representing a server order.
 * @record
 */
API.Client.ServerOrder = function() {}

/**
 * @type {!API.Client.ServerOrderFormValues}
 * @export
 */
API.Client.ServerOrder.prototype.formValues;

/**
 * @type {!API.Client.ServerOrderConfigIds}
 * @export
 */
API.Client.ServerOrder.prototype.configIds;

/**
 * Number of CPUs for the server order.
 * @type {!number}
 * @export
 */
API.Client.ServerOrder.prototype.cpu;

/**
 * @type {!API.Client.ServerOrderFieldLabels}
 * @export
 */
API.Client.ServerOrder.prototype.fieldLabel;

/**
 * @type {!API.Client.ServerOrder_cpu_li}
 * @export
 */
API.Client.ServerOrder.prototype.cpuLi;

/**
 * @type {!API.Client.ServerOrder_memory_li}
 * @export
 */
API.Client.ServerOrder.prototype.memoryLi;

/**
 * @type {!API.Client.ServerOrder_bandwidth_li}
 * @export
 */
API.Client.ServerOrder.prototype.bandwidthLi;

/**
 * @type {!API.Client.ServerOrder_ips_li}
 * @export
 */
API.Client.ServerOrder.prototype.ipsLi;

/**
 * @type {!API.Client.ServerOrder_os_li}
 * @export
 */
API.Client.ServerOrder.prototype.osLi;

/**
 * @type {!API.Client.ServerOrder_cp_li}
 * @export
 */
API.Client.ServerOrder.prototype.cpLi;

/**
 * RAID options for the server order.
 * @type {!Array<!API.Client.ServerOrderRAID>}
 * @export
 */
API.Client.ServerOrder.prototype.raidLi;

