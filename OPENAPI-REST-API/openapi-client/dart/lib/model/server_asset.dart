//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//
// @dart=2.18

// ignore_for_file: unused_element, unused_import
// ignore_for_file: always_put_required_named_parameters_first
// ignore_for_file: constant_identifier_names
// ignore_for_file: lines_longer_than_80_chars

part of openapi.api;

class ServerAsset {
  /// Returns a new [ServerAsset] instance.
  ServerAsset({
    required this.id,
    required this.orderId,
    required this.hostname,
    required this.status,
    required this.primaryIpv4,
    required this.primaryIpv6,
    required this.datacenter,
    required this.typeId,
    required this.assetTag,
    required this.rack,
    required this.row,
    required this.col,
    required this.unitStart,
    required this.unitEnd,
    required this.unitSub,
    required this.ipmiMac,
    required this.ipmiIp,
    required this.ipmiWorking,
    required this.company,
    required this.comments,
    required this.make,
    required this.model,
    required this.description,
    required this.customerId,
    required this.externalId,
    required this.billingStatus,
    required this.overdue,
    required this.assetId,
    required this.assetName,
    required this.rackId,
    required this.rackName,
    required this.rackLocation,
    required this.rackSize,
    required this.rackX,
    required this.rackY,
    this.switchports = const [],
    this.vlans = const [],
    this.vlans6 = const [],
    required this.lease,
    this.mac,
    this.ipmiAdminUsername,
    this.ipmiAdminPassword,
    this.ipmiClientUsername,
    this.ipmiClientPassword,
    this.ipmiUpdated,
    this.createTimestamp,
    this.updateTimestamp,
    this.comment,
  });

  /// Unique identifier for the asset.
  int id;

  /// Order identifier for the asset.
  String orderId;

  /// Hostname associated with the asset.
  String hostname;

  /// Status of the asset.
  String status;

  /// Primary IPv4 address of the asset.
  String primaryIpv4;

  /// Primary IPv6 address of the asset.
  String primaryIpv6;

  /// Datacenter identifier for the asset.
  String datacenter;

  /// Type identifier for the asset.
  String typeId;

  /// Asset tag associated with the asset.
  String assetTag;

  /// Rack identifier for the asset.
  String rack;

  /// Row identifier for the asset.
  String row;

  /// Column identifier for the asset.
  String col;

  /// Starting unit identifier for the asset.
  String unitStart;

  /// Ending unit identifier for the asset.
  String unitEnd;

  /// Subunit identifier for the asset.
  String unitSub;

  /// IPMI MAC address associated with the asset.
  String ipmiMac;

  /// IPMI IP address associated with the asset.
  String ipmiIp;

  /// IPMI working status associated with the asset.
  String ipmiWorking;

  /// Company associated with the asset.
  String company;

  /// Comments associated with the asset.
  String comments;

  /// Make of the asset.
  String make;

  /// Model of the asset.
  String model;

  /// Description of the asset.
  String description;

  /// Customer identifier for the asset.
  String customerId;

  /// External identifier for the asset.
  String externalId;

  /// Billing status of the asset.
  String billingStatus;

  /// Overdue status of the asset.
  String overdue;

  /// Asset identifier for the asset.
  String assetId;

  /// Name of the asset.
  String assetName;

  /// Rack identifier for the asset.
  String rackId;

  /// Rack name associated with the asset.
  String rackName;

  /// Location of the rack associated with the asset.
  String rackLocation;

  /// Size of the rack associated with the asset.
  String rackSize;

  /// X-coordinate of the asset within the rack.
  String rackX;

  /// Y-coordinate of the asset within the rack.
  String rackY;

  /// List of switchports associated with the asset.
  List<int> switchports;

  /// List of VLANs associated with the asset.
  List<String> vlans;

  /// List of IPv6 VLANs associated with the asset.
  List<String> vlans6;

  ServerLease lease;

  /// MAC address associated with the asset.
  Object? mac;

  /// IPMI admin username associated with the asset.
  Object? ipmiAdminUsername;

