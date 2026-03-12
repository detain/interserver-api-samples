goog.provide('API.Client.VpsOrder');

/**
 * Pricing and configuration options for ordering a new VPS, including slice costs by platform and available OS templates.
 * @record
 */
API.Client.VpsOrder = function() {}

/**
 * Cost of VPS Slice SSD OVZ
 * @type {!number}
 * @export
 */
API.Client.VpsOrder.prototype.vpsSliceSsdOvzCost;

/**
 * Cost of VPS Slice OVZ
 * @type {!number}
 * @export
 */
API.Client.VpsOrder.prototype.vpsSliceOvzCost;

/**
 * Cost of VPS Slice SSD Virtuozzo
 * @type {!number}
 * @export
 */
API.Client.VpsOrder.prototype.vpsSliceSsdVirtuozzoCost;

/**
 * Cost of VPS Slice Virtuozzo
 * @type {!number}
 * @export
 */
API.Client.VpsOrder.prototype.vpsSliceVirtuozzoCost;

/**
 * Cost of VPS Slice HyperV
 * @type {!number}
 * @export
 */
API.Client.VpsOrder.prototype.vpsSliceHypervCost;

/**
 * Cost of VPS Slice VMware
 * @type {!number}
 * @export
 */
API.Client.VpsOrder.prototype.vpsSliceVmwareCost;

/**
 * Cost of VPS Slice LXC
 * @type {!number}
 * @export
 */
API.Client.VpsOrder.prototype.vpsSliceLxcCost;

/**
 * Cost of VPS Slice Xen
 * @type {!number}
 * @export
 */
API.Client.VpsOrder.prototype.vpsSliceXenCost;

/**
 * Cost of VPS Slice KVM L
 * @type {!number}
 * @export
 */
API.Client.VpsOrder.prototype.vpsSliceKvmLCost;

/**
 * Cost of VPS Slice KVM Storage
 * @type {!number}
 * @export
 */
API.Client.VpsOrder.prototype.vpsSliceKvmStorageCost;

/**
 * Cost of VPS in NY
 * @type {!number}
 * @export
 */
API.Client.VpsOrder.prototype.vpsNyCost;

/**
 * Cost of VPS Slice KVM Windows
 * @type {!number}
 * @export
 */
API.Client.VpsOrder.prototype.vpsSliceKvmWCost;

/**
 * Cost of cPanel
 * @type {!number}
 * @export
 */
API.Client.VpsOrder.prototype.cpanelCost;

/**
 * Cost of DirectAdmin (DA)
 * @type {!number}
 * @export
 */
API.Client.VpsOrder.prototype.daCost;

/**
 * RAM for VPS Slice
 * @type {!string}
 * @export
 */
API.Client.VpsOrder.prototype.ramSlice;

/**
 * Hard Disk for VPS Slice
 * @type {!string}
 * @export
 */
API.Client.VpsOrder.prototype.hdSlice;

/**
 * Storage Hard Disk for VPS Slice
 * @type {!string}
 * @export
 */
API.Client.VpsOrder.prototype.hdStorageSlice;

/**
 * Bandwidth for VPS Slice
 * @type {!string}
 * @export
 */
API.Client.VpsOrder.prototype.bwSlice;

/**
 * Bandwidth Type
 * @type {!string}
 * @export
 */
API.Client.VpsOrder.prototype.bwType;

/**
 * Total Bandwidth
 * @type {!number}
 * @export
 */
API.Client.VpsOrder.prototype.bwTotal;

/**
 * Maximum Slices
 * @type {!string}
 * @export
 */
API.Client.VpsOrder.prototype.maxSlices;

/**
 * @type {!API.Client.VpsOrder_platformPackages}
 * @export
 */
API.Client.VpsOrder.prototype.platformPackages;

/**
 * @type {!API.Client.VpsOrder_platformNames}
 * @export
 */
API.Client.VpsOrder.prototype.platformNames;

/**
 * @type {!API.Client.VpsOrder_packageCosts}
 * @export
 */
API.Client.VpsOrder.prototype.packageCosts;

/**
 * @type {!API.Client.VpsOrder_locationStock}
 * @export
 */
API.Client.VpsOrder.prototype.locationStock;

/**
 * @type {!API.Client.VpsOrder_locationNames}
 * @export
 */
API.Client.VpsOrder.prototype.locationNames;

/**
 * @type {!API.Client.VpsOrder_osNames}
 * @export
 */
API.Client.VpsOrder.prototype.osNames;

/**
 * @type {!API.Client.VpsOrder_templates}
 * @export
 */
API.Client.VpsOrder.prototype.templates;

/**
 * @type {!API.Client.VpsOrder_serviceTypes}
 * @export
 */
API.Client.VpsOrder.prototype.serviceTypes;

/**
 * Currency
 * @type {!string}
 * @export
 */
API.Client.VpsOrder.prototype.currency;

/**
 * Currency Symbol
 * @type {!string}
 * @export
 */
API.Client.VpsOrder.prototype.currencySymbol;

