//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'domain_service_info.g.dart';

/// Detailed domain service record for a domain order.
///
/// Properties:
/// * [domainId] 
/// * [domainHostname] 
/// * [domainUsername] 
/// * [domainPassword] 
/// * [domainType] 
/// * [domainCurrency] 
/// * [domainExpireDate] 
/// * [domainOrderDate] 
/// * [domainCustid] 
/// * [domainStatus] 
/// * [domainInvoice] 
/// * [domainCoupon] 
@BuiltValue()
abstract class DomainServiceInfo implements Built<DomainServiceInfo, DomainServiceInfoBuilder> {
  @BuiltValueField(wireName: r'domain_id')
  String? get domainId;

  @BuiltValueField(wireName: r'domain_hostname')
  String? get domainHostname;

  @BuiltValueField(wireName: r'domain_username')
  String? get domainUsername;

  @BuiltValueField(wireName: r'domain_password')
  String? get domainPassword;

  @BuiltValueField(wireName: r'domain_type')
  String? get domainType;

  @BuiltValueField(wireName: r'domain_currency')
  String? get domainCurrency;

  @BuiltValueField(wireName: r'domain_expire_date')
  String? get domainExpireDate;

  @BuiltValueField(wireName: r'domain_order_date')
  String? get domainOrderDate;

  @BuiltValueField(wireName: r'domain_custid')
  String? get domainCustid;

  @BuiltValueField(wireName: r'domain_status')
  String? get domainStatus;

  @BuiltValueField(wireName: r'domain_invoice')
  String? get domainInvoice;

  @BuiltValueField(wireName: r'domain_coupon')
  String? get domainCoupon;

  DomainServiceInfo._();

  factory DomainServiceInfo([void updates(DomainServiceInfoBuilder b)]) = _$DomainServiceInfo;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(DomainServiceInfoBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<DomainServiceInfo> get serializer => _$DomainServiceInfoSerializer();
}

class _$DomainServiceInfoSerializer implements PrimitiveSerializer<DomainServiceInfo> {
  @override
  final Iterable<Type> types = const [DomainServiceInfo, _$DomainServiceInfo];

  @override
  final String wireName = r'DomainServiceInfo';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    DomainServiceInfo object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.domainId != null) {
      yield r'domain_id';
      yield serializers.serialize(
        object.domainId,
        specifiedType: const FullType(String),
      );
    }
    if (object.domainHostname != null) {
      yield r'domain_hostname';
      yield serializers.serialize(
        object.domainHostname,
        specifiedType: const FullType(String),
      );
    }
    if (object.domainUsername != null) {
      yield r'domain_username';
      yield serializers.serialize(
        object.domainUsername,
        specifiedType: const FullType(String),
      );
    }
    if (object.domainPassword != null) {
      yield r'domain_password';
      yield serializers.serialize(
        object.domainPassword,
        specifiedType: const FullType(String),
      );
    }
    if (object.domainType != null) {
      yield r'domain_type';
      yield serializers.serialize(
        object.domainType,
        specifiedType: const FullType(String),
      );
    }
    if (object.domainCurrency != null) {
      yield r'domain_currency';
      yield serializers.serialize(
        object.domainCurrency,
        specifiedType: const FullType(String),
      );
    }
    if (object.domainExpireDate != null) {
      yield r'domain_expire_date';
      yield serializers.serialize(
        object.domainExpireDate,
        specifiedType: const FullType(String),
      );
    }
    if (object.domainOrderDate != null) {
      yield r'domain_order_date';
      yield serializers.serialize(
        object.domainOrderDate,
        specifiedType: const FullType(String),
      );
    }
    if (object.domainCustid != null) {
      yield r'domain_custid';
      yield serializers.serialize(
        object.domainCustid,
        specifiedType: const FullType(String),
      );
    }
    if (object.domainStatus != null) {
      yield r'domain_status';
      yield serializers.serialize(
        object.domainStatus,
        specifiedType: const FullType(String),
      );
    }
    if (object.domainInvoice != null) {
      yield r'domain_invoice';
      yield serializers.serialize(
        object.domainInvoice,
        specifiedType: const FullType(String),
      );
    }
    if (object.domainCoupon != null) {
      yield r'domain_coupon';
      yield serializers.serialize(
        object.domainCoupon,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    DomainServiceInfo object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required DomainServiceInfoBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'domain_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.domainId = valueDes;
          break;
        case r'domain_hostname':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.domainHostname = valueDes;
          break;
        case r'domain_username':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.domainUsername = valueDes;
          break;
        case r'domain_password':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.domainPassword = valueDes;
          break;
        case r'domain_type':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.domainType = valueDes;
          break;
        case r'domain_currency':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.domainCurrency = valueDes;
          break;
        case r'domain_expire_date':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.domainExpireDate = valueDes;
          break;
        case r'domain_order_date':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.domainOrderDate = valueDes;
          break;
        case r'domain_custid':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.domainCustid = valueDes;
          break;
        case r'domain_status':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.domainStatus = valueDes;
          break;
        case r'domain_invoice':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.domainInvoice = valueDes;
          break;
        case r'domain_coupon':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.domainCoupon = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  DomainServiceInfo deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = DomainServiceInfoBuilder();
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

