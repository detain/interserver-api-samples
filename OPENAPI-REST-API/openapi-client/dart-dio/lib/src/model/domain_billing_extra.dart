//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/domain_order_response.dart';
import 'package:openapi/src/model/domain_prov_process_pending.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'domain_billing_extra.g.dart';

/// Extended billing context for a domain including registrar order details and contact info.
///
/// Properties:
/// * [order] 
/// * [orderId] 
/// * [domainId] 
/// * [provProcessPending] 
/// * [email] 
/// * [firstname] 
/// * [lastname] 
/// * [company] 
/// * [address] 
/// * [address2] 
/// * [address3] 
/// * [city] 
/// * [state] 
/// * [zip] 
/// * [country] 
/// * [phone] 
/// * [fax] 
@BuiltValue()
abstract class DomainBillingExtra implements Built<DomainBillingExtra, DomainBillingExtraBuilder> {
  @BuiltValueField(wireName: r'order')
  DomainOrderResponse? get order;

  @BuiltValueField(wireName: r'order_id')
  String? get orderId;

  @BuiltValueField(wireName: r'domain_id')
  String? get domainId;

  @BuiltValueField(wireName: r'provProcessPending')
  DomainProvProcessPending? get provProcessPending;

  @BuiltValueField(wireName: r'email')
  String? get email;

  @BuiltValueField(wireName: r'firstname')
  String? get firstname;

  @BuiltValueField(wireName: r'lastname')
  String? get lastname;

  @BuiltValueField(wireName: r'company')
  String? get company;

  @BuiltValueField(wireName: r'address')
  String? get address;

  @BuiltValueField(wireName: r'address2')
  String? get address2;

  @BuiltValueField(wireName: r'address3')
  String? get address3;

  @BuiltValueField(wireName: r'city')
  String? get city;

  @BuiltValueField(wireName: r'state')
  String? get state;

  @BuiltValueField(wireName: r'zip')
  String? get zip;

  @BuiltValueField(wireName: r'country')
  String? get country;

  @BuiltValueField(wireName: r'phone')
  String? get phone;

  @BuiltValueField(wireName: r'fax')
  String? get fax;

  DomainBillingExtra._();

  factory DomainBillingExtra([void updates(DomainBillingExtraBuilder b)]) = _$DomainBillingExtra;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(DomainBillingExtraBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<DomainBillingExtra> get serializer => _$DomainBillingExtraSerializer();
}

class _$DomainBillingExtraSerializer implements PrimitiveSerializer<DomainBillingExtra> {
  @override
  final Iterable<Type> types = const [DomainBillingExtra, _$DomainBillingExtra];

  @override
  final String wireName = r'DomainBillingExtra';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    DomainBillingExtra object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.order != null) {
      yield r'order';
      yield serializers.serialize(
        object.order,
        specifiedType: const FullType(DomainOrderResponse),
      );
    }
    if (object.orderId != null) {
      yield r'order_id';
      yield serializers.serialize(
        object.orderId,
        specifiedType: const FullType(String),
      );
    }
    if (object.domainId != null) {
      yield r'domain_id';
      yield serializers.serialize(
        object.domainId,
        specifiedType: const FullType(String),
      );
    }
    if (object.provProcessPending != null) {
      yield r'provProcessPending';
      yield serializers.serialize(
        object.provProcessPending,
        specifiedType: const FullType(DomainProvProcessPending),
      );
    }
    if (object.email != null) {
      yield r'email';
      yield serializers.serialize(
        object.email,
        specifiedType: const FullType(String),
      );
    }
    if (object.firstname != null) {
      yield r'firstname';
      yield serializers.serialize(
        object.firstname,
        specifiedType: const FullType(String),
      );
    }
    if (object.lastname != null) {
      yield r'lastname';
      yield serializers.serialize(
        object.lastname,
        specifiedType: const FullType(String),
      );
    }
    if (object.company != null) {
      yield r'company';
      yield serializers.serialize(
        object.company,
        specifiedType: const FullType(String),
      );
    }
    if (object.address != null) {
      yield r'address';
      yield serializers.serialize(
        object.address,
        specifiedType: const FullType(String),
      );
    }
    if (object.address2 != null) {
      yield r'address2';
      yield serializers.serialize(
        object.address2,
        specifiedType: const FullType(String),
      );
    }
    if (object.address3 != null) {
      yield r'address3';
      yield serializers.serialize(
        object.address3,
        specifiedType: const FullType(String),
      );
    }
    if (object.city != null) {
      yield r'city';
      yield serializers.serialize(
        object.city,
        specifiedType: const FullType(String),
      );
    }
    if (object.state != null) {
      yield r'state';
      yield serializers.serialize(
        object.state,
        specifiedType: const FullType(String),
      );
    }
    if (object.zip != null) {
      yield r'zip';
      yield serializers.serialize(
        object.zip,
        specifiedType: const FullType(String),
      );
    }
    if (object.country != null) {
      yield r'country';
      yield serializers.serialize(
        object.country,
        specifiedType: const FullType(String),
      );
    }
    if (object.phone != null) {
      yield r'phone';
      yield serializers.serialize(
        object.phone,
        specifiedType: const FullType(String),
      );
    }
    if (object.fax != null) {
      yield r'fax';
      yield serializers.serialize(
        object.fax,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    DomainBillingExtra object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required DomainBillingExtraBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'order':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(DomainOrderResponse),
          ) as DomainOrderResponse;
          result.order.replace(valueDes);
          break;
        case r'order_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.orderId = valueDes;
          break;
        case r'domain_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.domainId = valueDes;
          break;
        case r'provProcessPending':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(DomainProvProcessPending),
          ) as DomainProvProcessPending;
          result.provProcessPending.replace(valueDes);
          break;
        case r'email':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.email = valueDes;
          break;
        case r'firstname':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.firstname = valueDes;
          break;
        case r'lastname':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.lastname = valueDes;
          break;
        case r'company':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.company = valueDes;
          break;
        case r'address':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.address = valueDes;
          break;
        case r'address2':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.address2 = valueDes;
          break;
        case r'address3':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.address3 = valueDes;
          break;
        case r'city':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.city = valueDes;
          break;
        case r'state':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.state = valueDes;
          break;
        case r'zip':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.zip = valueDes;
          break;
        case r'country':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.country = valueDes;
          break;
        case r'phone':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.phone = valueDes;
          break;
        case r'fax':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.fax = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  DomainBillingExtra deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = DomainBillingExtraBuilder();
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

