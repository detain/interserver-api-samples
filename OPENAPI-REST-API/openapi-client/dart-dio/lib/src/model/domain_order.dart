//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/domain_order_services.dart';
import 'package:built_value/json_object.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'domain_order.g.dart';

/// Ordering metadata for domain registration and transfers.
///
/// Properties:
/// * [whoisPrivacyCost] - Cost of Whois Privacy
/// * [services] 
/// * [tldServices] - Map of TLDs to domain service IDs.
@BuiltValue()
abstract class DomainOrder implements Built<DomainOrder, DomainOrderBuilder> {
  /// Cost of Whois Privacy
  @BuiltValueField(wireName: r'whoisPrivacyCost')
  String? get whoisPrivacyCost;

  @BuiltValueField(wireName: r'services')
  DomainOrderServices? get services;

  /// Map of TLDs to domain service IDs.
  @BuiltValueField(wireName: r'tldServices')
  JsonObject? get tldServices;

  DomainOrder._();

  factory DomainOrder([void updates(DomainOrderBuilder b)]) = _$DomainOrder;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(DomainOrderBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<DomainOrder> get serializer => _$DomainOrderSerializer();
}

class _$DomainOrderSerializer implements PrimitiveSerializer<DomainOrder> {
  @override
  final Iterable<Type> types = const [DomainOrder, _$DomainOrder];

  @override
  final String wireName = r'DomainOrder';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    DomainOrder object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.whoisPrivacyCost != null) {
      yield r'whoisPrivacyCost';
      yield serializers.serialize(
        object.whoisPrivacyCost,
        specifiedType: const FullType(String),
      );
    }
    if (object.services != null) {
      yield r'services';
      yield serializers.serialize(
        object.services,
        specifiedType: const FullType(DomainOrderServices),
      );
    }
    if (object.tldServices != null) {
      yield r'tldServices';
      yield serializers.serialize(
        object.tldServices,
        specifiedType: const FullType(JsonObject),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    DomainOrder object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required DomainOrderBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'whoisPrivacyCost':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.whoisPrivacyCost = valueDes;
          break;
        case r'services':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(DomainOrderServices),
          ) as DomainOrderServices;
          result.services.replace(valueDes);
          break;
        case r'tldServices':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(JsonObject),
          ) as JsonObject;
          result.tldServices = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  DomainOrder deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = DomainOrderBuilder();
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