  /// IPMI admin password associated with the asset.
  Object? ipmiAdminPassword;

  /// IPMI client username associated with the asset.
  Object? ipmiClientUsername;

  /// IPMI client password associated with the asset.
  Object? ipmiClientPassword;

  /// IPMI update status associated with the asset.
  Object? ipmiUpdated;

  /// Timestamp of asset creation.
  Object? createTimestamp;

  /// Timestamp of asset update.
  Object? updateTimestamp;

  /// Comment associated with the asset.
  Object? comment;

  @override
  bool operator ==(Object other) => identical(this, other) || other is ServerAsset &&
    other.id == id &&
    other.orderId == orderId &&
    other.hostname == hostname &&
    other.status == status &&
    other.primaryIpv4 == primaryIpv4 &&
    other.primaryIpv6 == primaryIpv6 &&
    other.datacenter == datacenter &&
    other.typeId == typeId &&
    other.assetTag == assetTag &&
    other.rack == rack &&
    other.row == row &&
    other.col == col &&
    other.unitStart == unitStart &&
    other.unitEnd == unitEnd &&
    other.unitSub == unitSub &&
    other.ipmiMac == ipmiMac &&
    other.ipmiIp == ipmiIp &&
    other.ipmiWorking == ipmiWorking &&
    other.company == company &&
    other.comments == comments &&
    other.make == make &&
    other.model == model &&
    other.description == description &&
    other.customerId == customerId &&
    other.externalId == externalId &&
    other.billingStatus == billingStatus &&
    other.overdue == overdue &&
    other.assetId == assetId &&
    other.assetName == assetName &&
    other.rackId == rackId &&
    other.rackName == rackName &&
    other.rackLocation == rackLocation &&
    other.rackSize == rackSize &&
    other.rackX == rackX &&
    other.rackY == rackY &&
    _deepEquality.equals(other.switchports, switchports) &&
    _deepEquality.equals(other.vlans, vlans) &&
    _deepEquality.equals(other.vlans6, vlans6) &&
    other.lease == lease &&
    other.mac == mac &&
    other.ipmiAdminUsername == ipmiAdminUsername &&
    other.ipmiAdminPassword == ipmiAdminPassword &&
    other.ipmiClientUsername == ipmiClientUsername &&
    other.ipmiClientPassword == ipmiClientPassword &&
    other.ipmiUpdated == ipmiUpdated &&
    other.createTimestamp == createTimestamp &&
    other.updateTimestamp == updateTimestamp &&
    other.comment == comment;

  @override
  int get hashCode =>
    // ignore: unnecessary_parenthesis
    (id.hashCode) +
    (orderId.hashCode) +
    (hostname.hashCode) +
    (status.hashCode) +
    (primaryIpv4.hashCode) +
    (primaryIpv6.hashCode) +
    (datacenter.hashCode) +
    (typeId.hashCode) +
    (assetTag.hashCode) +
    (rack.hashCode) +
    (row.hashCode) +
    (col.hashCode) +
    (unitStart.hashCode) +
    (unitEnd.hashCode) +
    (unitSub.hashCode) +
    (ipmiMac.hashCode) +
    (ipmiIp.hashCode) +
    (ipmiWorking.hashCode) +
    (company.hashCode) +
    (comments.hashCode) +
    (make.hashCode) +
    (model.hashCode) +
    (description.hashCode) +
    (customerId.hashCode) +
    (externalId.hashCode) +
    (billingStatus.hashCode) +
    (overdue.hashCode) +
    (assetId.hashCode) +
    (assetName.hashCode) +
    (rackId.hashCode) +
    (rackName.hashCode) +
    (rackLocation.hashCode) +
    (rackSize.hashCode) +
    (rackX.hashCode) +
    (rackY.hashCode) +
    (switchports.hashCode) +
    (vlans.hashCode) +
    (vlans6.hashCode) +
    (lease.hashCode) +
    (mac == null ? 0 : mac!.hashCode) +
    (ipmiAdminUsername == null ? 0 : ipmiAdminUsername!.hashCode) +
    (ipmiAdminPassword == null ? 0 : ipmiAdminPassword!.hashCode) +
    (ipmiClientUsername == null ? 0 : ipmiClientUsername!.hashCode) +
    (ipmiClientPassword == null ? 0 : ipmiClientPassword!.hashCode) +
    (ipmiUpdated == null ? 0 : ipmiUpdated!.hashCode) +
    (createTimestamp == null ? 0 : createTimestamp!.hashCode) +
    (updateTimestamp == null ? 0 : updateTimestamp!.hashCode) +
    (comment == null ? 0 : comment!.hashCode);

