//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/domain_order_services10001.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'domain_order_services.g.dart';

/// Available domain service catalog entries keyed by service ID.
///
/// Properties:
/// * [domainOrderServices10001] 
@BuiltValue()
abstract class DomainOrderServices implements Built<DomainOrderServices, DomainOrderServicesBuilder> {
  @BuiltValueField(wireName: r'DomainOrderServices10001')
  DomainOrderServices10001? get domainOrderServices10001;

  DomainOrderServices._();

  factory DomainOrderServices([void updates(DomainOrderServicesBuilder b)]) = _$DomainOrderServices;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(DomainOrderServicesBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<DomainOrderServices> get serializer => _$DomainOrderServicesSerializer();
}

class _$DomainOrderServicesSerializer implements PrimitiveSerializer<DomainOrderServices> {
  @override
  final Iterable<Type> types = const [DomainOrderServices, _$DomainOrderServices];

  @override
  final String wireName = r'DomainOrderServices';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    DomainOrderServices object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.domainOrderServices10001 != null) {
      yield r'DomainOrderServices10001';
      yield serializers.serialize(
        object.domainOrderServices10001,
        specifiedType: const FullType(DomainOrderServices10001),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    DomainOrderServices object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required DomainOrderServicesBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'DomainOrderServices10001':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(DomainOrderServices10001),
          ) as DomainOrderServices10001;
          result.domainOrderServices10001.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  DomainOrderServices deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = DomainOrderServicesBuilder();
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

