//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'license_service_info.g.dart';

/// LicenseServiceInfo
///
/// Properties:
/// * [licenseId] - License ID
/// * [licenseType] - License type
/// * [licenseCurrency] - License currency
/// * [licenseOrderDate] - License order date
/// * [licenseCustid] - Customer ID
/// * [licenseIp] - License IP
/// * [licenseStatus] - License status
/// * [licenseInvoice] - License invoice
/// * [licenseCoupon] - License coupon
/// * [licenseHostname] - License hostname
/// * [licenseKey] - License key
/// * [licenseExtra] - Additional license information
@BuiltValue()
abstract class LicenseServiceInfo implements Built<LicenseServiceInfo, LicenseServiceInfoBuilder> {
  /// License ID
  @BuiltValueField(wireName: r'license_id')
  String get licenseId;

  /// License type
  @BuiltValueField(wireName: r'license_type')
  String get licenseType;

  /// License currency
  @BuiltValueField(wireName: r'license_currency')
  String get licenseCurrency;

  /// License order date
  @BuiltValueField(wireName: r'license_order_date')
  DateTime get licenseOrderDate;

  /// Customer ID
  @BuiltValueField(wireName: r'license_custid')
  String get licenseCustid;

  /// License IP
  @BuiltValueField(wireName: r'license_ip')
  String get licenseIp;

  /// License status
  @BuiltValueField(wireName: r'license_status')
  String get licenseStatus;

  /// License invoice
  @BuiltValueField(wireName: r'license_invoice')
  String get licenseInvoice;

  /// License coupon
  @BuiltValueField(wireName: r'license_coupon')
  String get licenseCoupon;

  /// License hostname
  @BuiltValueField(wireName: r'license_hostname')
  String? get licenseHostname;

  /// License key
  @BuiltValueField(wireName: r'license_key')
  String? get licenseKey;

  /// Additional license information
  @BuiltValueField(wireName: r'license_extra')
  String? get licenseExtra;

  LicenseServiceInfo._();

  factory LicenseServiceInfo([void updates(LicenseServiceInfoBuilder b)]) = _$LicenseServiceInfo;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(LicenseServiceInfoBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<LicenseServiceInfo> get serializer => _$LicenseServiceInfoSerializer();
}

class _$LicenseServiceInfoSerializer implements PrimitiveSerializer<LicenseServiceInfo> {
  @override
  final Iterable<Type> types = const [LicenseServiceInfo, _$LicenseServiceInfo];

  @override
  final String wireName = r'LicenseServiceInfo';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    LicenseServiceInfo object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'license_id';
    yield serializers.serialize(
      object.licenseId,
      specifiedType: const FullType(String),
    );
    yield r'license_type';
    yield serializers.serialize(
      object.licenseType,
      specifiedType: const FullType(String),
    );
    yield r'license_currency';
    yield serializers.serialize(
      object.licenseCurrency,
      specifiedType: const FullType(String),
    );
    yield r'license_order_date';
    yield serializers.serialize(
      object.licenseOrderDate,
      specifiedType: const FullType(DateTime),
    );
    yield r'license_custid';
    yield serializers.serialize(
      object.licenseCustid,
      specifiedType: const FullType(String),
    );
    yield r'license_ip';
    yield serializers.serialize(
      object.licenseIp,
      specifiedType: const FullType(String),
    );
    yield r'license_status';
    yield serializers.serialize(
      object.licenseStatus,
      specifiedType: const FullType(String),
    );
    yield r'license_invoice';
    yield serializers.serialize(
      object.licenseInvoice,
      specifiedType: const FullType(String),
    );
    yield r'license_coupon';
    yield serializers.serialize(
      object.licenseCoupon,
      specifiedType: const FullType(String),
    );
    if (object.licenseHostname != null) {
      yield r'license_hostname';
      yield serializers.serialize(
        object.licenseHostname,
        specifiedType: const FullType(String),
      );
    }
    if (object.licenseKey != null) {
      yield r'license_key';
      yield serializers.serialize(
        object.licenseKey,
        specifiedType: const FullType(String),
      );
    }
    if (object.licenseExtra != null) {
      yield r'license_extra';
      yield serializers.serialize(
        object.licenseExtra,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    LicenseServiceInfo object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required LicenseServiceInfoBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'license_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.licenseId = valueDes;
          break;
        case r'license_type':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.licenseType = valueDes;
          break;
        case r'license_currency':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.licenseCurrency = valueDes;
          break;
        case r'license_order_date':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(DateTime),
          ) as DateTime;
          result.licenseOrderDate = valueDes;
          break;
        case r'license_custid':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.licenseCustid = valueDes;
          break;
        case r'license_ip':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.licenseIp = valueDes;
          break;
        case r'license_status':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.licenseStatus = valueDes;
          break;
        case r'license_invoice':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.licenseInvoice = valueDes;
          break;
        case r'license_coupon':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.licenseCoupon = valueDes;
          break;
        case r'license_hostname':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.licenseHostname = valueDes;
          break;
        case r'license_key':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.licenseKey = valueDes;
          break;
        case r'license_extra':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.licenseExtra = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  LicenseServiceInfo deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = LicenseServiceInfoBuilder();
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