  @override
  String toString() => 'ServerAsset[id=$id, orderId=$orderId, hostname=$hostname, status=$status, primaryIpv4=$primaryIpv4, primaryIpv6=$primaryIpv6, datacenter=$datacenter, typeId=$typeId, assetTag=$assetTag, rack=$rack, row=$row, col=$col, unitStart=$unitStart, unitEnd=$unitEnd, unitSub=$unitSub, ipmiMac=$ipmiMac, ipmiIp=$ipmiIp, ipmiWorking=$ipmiWorking, company=$company, comments=$comments, make=$make, model=$model, description=$description, customerId=$customerId, externalId=$externalId, billingStatus=$billingStatus, overdue=$overdue, assetId=$assetId, assetName=$assetName, rackId=$rackId, rackName=$rackName, rackLocation=$rackLocation, rackSize=$rackSize, rackX=$rackX, rackY=$rackY, switchports=$switchports, vlans=$vlans, vlans6=$vlans6, lease=$lease, mac=$mac, ipmiAdminUsername=$ipmiAdminUsername, ipmiAdminPassword=$ipmiAdminPassword, ipmiClientUsername=$ipmiClientUsername, ipmiClientPassword=$ipmiClientPassword, ipmiUpdated=$ipmiUpdated, createTimestamp=$createTimestamp, updateTimestamp=$updateTimestamp, comment=$comment]';

  Map<String, dynamic> toJson() {
    final json = <String, dynamic>{};
      json[r'id'] = this.id;
      json[r'order_id'] = this.orderId;
      json[r'hostname'] = this.hostname;
      json[r'status'] = this.status;
      json[r'primary_ipv4'] = this.primaryIpv4;
      json[r'primary_ipv6'] = this.primaryIpv6;
      json[r'datacenter'] = this.datacenter;
      json[r'type_id'] = this.typeId;
      json[r'asset_tag'] = this.assetTag;
      json[r'rack'] = this.rack;
      json[r'row'] = this.row;
      json[r'col'] = this.col;
      json[r'unit_start'] = this.unitStart;
      json[r'unit_end'] = this.unitEnd;
      json[r'unit_sub'] = this.unitSub;
      json[r'ipmi_mac'] = this.ipmiMac;
      json[r'ipmi_ip'] = this.ipmiIp;
      json[r'ipmi_working'] = this.ipmiWorking;
      json[r'company'] = this.company;
      json[r'comments'] = this.comments;
      json[r'make'] = this.make;
      json[r'model'] = this.model;
      json[r'description'] = this.description;
      json[r'customer_id'] = this.customerId;
      json[r'external_id'] = this.externalId;
      json[r'billing_status'] = this.billingStatus;
      json[r'overdue'] = this.overdue;
      json[r'asset_id'] = this.assetId;
      json[r'asset_name'] = this.assetName;
      json[r'rack_id'] = this.rackId;
      json[r'rack_name'] = this.rackName;
      json[r'rack_location'] = this.rackLocation;
      json[r'rack_size'] = this.rackSize;
      json[r'rack_x'] = this.rackX;
      json[r'rack_y'] = this.rackY;
      json[r'switchports'] = this.switchports;
      json[r'vlans'] = this.vlans;
      json[r'vlans6'] = this.vlans6;
      json[r'lease'] = this.lease;
    if (this.mac != null) {
      json[r'mac'] = this.mac;
    } else {
      json[r'mac'] = null;
    }
    if (this.ipmiAdminUsername != null) {
      json[r'ipmi_admin_username'] = this.ipmiAdminUsername;
    } else {
      json[r'ipmi_admin_username'] = null;
    }
    if (this.ipmiAdminPassword != null) {
      json[r'ipmi_admin_password'] = this.ipmiAdminPassword;
    } else {
      json[r'ipmi_admin_password'] = null;
    }
    if (this.ipmiClientUsername != null) {
      json[r'ipmi_client_username'] = this.ipmiClientUsername;
    } else {
      json[r'ipmi_client_username'] = null;
    }
    if (this.ipmiClientPassword != null) {
      json[r'ipmi_client_password'] = this.ipmiClientPassword;
    } else {
      json[r'ipmi_client_password'] = null;
    }
    if (this.ipmiUpdated != null) {
      json[r'ipmi_updated'] = this.ipmiUpdated;
    } else {
      json[r'ipmi_updated'] = null;
    }
    if (this.createTimestamp != null) {
      json[r'create_timestamp'] = this.createTimestamp;
    } else {
      json[r'create_timestamp'] = null;
    }
    if (this.updateTimestamp != null) {
      json[r'update_timestamp'] = this.updateTimestamp;
    } else {
      json[r'update_timestamp'] = null;
    }
    if (this.comment != null) {
      json[r'comment'] = this.comment;
    } else {
      json[r'comment'] = null;
    }
    return json;
  }

