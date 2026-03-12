//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'billing_add_cc_request.g.dart';

/// Request to add a new creditcard into the system.
///
/// Properties:
/// * [name] 
/// * [address] 
/// * [city] 
/// * [state] 
/// * [country] 
/// * [zip] 
/// * [cc] 
/// * [ccExp] 
/// * [ccCcv2] 
@BuiltValue()
abstract class BillingAddCcRequest implements Built<BillingAddCcRequest, BillingAddCcRequestBuilder> {
  @BuiltValueField(wireName: r'name')
  String? get name;

  @BuiltValueField(wireName: r'address')
  String? get address;

  @BuiltValueField(wireName: r'city')
  String? get city;

  @BuiltValueField(wireName: r'state')
  String? get state;

  @BuiltValueField(wireName: r'country')
  String? get country;

  @BuiltValueField(wireName: r'zip')
  String? get zip;

  @BuiltValueField(wireName: r'cc')
  String? get cc;

  @BuiltValueField(wireName: r'cc_exp')
  String? get ccExp;

  @BuiltValueField(wireName: r'cc_ccv2')
  String? get ccCcv2;

  BillingAddCcRequest._();

  factory BillingAddCcRequest([void updates(BillingAddCcRequestBuilder b)]) = _$BillingAddCcRequest;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(BillingAddCcRequestBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<BillingAddCcRequest> get serializer => _$BillingAddCcRequestSerializer();
}

class _$BillingAddCcRequestSerializer implements PrimitiveSerializer<BillingAddCcRequest> {
  @override
  final Iterable<Type> types = const [BillingAddCcRequest, _$BillingAddCcRequest];

  @override
  final String wireName = r'BillingAddCcRequest';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    BillingAddCcRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.name != null) {
      yield r'name';
      yield serializers.serialize(
        object.name,
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
    if (object.country != null) {
      yield r'country';
      yield serializers.serialize(
        object.country,
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
    if (object.cc != null) {
      yield r'cc';
      yield serializers.serialize(
        object.cc,
        specifiedType: const FullType(String),
      );
    }
    if (object.ccExp != null) {
      yield r'cc_exp';
      yield serializers.serialize(
        object.ccExp,
        specifiedType: const FullType(String),
      );
    }
    if (object.ccCcv2 != null) {
      yield r'cc_ccv2';
      yield serializers.serialize(
        object.ccCcv2,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    BillingAddCcRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required BillingAddCcRequestBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.name = valueDes;
          break;
        case r'address':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.address = valueDes;
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
        case r'country':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.country = valueDes;
          break;
        case r'zip':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.zip = valueDes;
          break;
        case r'cc':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.cc = valueDes;
          break;
        case r'cc_exp':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ccExp = valueDes;
          break;
        case r'cc_ccv2':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ccCcv2 = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  BillingAddCcRequest deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = BillingAddCcRequestBuilder();
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

