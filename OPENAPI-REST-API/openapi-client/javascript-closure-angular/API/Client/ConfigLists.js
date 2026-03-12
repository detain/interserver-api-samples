goog.provide('API.Client.ConfigLists');

/**
 * All available configuration options (CPU, memory, storage, bandwidth, OS, control panel, RAID) for building a dedicated server order.
 * @record
 */
API.Client.ConfigLists = function() {}

/**
 * @type {!Object<!string, API.Client.Cpu>}
 * @export
 */
API.Client.ConfigLists.prototype.cpuLi;

/**
 * @type {!Object<!string, Object<!string, API.Client.MemoryOption>>}
 * @export
 */
API.Client.ConfigLists.prototype.memoryLi;

/**
 * @type {!Object<!string, Object<!string, API.Client.HardDrive>>}
 * @export
 */
API.Client.ConfigLists.prototype.hdLi;

/**
 * @type {!Object<!string, API.Client.Bandwidth>}
 * @export
 */
API.Client.ConfigLists.prototype.bandwidthLi;

/**
 * @type {!Object<!string, API.Client.IpBlock>}
 * @export
 */
API.Client.ConfigLists.prototype.ipsLi;

/**
 * @type {!Object<!string, API.Client.OperatingSystem>}
 * @export
 */
API.Client.ConfigLists.prototype.osLi;

/**
 * @type {!Object<!string, API.Client.ControlPanel>}
 * @export
 */
API.Client.ConfigLists.prototype.cpLi;

/**
 * @type {!Array<!API.Client.RaidOption>}
 * @export
 */
API.Client.ConfigLists.prototype.raidLi;