  /// Returns a new [ServerAsset] instance and imports its values from
  /// [value] if it's a [Map], null otherwise.
  // ignore: prefer_constructors_over_static_methods
  static ServerAsset? fromJson(dynamic value) {
    if (value is Map) {
      final json = value.cast<String, dynamic>();

      // Ensure that the map contains the required keys.
      // Note 1: the values aren't checked for validity beyond being non-null.
      // Note 2: this code is stripped in release mode!
      assert(() {
        requiredKeys.forEach((key) {
          assert(json.containsKey(key), 'Required key "ServerAsset[$key]" is missing from JSON.');
          assert(json[key] != null, 'Required key "ServerAsset[$key]" has a null value in JSON.');
        });
        return true;
      }());

      return ServerAsset(
        id: mapValueOfType<int>(json, r'id')!,
        orderId: mapValueOfType<String>(json, r'order_id')!,
        hostname: mapValueOfType<String>(json, r'hostname')!,
        status: mapValueOfType<String>(json, r'status')!,
        primaryIpv4: mapValueOfType<String>(json, r'primary_ipv4')!,
        primaryIpv6: mapValueOfType<String>(json, r'primary_ipv6')!,
        datacenter: mapValueOfType<String>(json, r'datacenter')!,
        typeId: mapValueOfType<String>(json, r'type_id')!,
        assetTag: mapValueOfType<String>(json, r'asset_tag')!,
        rack: mapValueOfType<String>(json, r'rack')!,
        row: mapValueOfType<String>(json, r'row')!,
        col: mapValueOfType<String>(json, r'col')!,
        unitStart: mapValueOfType<String>(json, r'unit_start')!,
        unitEnd: mapValueOfType<String>(json, r'unit_end')!,
        unitSub: mapValueOfType<String>(json, r'unit_sub')!,
        ipmiMac: mapValueOfType<String>(json, r'ipmi_mac')!,
        ipmiIp: mapValueOfType<String>(json, r'ipmi_ip')!,
        ipmiWorking: mapValueOfType<String>(json, r'ipmi_working')!,
        company: mapValueOfType<String>(json, r'company')!,
        comments: mapValueOfType<String>(json, r'comments')!,
        make: mapValueOfType<String>(json, r'make')!,
        model: mapValueOfType<String>(json, r'model')!,
        description: mapValueOfType<String>(json, r'description')!,
        customerId: mapValueOfType<String>(json, r'customer_id')!,
        externalId: mapValueOfType<String>(json, r'external_id')!,
        billingStatus: mapValueOfType<String>(json, r'billing_status')!,
        overdue: mapValueOfType<String>(json, r'overdue')!,
        assetId: mapValueOfType<String>(json, r'asset_id')!,
        assetName: mapValueOfType<String>(json, r'asset_name')!,
        rackId: mapValueOfType<String>(json, r'rack_id')!,
        rackName: mapValueOfType<String>(json, r'rack_name')!,
        rackLocation: mapValueOfType<String>(json, r'rack_location')!,
        rackSize: mapValueOfType<String>(json, r'rack_size')!,
        rackX: mapValueOfType<String>(json, r'rack_x')!,
        rackY: mapValueOfType<String>(json, r'rack_y')!,
        switchports: json[r'switchports'] is Iterable
            ? (json[r'switchports'] as Iterable).cast<int>().toList(growable: false)
            : const [],
        vlans: json[r'vlans'] is Iterable
            ? (json[r'vlans'] as Iterable).cast<String>().toList(growable: false)
            : const [],
        vlans6: json[r'vlans6'] is Iterable
            ? (json[r'vlans6'] as Iterable).cast<String>().toList(growable: false)
            : const [],
        lease: ServerLease.fromJson(json[r'lease'])!,
        mac: mapValueOfType<Object>(json, r'mac'),
        ipmiAdminUsername: mapValueOfType<Object>(json, r'ipmi_admin_username'),
        ipmiAdminPassword: mapValueOfType<Object>(json, r'ipmi_admin_password'),
        ipmiClientUsername: mapValueOfType<Object>(json, r'ipmi_client_username'),
        ipmiClientPassword: mapValueOfType<Object>(json, r'ipmi_client_password'),
        ipmiUpdated: mapValueOfType<Object>(json, r'ipmi_updated'),
        createTimestamp: mapValueOfType<Object>(json, r'create_timestamp'),
        updateTimestamp: mapValueOfType<Object>(json, r'update_timestamp'),
        comment: mapValueOfType<Object>(json, r'comment'),
      );
    }
    return null;
  }

