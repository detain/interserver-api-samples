goog.provide('API.Client.VpsServiceMaster');

/**
 * Information about the host node (hypervisor) running this VPS, including hardware specs and resource utilization.
 * @record
 */
API.Client.VpsServiceMaster = function() {}

/**
 * VPS ID
 * @type {!string}
 * @export
 */
API.Client.VpsServiceMaster.prototype.vpsId;

/**
 * VPS name
 * @type {!string}
 * @export
 */
API.Client.VpsServiceMaster.prototype.vpsName;

/**
 * IP address of the VPS
 * @type {!string}
 * @export
 */
API.Client.VpsServiceMaster.prototype.vpsIp;

/**
 * VPS type
 * @type {!string}
 * @export
 */
API.Client.VpsServiceMaster.prototype.vpsType;

/**
 * Hard drive size
 * @type {!string}
 * @export
 */
API.Client.VpsServiceMaster.prototype.vpsHdsize;

/**
 * Free hard drive space
 * @type {!string}
 * @export
 */
API.Client.VpsServiceMaster.prototype.vpsHdfree;

/**
 * Bits
 * @type {!string}
 * @export
 */
API.Client.VpsServiceMaster.prototype.vpsBits;

/**
 * CPU load
 * @type {!string}
 * @export
 */
API.Client.VpsServiceMaster.prototype.vpsLoad;

/**
 * RAM
 * @type {!string}
 * @export
 */
API.Client.VpsServiceMaster.prototype.vpsRam;

/**
 * CPU model
 * @type {!string}
 * @export
 */
API.Client.VpsServiceMaster.prototype.vpsCpuModel;

/**
 * CPU frequency in MHz
 * @type {!string}
 * @export
 */
API.Client.VpsServiceMaster.prototype.vpsCpuMhz;

/**
 * Location of the VPS
 * @type {!string}
 * @export
 */
API.Client.VpsServiceMaster.prototype.vpsLocation;

/**
 * Last update date
 * @type {!string}
 * @export
 */
API.Client.VpsServiceMaster.prototype.vpsLastUpdate;

/**
 * RAID building status
 * @type {!string}
 * @export
 */
API.Client.VpsServiceMaster.prototype.vpsRaidBuilding;

/**
 * Kernel version
 * @type {!string}
 * @export
 */
API.Client.VpsServiceMaster.prototype.vpsKernel;

/**
 * Available
 * @type {!string}
 * @export
 */
API.Client.VpsServiceMaster.prototype.vpsAvailable;

/**
 * Number of CPU cores
 * @type {!string}
 * @export
 */
API.Client.VpsServiceMaster.prototype.vpsCores;

/**
 * I/O wait
 * @type {!string}
 * @export
 */
API.Client.VpsServiceMaster.prototype.vpsIowait;

/**
 * RAID status
 * @type {!string}
 * @export
 */
API.Client.VpsServiceMaster.prototype.vpsRaidStatus;

/**
 * Mounts
 * @type {!string}
 * @export
 */
API.Client.VpsServiceMaster.prototype.vpsMounts;

/**
 * Maximum number of servers
 * @type {!string}
 * @export
 */
API.Client.VpsServiceMaster.prototype.vpsServerMax;

/**
 * Maximum number of server slices
 * @type {!string}
 * @export
 */
API.Client.VpsServiceMaster.prototype.vpsServerMaxSlices;

/**
 * Drive type
 * @type {!string}
 * @export
 */
API.Client.VpsServiceMaster.prototype.vpsDriveType;

/**
 * Order number
 * @type {!string}
 * @export
 */
API.Client.VpsServiceMaster.prototype.vpsOrder;

