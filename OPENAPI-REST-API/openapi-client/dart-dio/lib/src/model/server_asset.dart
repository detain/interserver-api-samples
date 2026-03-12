//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/server_lease.dart';
import 'package:built_value/json_object.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'server_asset.g.dart';

/// ServerAsset
///
/// Properties:
/// * [id] - Unique identifier for the asset.
/// * [orderId] - Order identifier for the asset.
/// * [hostname] - Hostname associated with the asset.
/// * [status] - Status of the asset.
/// * [primaryIpv4] - Primary IPv4 address of the asset.
/// * [primaryIpv6] - Primary IPv6 address of the asset.
/// * [datacenter] - Datacenter identifier for the asset.
/// * [typeId] - Type identifier for the asset.
/// * [assetTag] - Asset tag associated with the asset.
/// * [rack] - Rack identifier for the asset.
/// * [row] - Row identifier for the asset.
/// * [col] - Column identifier for the asset.
/// * [unitStart] - Starting unit identifier for the asset.
/// * [unitEnd] - Ending unit identifier for the asset.
/// * [unitSub] - Subunit identifier for the asset.
/// * [ipmiMac] - IPMI MAC address associated with the asset.
/// * [ipmiIp] - IPMI IP address associated with the asset.
/// * [ipmiWorking] - IPMI working status associated with the asset.
/// * [company] - Company associated with the asset.
/// * [comments] - Comments associated with the asset.
/// * [make] - Make of the asset.
/// * [model] - Model of the asset.
/// * [description] - Description of the asset.
/// * [customerId] - Customer identifier for the asset.
/// * [externalId] - External identifier for the asset.
/// * [billingStatus] - Billing status of the asset.
/// * [overdue] - Overdue status of the asset.
/// * [assetId] - Asset identifier for the asset.
/// * [assetName] - Name of the asset.
/// * [rackId] - Rack identifier for the asset.
/// * [rackName] - Rack name associated with the asset.
/// * [rackLocation] - Location of the rack associated with the asset.
/// * [rackSize] - Size of the rack associated with the asset.
/// * [rackX] - X-coordinate of the asset within the rack.
/// * [rackY] - Y-coordinate of the asset within the rack.
/// * [switchports] - List of switchports associated with the asset.
/// * [vlans] - List of VLANs associated with the asset.
/// * [vlans6] - List of IPv6 VLANs associated with the asset.
/// * [lease] 
/// * [mac] - MAC address associated with the asset.
/// * [ipmiAdminUsername] - IPMI admin username associated with the asset.
/// * [ipmiAdminPassword] - IPMI admin password associated with the asset.
/// * [ipmiClientUsername] - IPMI client username associated with the asset.
/// * [ipmiClientPassword] - IPMI client password associated with the asset.
/// * [ipmiUpdated] - IPMI update status associated with the asset.
/// * [createTimestamp] - Timestamp of asset creation.
/// * [updateTimestamp] - Timestamp of asset update.
/// * [comment] - Comment associated with the asset.
@BuiltValue()
abstract class ServerAsset implements Built<ServerAsset, ServerAssetBuilder> {
  /// Unique identifier for the asset.
  @BuiltValueField(wireName: r'id')
  int get id;

  /// Order identifier for the asset.
  @BuiltValueField(wireName: r'order_id')
  String get orderId;

  /// Hostname associated with the asset.
  @BuiltValueField(wireName: r'hostname')
  String get hostname;

  /// Status of the asset.
  @BuiltValueField(wireName: r'status')
  String get status;

  /// Primary IPv4 address of the asset.
  @BuiltValueField(wireName: r'primary_ipv4')
  String get primaryIpv4;

  /// Primary IPv6 address of the asset.
  @BuiltValueField(wireName: r'primary_ipv6')
  String get primaryIpv6;

  /// Datacenter identifier for the asset.
  @BuiltValueField(wireName: r'datacenter')
  String get datacenter;

  /// Type identifier for the asset.
  @BuiltValueField(wireName: r'type_id')
  String get typeId;

  /// Asset tag associated with the asset.
  @BuiltValueField(wireName: r'asset_tag')
  String get assetTag;

