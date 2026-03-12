//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/json_object.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'quickserver_service_info.g.dart';

/// Core service record for a QuickServer including ID, status, IP, OS, and billing details.
///
/// Properties:
/// * [qsId] - Quickserver ID
/// * [qsCustid] - Customer ID
/// * [qsServer] - Server information
/// * [qsIp] - IP address
/// * [qsIpv6] - IPv6 address (null)
/// * [qsVzid] - VZ ID
/// * [qsCurrency] - Currency
/// * [qsType] - Type
/// * [qsOrderDate] - Order date
/// * [qsStatus] - Status
/// * [qsInvoice] - Invoice number
/// * [qsCoupon] - Coupon information
/// * [qsExtra] - Extra information
/// * [qsHostname] - Hostname
/// * [qsServerStatus] - Server status
/// * [qsComment] - Comment
/// * [qsSlices] - Slices information
/// * [qsVnc] - VNC information
/// * [qsVncPort] - VNC port (null)
/// * [qsRootpass] - Root password
/// * [qsMac] - MAC address
/// * [qsOs] - Operating system
/// * [qsVersion] - OS version
/// * [qsLocation] - Location
/// * [qsPlatform] - Platform (null)
@BuiltValue()
abstract class QuickserverServiceInfo implements Built<QuickserverServiceInfo, QuickserverServiceInfoBuilder> {
  /// Quickserver ID
  @BuiltValueField(wireName: r'qs_id')
  String? get qsId;

  /// Customer ID
  @BuiltValueField(wireName: r'qs_custid')
  String? get qsCustid;

  /// Server information
  @BuiltValueField(wireName: r'qs_server')
  String? get qsServer;

  /// IP address
  @BuiltValueField(wireName: r'qs_ip')
  String? get qsIp;

  /// IPv6 address (null)
  @BuiltValueField(wireName: r'qs_ipv6')
  JsonObject? get qsIpv6;

  /// VZ ID
  @BuiltValueField(wireName: r'qs_vzid')
  String? get qsVzid;

  /// Currency
  @BuiltValueField(wireName: r'qs_currency')
  String? get qsCurrency;

  /// Type
  @BuiltValueField(wireName: r'qs_type')
  String? get qsType;

  /// Order date
  @BuiltValueField(wireName: r'qs_order_date')
  String? get qsOrderDate;

  /// Status
  @BuiltValueField(wireName: r'qs_status')
  String? get qsStatus;

  /// Invoice number
  @BuiltValueField(wireName: r'qs_invoice')
  String? get qsInvoice;

  /// Coupon information
  @BuiltValueField(wireName: r'qs_coupon')
  String? get qsCoupon;

  /// Extra information
  @BuiltValueField(wireName: r'qs_extra')
  String? get qsExtra;

  /// Hostname
  @BuiltValueField(wireName: r'qs_hostname')
  String? get qsHostname;

  /// Server status
  @BuiltValueField(wireName: r'qs_server_status')
  String? get qsServerStatus;

  /// Comment
  @BuiltValueField(wireName: r'qs_comment')
  String? get qsComment;

  /// Slices information
  @BuiltValueField(wireName: r'qs_slices')
  String? get qsSlices;

  /// VNC information
  @BuiltValueField(wireName: r'qs_vnc')
  String? get qsVnc;

  /// VNC port (null)
  @BuiltValueField(wireName: r'qs_vnc_port')
  JsonObject? get qsVncPort;

  /// Root password
  @BuiltValueField(wireName: r'qs_rootpass')
  String? get qsRootpass;

  /// MAC address
  @BuiltValueField(wireName: r'qs_mac')
  String? get qsMac;

  /// Operating system
  @BuiltValueField(wireName: r'qs_os')
  String? get qsOs;

  /// OS version
  @BuiltValueField(wireName: r'qs_version')
  String? get qsVersion;

  /// Location
  @BuiltValueField(wireName: r'qs_location')
  String? get qsLocation;

  /// Platform (null)
  @BuiltValueField(wireName: r'qs_platform')
  JsonObject? get qsPlatform;

  QuickserverServiceInfo._();

  factory QuickserverServiceInfo([void updates(QuickserverServiceInfoBuilder b)]) = _$QuickserverServiceInfo;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(QuickserverServiceInfoBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<QuickserverServiceInfo> get serializer => _$QuickserverServiceInfoSerializer();
}

class _$QuickserverServiceInfoSerializer implements PrimitiveSerializer<QuickserverServiceInfo> {
  @override
  final Iterable<Type> types = const [QuickserverServiceInfo, _$QuickserverServiceInfo];