  static List<ServerAsset> listFromJson(dynamic json, {bool growable = false,}) {
    final result = <ServerAsset>[];
    if (json is List && json.isNotEmpty) {
      for (final row in json) {
        final value = ServerAsset.fromJson(row);
        if (value != null) {
          result.add(value);
        }
      }
    }
    return result.toList(growable: growable);
  }

  static Map<String, ServerAsset> mapFromJson(dynamic json) {
    final map = <String, ServerAsset>{};
    if (json is Map && json.isNotEmpty) {
      json = json.cast<String, dynamic>(); // ignore: parameter_assignments
      for (final entry in json.entries) {
        final value = ServerAsset.fromJson(entry.value);
        if (value != null) {
          map[entry.key] = value;
        }
      }
    }
    return map;
  }

  // maps a json object with a list of ServerAsset-objects as value to a dart map
  static Map<String, List<ServerAsset>> mapListFromJson(dynamic json, {bool growable = false,}) {
    final map = <String, List<ServerAsset>>{};
    if (json is Map && json.isNotEmpty) {
      // ignore: parameter_assignments
      json = json.cast<String, dynamic>();
      for (final entry in json.entries) {
        map[entry.key] = ServerAsset.listFromJson(entry.value, growable: growable,);
      }
    }
    return map;
  }

  /// The list of required keys that must be present in a JSON.
  static const requiredKeys = <String>{
    'id',
    'order_id',
    'hostname',
    'status',
    'primary_ipv4',
    'primary_ipv6',
    'datacenter',
    'type_id',
    'asset_tag',
    'rack',
    'row',
    'col',
    'unit_start',
    'unit_end',
    'unit_sub',
    'ipmi_mac',
    'ipmi_ip',
    'ipmi_working',
    'company',
    'comments',
    'make',
    'model',
    'description',
    'customer_id',
    'external_id',
    'billing_status',
    'overdue',
    'asset_id',
    'asset_name',
    'rack_id',
    'rack_name',
    'rack_location',
    'rack_size',
    'rack_x',
    'rack_y',
    'switchports',
    'vlans',
    'vlans6',
    'lease',
  };
}

