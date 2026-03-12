//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/json_object.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'vps_service_info.g.dart';

/// VpsServiceInfo
///
/// Properties:
/// * [vpsId] - VPS ID
/// * [vpsCustid] - Customer ID
/// * [vpsServer] - Server ID
/// * [vpsIp] - IP address of the VPS
/// * [vpsIpv6] - IPv6 address of the VPS
/// * [vpsVzid] - VPS Virtuozzo ID
/// * [vpsCurrency] - Currency used for billing
/// * [vpsType] - VPS type
/// * [vpsOrderDate] - Date of VPS order
/// * [vpsStatus] - VPS status
/// * [vpsInvoice] - VPS invoice number
/// * [vpsCoupon] - VPS coupon code
/// * [vpsExtra] - Additional information about the VPS
/// * [vpsHostname] - VPS hostname
/// * [vpsServerStatus] - Status of the VPS server
/// * [vpsComment] - Comment associated with the VPS
/// * [vpsSlices] - Number of VPS slices
/// * [vpsVnc] - VNC address
/// * [vpsVncPort] - VNC port
/// * [vpsRootpass] - Root password of the VPS
/// * [vpsMac] - MAC address of the VPS
/// * [vpsOs] - Operating system of the VPS
/// * [vpsVersion] - Version of the operating system
/// * [vpsLocation] - Location of the VPS
/// * [vpsPlatform] - Virtualization platform
/// * [vpsDiskused] - Amount of disk space used
/// * [vpsDiskmax] - Maximum disk space available
@BuiltValue()
abstract class VpsServiceInfo implements Built<VpsServiceInfo, VpsServiceInfoBuilder> {
  /// VPS ID
  @BuiltValueField(wireName: r'vps_id')
  String? get vpsId;

  /// Customer ID
  @BuiltValueField(wireName: r'vps_custid')
  String? get vpsCustid;

  /// Server ID
  @BuiltValueField(wireName: r'vps_server')
  String? get vpsServer;

  /// IP address of the VPS
  @BuiltValueField(wireName: r'vps_ip')
  String? get vpsIp;

  /// IPv6 address of the VPS
  @BuiltValueField(wireName: r'vps_ipv6')
  JsonObject? get vpsIpv6;

  /// VPS Virtuozzo ID
  @BuiltValueField(wireName: r'vps_vzid')
  String? get vpsVzid;

  /// Currency used for billing
  @BuiltValueField(wireName: r'vps_currency')
  String? get vpsCurrency;

  /// VPS type
  @BuiltValueField(wireName: r'vps_type')
  String? get vpsType;

  /// Date of VPS order
  @BuiltValueField(wireName: r'vps_order_date')
  String? get vpsOrderDate;

  /// VPS status
  @BuiltValueField(wireName: r'vps_status')
  String? get vpsStatus;

  /// VPS invoice number
  @BuiltValueField(wireName: r'vps_invoice')
  String? get vpsInvoice;

  /// VPS coupon code
  @BuiltValueField(wireName: r'vps_coupon')
  String? get vpsCoupon;

  /// Additional information about the VPS
  @BuiltValueField(wireName: r'vps_extra')
  String? get vpsExtra;

  /// VPS hostname
  @BuiltValueField(wireName: r'vps_hostname')
  String? get vpsHostname;

  /// Status of the VPS server
  @BuiltValueField(wireName: r'vps_server_status')
  String? get vpsServerStatus;

  /// Comment associated with the VPS
  @BuiltValueField(wireName: r'vps_comment')
  String? get vpsComment;

  /// Number of VPS slices
  @BuiltValueField(wireName: r'vps_slices')
  String? get vpsSlices;

  /// VNC address
  @BuiltValueField(wireName: r'vps_vnc')
  String? get vpsVnc;

  /// VNC port
  @BuiltValueField(wireName: r'vps_vnc_port')
  String? get vpsVncPort;

  /// Root password of the VPS
  @BuiltValueField(wireName: r'vps_rootpass')
  String? get vpsRootpass;

  /// MAC address of the VPS
  @BuiltValueField(wireName: r'vps_mac')
  String? get vpsMac;