  /// Rack identifier for the asset.
  @BuiltValueField(wireName: r'rack')
  String get rack;

  /// Row identifier for the asset.
  @BuiltValueField(wireName: r'row')
  String get row;

  /// Column identifier for the asset.
  @BuiltValueField(wireName: r'col')
  String get col;

  /// Starting unit identifier for the asset.
  @BuiltValueField(wireName: r'unit_start')
  String get unitStart;

  /// Ending unit identifier for the asset.
  @BuiltValueField(wireName: r'unit_end')
  String get unitEnd;

  /// Subunit identifier for the asset.
  @BuiltValueField(wireName: r'unit_sub')
  String get unitSub;

  /// IPMI MAC address associated with the asset.
  @BuiltValueField(wireName: r'ipmi_mac')
  String get ipmiMac;

  /// IPMI IP address associated with the asset.
  @BuiltValueField(wireName: r'ipmi_ip')
  String get ipmiIp;

  /// IPMI working status associated with the asset.
  @BuiltValueField(wireName: r'ipmi_working')
  String get ipmiWorking;

  /// Company associated with the asset.
  @BuiltValueField(wireName: r'company')
  String get company;

  /// Comments associated with the asset.
  @BuiltValueField(wireName: r'comments')
  String get comments;

  /// Make of the asset.
  @BuiltValueField(wireName: r'make')
  String get make;

  /// Model of the asset.
  @BuiltValueField(wireName: r'model')
  String get model;

  /// Description of the asset.
  @BuiltValueField(wireName: r'description')
  String get description;

  /// Customer identifier for the asset.
  @BuiltValueField(wireName: r'customer_id')
  String get customerId;

  /// External identifier for the asset.
  @BuiltValueField(wireName: r'external_id')
  String get externalId;

  /// Billing status of the asset.
  @BuiltValueField(wireName: r'billing_status')
  String get billingStatus;

  /// Overdue status of the asset.
  @BuiltValueField(wireName: r'overdue')
  String get overdue;

  /// Asset identifier for the asset.
  @BuiltValueField(wireName: r'asset_id')
  String get assetId;

  /// Name of the asset.
  @BuiltValueField(wireName: r'asset_name')
  String get assetName;

  /// Rack identifier for the asset.
  @BuiltValueField(wireName: r'rack_id')
  String get rackId;

  /// Rack name associated with the asset.
  @BuiltValueField(wireName: r'rack_name')
  String get rackName;

  /// Location of the rack associated with the asset.
  @BuiltValueField(wireName: r'rack_location')
  String get rackLocation;

  /// Size of the rack associated with the asset.
  @BuiltValueField(wireName: r'rack_size')
  String get rackSize;

  /// X-coordinate of the asset within the rack.
  @BuiltValueField(wireName: r'rack_x')
  String get rackX;

  /// Y-coordinate of the asset within the rack.
  @BuiltValueField(wireName: r'rack_y')
  String get rackY;

  /// List of switchports associated with the asset.
  @BuiltValueField(wireName: r'switchports')
  BuiltList<int> get switchports;

  /// List of VLANs associated with the asset.
  @BuiltValueField(wireName: r'vlans')
  BuiltList<String> get vlans;

  /// List of IPv6 VLANs associated with the asset.
  @BuiltValueField(wireName: r'vlans6')
  BuiltList<String> get vlans6;

  @BuiltValueField(wireName: r'lease')
  ServerLease get lease;

  /// MAC address associated with the asset.
  @BuiltValueField(wireName: r'mac')
  JsonObject? get mac;

  /// IPMI admin username associated with the asset.
  @BuiltValueField(wireName: r'ipmi_admin_username')
  JsonObject? get ipmiAdminUsername;

  /// IPMI admin password associated with the asset.
  @BuiltValueField(wireName: r'ipmi_admin_password')
  JsonObject? get ipmiAdminPassword;

  /// IPMI client username associated with the asset.
  @BuiltValueField(wireName: r'ipmi_client_username')
  JsonObject? get ipmiClientUsername;

  /// IPMI client password associated with the asset.
  @BuiltValueField(wireName: r'ipmi_client_password')
  JsonObject? get ipmiClientPassword;

