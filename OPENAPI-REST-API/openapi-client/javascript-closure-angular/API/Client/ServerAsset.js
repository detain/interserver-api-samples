goog.provide('API.Client.ServerAsset');

/**
 * @record
 */
API.Client.ServerAsset = function() {}

/**
 * Unique identifier for the asset.
 * @type {!number}
 * @export
 */
API.Client.ServerAsset.prototype.id;

/**
 * Order identifier for the asset.
 * @type {!string}
 * @export
 */
API.Client.ServerAsset.prototype.orderId;

/**
 * Hostname associated with the asset.
 * @type {!string}
 * @export
 */
API.Client.ServerAsset.prototype.hostname;

/**
 * Status of the asset.
 * @type {!string}
 * @export
 */
API.Client.ServerAsset.prototype.status;

/**
 * Primary IPv4 address of the asset.
 * @type {!string}
 * @export
 */
API.Client.ServerAsset.prototype.primaryIpv4;

/**
 * Primary IPv6 address of the asset.
 * @type {!string}
 * @export
 */
API.Client.ServerAsset.prototype.primaryIpv6;

/**
 * Datacenter identifier for the asset.
 * @type {!string}
 * @export
 */
API.Client.ServerAsset.prototype.datacenter;

/**
 * Type identifier for the asset.
 * @type {!string}
 * @export
 */
API.Client.ServerAsset.prototype.typeId;

/**
 * Asset tag associated with the asset.
 * @type {!string}
 * @export
 */
API.Client.ServerAsset.prototype.assetTag;

/**
 * Rack identifier for the asset.
 * @type {!string}
 * @export
 */
API.Client.ServerAsset.prototype.rack;

/**
 * Row identifier for the asset.
 * @type {!string}
 * @export
 */
API.Client.ServerAsset.prototype.row;

/**
 * Column identifier for the asset.
 * @type {!string}
 * @export
 */
API.Client.ServerAsset.prototype.col;

/**
 * Starting unit identifier for the asset.
 * @type {!string}
 * @export
 */
API.Client.ServerAsset.prototype.unitStart;

/**
 * Ending unit identifier for the asset.
 * @type {!string}
 * @export
 */
API.Client.ServerAsset.prototype.unitEnd;

/**
 * Subunit identifier for the asset.
 * @type {!string}
 * @export
 */
API.Client.ServerAsset.prototype.unitSub;

/**
 * IPMI MAC address associated with the asset.
 * @type {!string}
 * @export
 */
API.Client.ServerAsset.prototype.ipmiMac;

/**
 * IPMI IP address associated with the asset.
 * @type {!string}
 * @export
 */
API.Client.ServerAsset.prototype.ipmiIp;

/**
 * IPMI working status associated with the asset.
 * @type {!string}
 * @export
 */
API.Client.ServerAsset.prototype.ipmiWorking;

/**
 * Company associated with the asset.
 * @type {!string}
 * @export
 */
API.Client.ServerAsset.prototype.company;

/**
 * Comments associated with the asset.
 * @type {!string}
 * @export
 */
API.Client.ServerAsset.prototype.comments;

/**
 * Make of the asset.
 * @type {!string}
 * @export
 */
API.Client.ServerAsset.prototype.make;

/**
 * Model of the asset.
 * @type {!string}
 * @export
 */
API.Client.ServerAsset.prototype.model;

/**
 * Description of the asset.
 * @type {!string}
 * @export
 */
API.Client.ServerAsset.prototype.description;

/**
 * Customer identifier for the asset.
 * @type {!string}
 * @export
 */
API.Client.ServerAsset.prototype.customerId;

/**
 * External identifier for the asset.
 * @type {!string}
 * @export
 */
API.Client.ServerAsset.prototype.externalId;

/**
 * Billing status of the asset.
 * @type {!string}
 * @export
 */
API.Client.ServerAsset.prototype.billingStatus;

/**
 * Overdue status of the asset.
 * @type {!string}
 * @export
 */
API.Client.ServerAsset.prototype.overdue;

/**
 * Asset identifier for the asset.
 * @type {!string}
 * @export
 */
API.Client.ServerAsset.prototype.assetId;

/**
 * Name of the asset.
 * @type {!string}
 * @export
 */
API.Client.ServerAsset.prototype.assetName;

/**
 * Rack identifier for the asset.
 * @type {!string}
 * @export
 */
API.Client.ServerAsset.prototype.rackId;

/**
 * Rack name associated with the asset.
 * @type {!string}
 * @export
 */
API.Client.ServerAsset.prototype.rackName;

/**
 * Location of the rack associated with the asset.
 * @type {!string}
 * @export
 */
API.Client.ServerAsset.prototype.rackLocation;

/**
 * Size of the rack associated with the asset.
 * @type {!string}
 * @export
 */
API.Client.ServerAsset.prototype.rackSize;

/**
 * X-coordinate of the asset within the rack.
 * @type {!string}
 * @export
 */
API.Client.ServerAsset.prototype.rackX;

/**
 * Y-coordinate of the asset within the rack.
 * @type {!string}
 * @export
 */
API.Client.ServerAsset.prototype.rackY;

/**
 * List of switchports associated with the asset.
 * @type {!Array<!number>}
 * @export
 */
API.Client.ServerAsset.prototype.switchports;

/**
 * List of VLANs associated with the asset.
 * @type {!Array<!string>}
 * @export
 */
API.Client.ServerAsset.prototype.vlans;

/**
 * List of IPv6 VLANs associated with the asset.
 * @type {!Array<!string>}
 * @export
 */
API.Client.ServerAsset.prototype.vlans6;

/**
 * @type {!API.Client.ServerLease}
 * @export
 */
API.Client.ServerAsset.prototype.lease;

/**
 * MAC address associated with the asset.
 * @type {!API.Client.AnyType}
 * @export
 */
API.Client.ServerAsset.prototype.mac;

/**
 * IPMI admin username associated with the asset.
 * @type {!API.Client.AnyType}
 * @export
 */
API.Client.ServerAsset.prototype.ipmiAdminUsername;

/**
 * IPMI admin password associated with the asset.
 * @type {!API.Client.AnyType}
 * @export
 */
API.Client.ServerAsset.prototype.ipmiAdminPassword;

/**
 * IPMI client username associated with the asset.
 * @type {!API.Client.AnyType}
 * @export
 */
API.Client.ServerAsset.prototype.ipmiClientUsername;

/**
 * IPMI client password associated with the asset.
 * @type {!API.Client.AnyType}
 * @export
 */
API.Client.ServerAsset.prototype.ipmiClientPassword;

/**
 * IPMI update status associated with the asset.
 * @type {!API.Client.AnyType}
 * @export
 */
API.Client.ServerAsset.prototype.ipmiUpdated;

/**
 * Timestamp of asset creation.
 * @type {!API.Client.AnyType}
 * @export
 */
API.Client.ServerAsset.prototype.createTimestamp;

/**
 * Timestamp of asset update.
 * @type {!API.Client.AnyType}
 * @export
 */
API.Client.ServerAsset.prototype.updateTimestamp;

/**
 * Comment associated with the asset.
 * @type {!API.Client.AnyType}
 * @export
 */
API.Client.ServerAsset.prototype.comment;