  /// Operating system of the VPS
  @BuiltValueField(wireName: r'vps_os')
  String? get vpsOs;

  /// Version of the operating system
  @BuiltValueField(wireName: r'vps_version')
  String? get vpsVersion;

  /// Location of the VPS
  @BuiltValueField(wireName: r'vps_location')
  String? get vpsLocation;

  /// Virtualization platform
  @BuiltValueField(wireName: r'vps_platform')
  String? get vpsPlatform;

  /// Amount of disk space used
  @BuiltValueField(wireName: r'vps_diskused')
  String? get vpsDiskused;

  /// Maximum disk space available
  @BuiltValueField(wireName: r'vps_diskmax')
  String? get vpsDiskmax;

  VpsServiceInfo._();

  factory VpsServiceInfo([void updates(VpsServiceInfoBuilder b)]) = _$VpsServiceInfo;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(VpsServiceInfoBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<VpsServiceInfo> get serializer => _$VpsServiceInfoSerializer();
}

class _$VpsServiceInfoSerializer implements PrimitiveSerializer<VpsServiceInfo> {
  @override
  final Iterable<Type> types = const [VpsServiceInfo, _$VpsServiceInfo];

  @override
  final String wireName = r'VpsServiceInfo';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    VpsServiceInfo object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.vpsId != null) {
      yield r'vps_id';
      yield serializers.serialize(
        object.vpsId,
        specifiedType: const FullType(String),
      );
    }
    if (object.vpsCustid != null) {
      yield r'vps_custid';
      yield serializers.serialize(
        object.vpsCustid,
        specifiedType: const FullType(String),
      );
    }
    if (object.vpsServer != null) {
      yield r'vps_server';
      yield serializers.serialize(
        object.vpsServer,
        specifiedType: const FullType(String),
      );
    }
    if (object.vpsIp != null) {
      yield r'vps_ip';
      yield serializers.serialize(
        object.vpsIp,
        specifiedType: const FullType(String),
      );
    }
    if (object.vpsIpv6 != null) {
      yield r'vps_ipv6';
      yield serializers.serialize(
        object.vpsIpv6,
        specifiedType: const FullType.nullable(JsonObject),
      );
    }
    if (object.vpsVzid != null) {
      yield r'vps_vzid';
      yield serializers.serialize(
        object.vpsVzid,
        specifiedType: const FullType(String),
      );
    }
    if (object.vpsCurrency != null) {
      yield r'vps_currency';
      yield serializers.serialize(
        object.vpsCurrency,
        specifiedType: const FullType(String),
      );
    }
    if (object.vpsType != null) {
      yield r'vps_type';
      yield serializers.serialize(
        object.vpsType,
        specifiedType: const FullType(String),
      );
    }
    if (object.vpsOrderDate != null) {
      yield r'vps_order_date';
      yield serializers.serialize(
        object.vpsOrderDate,
        specifiedType: const FullType(String),
      );
    }
    if (object.vpsStatus != null) {
      yield r'vps_status';
      yield serializers.serialize(
        object.vpsStatus,
        specifiedType: const FullType(String),
      );
    }
    if (object.vpsInvoice != null) {
      yield r'vps_invoice';
      yield serializers.serialize(
        object.vpsInvoice,
        specifiedType: const FullType(String),
      );
    }
    if (object.vpsCoupon != null) {
      yield r'vps_coupon';
      yield serializers.serialize(
        object.vpsCoupon,
        specifiedType: const FullType(String),
      );
    }
    if (object.vpsExtra != null) {
      yield r'vps_extra';
      yield serializers.serialize(
        object.vpsExtra,
        specifiedType: const FullType(String),
      );
    }
    if (object.vpsHostname != null) {
      yield r'vps_hostname';
      yield serializers.serialize(
        object.vpsHostname,
        specifiedType: const FullType(String),
      );
    }
    if (object.vpsServerStatus != null) {
      yield r'vps_server_status';
      yield serializers.serialize(
        object.vpsServerStatus,
        specifiedType: const FullType(String),
      );
    }
    if (object.vpsComment != null) {
      yield r'vps_comment';
      yield serializers.serialize(
        object.vpsComment,
        specifiedType: const FullType(String),
      );
    }
    if (object.vpsSlices != null) {
      yield r'vps_slices';
      yield serializers.serialize(
        object.vpsSlices,
        specifiedType: const FullType(String),
      );
    }
    if (object.vpsVnc != null) {
      yield r'vps_vnc';
      yield serializers.serialize(
        object.vpsVnc,
        specifiedType: const FullType(String),
      );
    }
    if (object.vpsVncPort != null) {
      yield r'vps_vnc_port';
      yield serializers.serialize(
        object.vpsVncPort,
        specifiedType: const FullType(String),
      );
    }
    if (object.vpsRootpass != null) {
      yield r'vps_rootpass';
      yield serializers.serialize(
        object.vpsRootpass,
        specifiedType: const FullType(String),
      );
    }
    if (object.vpsMac != null) {
      yield r'vps_mac';
      yield serializers.serialize(
        object.vpsMac,
        specifiedType: const FullType(String),
      );
    }
    if (object.vpsOs != null) {
      yield r'vps_os';
      yield serializers.serialize(
        object.vpsOs,
        specifiedType: const FullType(String),
      );
    }
    if (object.vpsVersion != null) {
      yield r'vps_version';
      yield serializers.serialize(
        object.vpsVersion,
        specifiedType: const FullType(String),
      );
    }
    if (object.vpsLocation != null) {
      yield r'vps_location';
      yield serializers.serialize(
        object.vpsLocation,
        specifiedType: const FullType(String),
      );
    }
    if (object.vpsPlatform != null) {
      yield r'vps_platform';
      yield serializers.serialize(
        object.vpsPlatform,
        specifiedType: const FullType(String),
      );
    }
    if (object.vpsDiskused != null) {
      yield r'vps_diskused';
      yield serializers.serialize(
        object.vpsDiskused,
        specifiedType: const FullType(String),
      );
    }
    if (object.vpsDiskmax != null) {
      yield r'vps_diskmax';
      yield serializers.serialize(
        object.vpsDiskmax,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    VpsServiceInfo object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required VpsServiceInfoBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'vps_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsId = valueDes;
          break;
        case r'vps_custid':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsCustid = valueDes;
          break;
        case r'vps_server':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsServer = valueDes;
          break;
        case r'vps_ip':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsIp = valueDes;
          break;
        case r'vps_ipv6':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(JsonObject),
          ) as JsonObject?;
          if (valueDes == null) continue;
          result.vpsIpv6 = valueDes;
          break;
        case r'vps_vzid':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsVzid = valueDes;
          break;
        case r'vps_currency':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsCurrency = valueDes;
          break;
        case r'vps_type':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsType = valueDes;
          break;
        case r'vps_order_date':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsOrderDate = valueDes;
          break;
        case r'vps_status':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsStatus = valueDes;
          break;
        case r'vps_invoice':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsInvoice = valueDes;
          break;
        case r'vps_coupon':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsCoupon = valueDes;
          break;
        case r'vps_extra':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsExtra = valueDes;
          break;
        case r'vps_hostname':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsHostname = valueDes;
          break;
        case r'vps_server_status':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsServerStatus = valueDes;
          break;
        case r'vps_comment':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsComment = valueDes;
          break;
        case r'vps_slices':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsSlices = valueDes;
          break;
        case r'vps_vnc':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsVnc = valueDes;
          break;
        case r'vps_vnc_port':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsVncPort = valueDes;
          break;
        case r'vps_rootpass':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsRootpass = valueDes;
          break;
        case r'vps_mac':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsMac = valueDes;
          break;
        case r'vps_os':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsOs = valueDes;
          break;
        case r'vps_version':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsVersion = valueDes;
          break;
        case r'vps_location':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsLocation = valueDes;
          break;
        case r'vps_platform':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsPlatform = valueDes;
          break;
        case r'vps_diskused':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsDiskused = valueDes;
          break;
        case r'vps_diskmax':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.vpsDiskmax = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  VpsServiceInfo deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = VpsServiceInfoBuilder();
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