  /// IPMI update status associated with the asset.
  @BuiltValueField(wireName: r'ipmi_updated')
  JsonObject? get ipmiUpdated;

  /// Timestamp of asset creation.
  @BuiltValueField(wireName: r'create_timestamp')
  JsonObject? get createTimestamp;

  /// Timestamp of asset update.
  @BuiltValueField(wireName: r'update_timestamp')
  JsonObject? get updateTimestamp;

  /// Comment associated with the asset.
  @BuiltValueField(wireName: r'comment')
  JsonObject? get comment;

  ServerAsset._();

  factory ServerAsset([void updates(ServerAssetBuilder b)]) = _$ServerAsset;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ServerAssetBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ServerAsset> get serializer => _$ServerAssetSerializer();
}

class _$ServerAssetSerializer implements PrimitiveSerializer<ServerAsset> {
  @override
  final Iterable<Type> types = const [ServerAsset, _$ServerAsset];

  @override
  final String wireName = r'ServerAsset';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ServerAsset object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'id';
    yield serializers.serialize(
      object.id,
      specifiedType: const FullType(int),
    );
    yield r'order_id';
    yield serializers.serialize(
      object.orderId,
      specifiedType: const FullType(String),
    );
    yield r'hostname';
    yield serializers.serialize(
      object.hostname,
      specifiedType: const FullType(String),
    );
    yield r'status';
    yield serializers.serialize(
      object.status,
      specifiedType: const FullType(String),
    );
    yield r'primary_ipv4';
    yield serializers.serialize(
      object.primaryIpv4,
      specifiedType: const FullType(String),
    );
    yield r'primary_ipv6';
    yield serializers.serialize(
      object.primaryIpv6,
      specifiedType: const FullType(String),
    );
    yield r'datacenter';
    yield serializers.serialize(
      object.datacenter,
      specifiedType: const FullType(String),
    );
    yield r'type_id';
    yield serializers.serialize(
      object.typeId,
      specifiedType: const FullType(String),
    );
    yield r'asset_tag';
    yield serializers.serialize(
      object.assetTag,
      specifiedType: const FullType(String),
    );
    yield r'rack';
    yield serializers.serialize(
      object.rack,
      specifiedType: const FullType(String),
    );
    yield r'row';
    yield serializers.serialize(
      object.row,
      specifiedType: const FullType(String),
    );
    yield r'col';
    yield serializers.serialize(
      object.col,
      specifiedType: const FullType(String),
    );
    yield r'unit_start';
    yield serializers.serialize(
      object.unitStart,
      specifiedType: const FullType(String),
    );
    yield r'unit_end';
    yield serializers.serialize(
      object.unitEnd,
      specifiedType: const FullType(String),
    );
    yield r'unit_sub';
    yield serializers.serialize(
      object.unitSub,
      specifiedType: const FullType(String),
    );
    yield r'ipmi_mac';
    yield serializers.serialize(
      object.ipmiMac,
      specifiedType: const FullType(String),
    );
    yield r'ipmi_ip';
    yield serializers.serialize(
      object.ipmiIp,
      specifiedType: const FullType(String),
    );
    yield r'ipmi_working';
    yield serializers.serialize(
      object.ipmiWorking,
      specifiedType: const FullType(String),
    );
    yield r'company';
    yield serializers.serialize(
      object.company,
      specifiedType: const FullType(String),
    );
    yield r'comments';
    yield serializers.serialize(
      object.comments,
      specifiedType: const FullType(String),
    );
    yield r'make';
    yield serializers.serialize(
      object.make,
      specifiedType: const FullType(String),
    );
    yield r'model';
    yield serializers.serialize(
      object.model,
      specifiedType: const FullType(String),
    );
    yield r'description';
    yield serializers.serialize(
      object.description,
      specifiedType: const FullType(String),
    );
    yield r'customer_id';
    yield serializers.serialize(
      object.customerId,
      specifiedType: const FullType(String),
    );
    yield r'external_id';
    yield serializers.serialize(
      object.externalId,
      specifiedType: const FullType(String),
    );
    yield r'billing_status';
    yield serializers.serialize(
      object.billingStatus,
      specifiedType: const FullType(String),
    );
    yield r'overdue';
    yield serializers.serialize(
      object.overdue,
      specifiedType: const FullType(String),
    );
    yield r'asset_id';
    yield serializers.serialize(
      object.assetId,
      specifiedType: const FullType(String),
    );
    yield r'asset_name';
    yield serializers.serialize(
      object.assetName,
      specifiedType: const FullType(String),
    );
    yield r'rack_id';
    yield serializers.serialize(
      object.rackId,
      specifiedType: const FullType(String),
    );
    yield r'rack_name';
    yield serializers.serialize(
      object.rackName,
      specifiedType: const FullType(String),
    );
    yield r'rack_location';
    yield serializers.serialize(
      object.rackLocation,
      specifiedType: const FullType(String),
    );
    yield r'rack_size';
    yield serializers.serialize(
      object.rackSize,
      specifiedType: const FullType(String),
    );
    yield r'rack_x';
    yield serializers.serialize(
      object.rackX,
      specifiedType: const FullType(String),
    );
    yield r'rack_y';
    yield serializers.serialize(
      object.rackY,
      specifiedType: const FullType(String),
    );
    yield r'switchports';
    yield serializers.serialize(
      object.switchports,
      specifiedType: const FullType(BuiltList, [FullType(int)]),
    );
    yield r'vlans';
    yield serializers.serialize(
      object.vlans,
      specifiedType: const FullType(BuiltList, [FullType(String)]),
    );
    yield r'vlans6';
    yield serializers.serialize(
      object.vlans6,
      specifiedType: const FullType(BuiltList, [FullType(String)]),
    );
    yield r'lease';
    yield serializers.serialize(
      object.lease,
      specifiedType: const FullType(ServerLease),
    );
    if (object.mac != null) {
      yield r'mac';
      yield serializers.serialize(
        object.mac,
        specifiedType: const FullType.nullable(JsonObject),
      );
    }
    if (object.ipmiAdminUsername != null) {
      yield r'ipmi_admin_username';
      yield serializers.serialize(
        object.ipmiAdminUsername,
        specifiedType: const FullType.nullable(JsonObject),
      );
    }
    if (object.ipmiAdminPassword != null) {
      yield r'ipmi_admin_password';
      yield serializers.serialize(
        object.ipmiAdminPassword,
        specifiedType: const FullType.nullable(JsonObject),
      );
    }
    if (object.ipmiClientUsername != null) {
      yield r'ipmi_client_username';
      yield serializers.serialize(
        object.ipmiClientUsername,
        specifiedType: const FullType.nullable(JsonObject),
      );
    }
    if (object.ipmiClientPassword != null) {
      yield r'ipmi_client_password';
      yield serializers.serialize(
        object.ipmiClientPassword,
        specifiedType: const FullType.nullable(JsonObject),
      );
    }
    if (object.ipmiUpdated != null) {
      yield r'ipmi_updated';
      yield serializers.serialize(
        object.ipmiUpdated,
        specifiedType: const FullType.nullable(JsonObject),
      );
    }
    if (object.createTimestamp != null) {
      yield r'create_timestamp';
      yield serializers.serialize(
        object.createTimestamp,
        specifiedType: const FullType.nullable(JsonObject),
      );
    }
    if (object.updateTimestamp != null) {
      yield r'update_timestamp';
      yield serializers.serialize(
        object.updateTimestamp,
        specifiedType: const FullType.nullable(JsonObject),
      );
    }
    if (object.comment != null) {
      yield r'comment';
      yield serializers.serialize(
        object.comment,
        specifiedType: const FullType.nullable(JsonObject),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    ServerAsset object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ServerAssetBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.id = valueDes;
          break;
        case r'order_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.orderId = valueDes;
          break;
        case r'hostname':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.hostname = valueDes;
          break;
        case r'status':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.status = valueDes;
          break;
        case r'primary_ipv4':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.primaryIpv4 = valueDes;
          break;
        case r'primary_ipv6':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.primaryIpv6 = valueDes;
          break;
        case r'datacenter':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.datacenter = valueDes;
          break;
        case r'type_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.typeId = valueDes;
          break;
        case r'asset_tag':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.assetTag = valueDes;
          break;
        case r'rack':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.rack = valueDes;
          break;
        case r'row':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.row = valueDes;
          break;
        case r'col':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.col = valueDes;
          break;
        case r'unit_start':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.unitStart = valueDes;
          break;
        case r'unit_end':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.unitEnd = valueDes;
          break;
        case r'unit_sub':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.unitSub = valueDes;
          break;
        case r'ipmi_mac':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ipmiMac = valueDes;
          break;
        case r'ipmi_ip':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ipmiIp = valueDes;
          break;
        case r'ipmi_working':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ipmiWorking = valueDes;
          break;
        case r'company':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.company = valueDes;
          break;
        case r'comments':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.comments = valueDes;
          break;
        case r'make':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.make = valueDes;
          break;
        case r'model':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.model = valueDes;
          break;
        case r'description':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.description = valueDes;
          break;
        case r'customer_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.customerId = valueDes;
          break;
        case r'external_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.externalId = valueDes;
          break;
        case r'billing_status':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.billingStatus = valueDes;
          break;
        case r'overdue':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.overdue = valueDes;
          break;
        case r'asset_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.assetId = valueDes;
          break;
        case r'asset_name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.assetName = valueDes;
          break;
        case r'rack_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.rackId = valueDes;
          break;
        case r'rack_name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.rackName = valueDes;
          break;
        case r'rack_location':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.rackLocation = valueDes;
          break;
        case r'rack_size':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.rackSize = valueDes;
          break;
        case r'rack_x':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.rackX = valueDes;
          break;
        case r'rack_y':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.rackY = valueDes;
          break;
        case r'switchports':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(int)]),
          ) as BuiltList<int>;
          result.switchports.replace(valueDes);
          break;
        case r'vlans':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(String)]),
          ) as BuiltList<String>;
          result.vlans.replace(valueDes);
          break;
        case r'vlans6':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(String)]),
          ) as BuiltList<String>;
          result.vlans6.replace(valueDes);
          break;
        case r'lease':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(ServerLease),
          ) as ServerLease;
          result.lease.replace(valueDes);
          break;
        case r'mac':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(JsonObject),
          ) as JsonObject?;
          if (valueDes == null) continue;
          result.mac = valueDes;
          break;
        case r'ipmi_admin_username':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(JsonObject),
          ) as JsonObject?;
          if (valueDes == null) continue;
          result.ipmiAdminUsername = valueDes;
          break;
        case r'ipmi_admin_password':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(JsonObject),
          ) as JsonObject?;
          if (valueDes == null) continue;
          result.ipmiAdminPassword = valueDes;
          break;
        case r'ipmi_client_username':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(JsonObject),
          ) as JsonObject?;
          if (valueDes == null) continue;
          result.ipmiClientUsername = valueDes;
          break;
        case r'ipmi_client_password':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(JsonObject),
          ) as JsonObject?;
          if (valueDes == null) continue;
          result.ipmiClientPassword = valueDes;
          break;
        case r'ipmi_updated':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(JsonObject),
          ) as JsonObject?;
          if (valueDes == null) continue;
          result.ipmiUpdated = valueDes;
          break;
        case r'create_timestamp':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(JsonObject),
          ) as JsonObject?;
          if (valueDes == null) continue;
          result.createTimestamp = valueDes;
          break;
        case r'update_timestamp':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(JsonObject),
          ) as JsonObject?;
          if (valueDes == null) continue;
          result.updateTimestamp = valueDes;
          break;
        case r'comment':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(JsonObject),
          ) as JsonObject?;
          if (valueDes == null) continue;
          result.comment = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  ServerAsset deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ServerAssetBuilder();
    final serializedList = (serialized as Iterable<Object?>).toList();
    final unhandled = <Object?>[];
    _deserializeProperties(
      serializers,
      serialized,
      specifiedType: specifiedType,
      serializedList: serializedList,
      unhandled: unhandled,
      result: result,
    );
    return result.build();
  }
}