  @override
  final String wireName = r'QuickserverServiceInfo';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    QuickserverServiceInfo object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.qsId != null) {
      yield r'qs_id';
      yield serializers.serialize(
        object.qsId,
        specifiedType: const FullType(String),
      );
    }
    if (object.qsCustid != null) {
      yield r'qs_custid';
      yield serializers.serialize(
        object.qsCustid,
        specifiedType: const FullType(String),
      );
    }
    if (object.qsServer != null) {
      yield r'qs_server';
      yield serializers.serialize(
        object.qsServer,
        specifiedType: const FullType(String),
      );
    }
    if (object.qsIp != null) {
      yield r'qs_ip';
      yield serializers.serialize(
        object.qsIp,
        specifiedType: const FullType(String),
      );
    }
    if (object.qsIpv6 != null) {
      yield r'qs_ipv6';
      yield serializers.serialize(
        object.qsIpv6,
        specifiedType: const FullType.nullable(JsonObject),
      );
    }
    if (object.qsVzid != null) {
      yield r'qs_vzid';
      yield serializers.serialize(
        object.qsVzid,
        specifiedType: const FullType(String),
      );
    }
    if (object.qsCurrency != null) {
      yield r'qs_currency';
      yield serializers.serialize(
        object.qsCurrency,
        specifiedType: const FullType(String),
      );
    }
    if (object.qsType != null) {
      yield r'qs_type';
      yield serializers.serialize(
        object.qsType,
        specifiedType: const FullType(String),
      );
    }
    if (object.qsOrderDate != null) {
      yield r'qs_order_date';
      yield serializers.serialize(
        object.qsOrderDate,
        specifiedType: const FullType(String),
      );
    }
    if (object.qsStatus != null) {
      yield r'qs_status';
      yield serializers.serialize(
        object.qsStatus,
        specifiedType: const FullType(String),
      );
    }
    if (object.qsInvoice != null) {
      yield r'qs_invoice';
      yield serializers.serialize(
        object.qsInvoice,
        specifiedType: const FullType(String),
      );
    }
    if (object.qsCoupon != null) {
      yield r'qs_coupon';
      yield serializers.serialize(
        object.qsCoupon,
        specifiedType: const FullType(String),
      );
    }
    if (object.qsExtra != null) {
      yield r'qs_extra';
      yield serializers.serialize(
        object.qsExtra,
        specifiedType: const FullType(String),
      );
    }
    if (object.qsHostname != null) {
      yield r'qs_hostname';
      yield serializers.serialize(
        object.qsHostname,
        specifiedType: const FullType(String),
      );
    }
    if (object.qsServerStatus != null) {
      yield r'qs_server_status';
      yield serializers.serialize(
        object.qsServerStatus,
        specifiedType: const FullType(String),
      );
    }
    if (object.qsComment != null) {
      yield r'qs_comment';
      yield serializers.serialize(
        object.qsComment,
        specifiedType: const FullType(String),
      );
    }
    if (object.qsSlices != null) {
      yield r'qs_slices';
      yield serializers.serialize(
        object.qsSlices,
        specifiedType: const FullType(String),
      );
    }
    if (object.qsVnc != null) {
      yield r'qs_vnc';
      yield serializers.serialize(
        object.qsVnc,
        specifiedType: const FullType(String),
      );
    }
    if (object.qsVncPort != null) {
      yield r'qs_vnc_port';
      yield serializers.serialize(
        object.qsVncPort,
        specifiedType: const FullType.nullable(JsonObject),
      );
    }
    if (object.qsRootpass != null) {
      yield r'qs_rootpass';
      yield serializers.serialize(
        object.qsRootpass,
        specifiedType: const FullType(String),
      );
    }
    if (object.qsMac != null) {
      yield r'qs_mac';
      yield serializers.serialize(
        object.qsMac,
        specifiedType: const FullType(String),
      );
    }
    if (object.qsOs != null) {
      yield r'qs_os';
      yield serializers.serialize(
        object.qsOs,
        specifiedType: const FullType(String),
      );
    }
    if (object.qsVersion != null) {
      yield r'qs_version';
      yield serializers.serialize(
        object.qsVersion,
        specifiedType: const FullType(String),
      );
    }
    if (object.qsLocation != null) {
      yield r'qs_location';
      yield serializers.serialize(
        object.qsLocation,
        specifiedType: const FullType(String),
      );
    }
    if (object.qsPlatform != null) {
      yield r'qs_platform';
      yield serializers.serialize(
        object.qsPlatform,
        specifiedType: const FullType.nullable(JsonObject),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    QuickserverServiceInfo object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required QuickserverServiceInfoBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'qs_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsId = valueDes;
          break;
        case r'qs_custid':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsCustid = valueDes;
          break;
        case r'qs_server':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsServer = valueDes;
          break;
        case r'qs_ip':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsIp = valueDes;
          break;
        case r'qs_ipv6':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(JsonObject),
          ) as JsonObject?;
          if (valueDes == null) continue;
          result.qsIpv6 = valueDes;
          break;
        case r'qs_vzid':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsVzid = valueDes;
          break;
        case r'qs_currency':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsCurrency = valueDes;
          break;
        case r'qs_type':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsType = valueDes;
          break;
        case r'qs_order_date':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsOrderDate = valueDes;
          break;
        case r'qs_status':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsStatus = valueDes;
          break;
        case r'qs_invoice':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsInvoice = valueDes;
          break;
        case r'qs_coupon':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsCoupon = valueDes;
          break;
        case r'qs_extra':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsExtra = valueDes;
          break;
        case r'qs_hostname':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsHostname = valueDes;
          break;
        case r'qs_server_status':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsServerStatus = valueDes;
          break;
        case r'qs_comment':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsComment = valueDes;
          break;
        case r'qs_slices':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsSlices = valueDes;
          break;
        case r'qs_vnc':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsVnc = valueDes;
          break;
        case r'qs_vnc_port':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(JsonObject),
          ) as JsonObject?;
          if (valueDes == null) continue;
          result.qsVncPort = valueDes;
          break;
        case r'qs_rootpass':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsRootpass = valueDes;
          break;
        case r'qs_mac':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsMac = valueDes;
          break;
        case r'qs_os':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsOs = valueDes;
          break;
        case r'qs_version':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsVersion = valueDes;
          break;
        case r'qs_location':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.qsLocation = valueDes;
          break;
        case r'qs_platform':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType.nullable(JsonObject),
          ) as JsonObject?;
          if (valueDes == null) continue;
          result.qsPlatform = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  QuickserverServiceInfo deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = QuickserverServiceInfoBuilder();
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

