//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/vps_order_service_types32.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'vps_order_service_types.g.dart';

/// Service Types
///
/// Properties:
/// * [n32] 
@BuiltValue()
abstract class VpsOrderServiceTypes implements Built<VpsOrderServiceTypes, VpsOrderServiceTypesBuilder> {
  @BuiltValueField(wireName: r'32')
  VpsOrderServiceTypes32? get n32;

  VpsOrderServiceTypes._();

  factory VpsOrderServiceTypes([void updates(VpsOrderServiceTypesBuilder b)]) = _$VpsOrderServiceTypes;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(VpsOrderServiceTypesBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<VpsOrderServiceTypes> get serializer => _$VpsOrderServiceTypesSerializer();
}

class _$VpsOrderServiceTypesSerializer implements PrimitiveSerializer<VpsOrderServiceTypes> {
  @override
  final Iterable<Type> types = const [VpsOrderServiceTypes, _$VpsOrderServiceTypes];

  @override
  final String wireName = r'VpsOrderServiceTypes';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    VpsOrderServiceTypes object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.n32 != null) {
      yield r'32';
      yield serializers.serialize(
        object.n32,
        specifiedType: const FullType(VpsOrderServiceTypes32),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    VpsOrderServiceTypes object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required VpsOrderServiceTypesBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'32':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(VpsOrderServiceTypes32),
          ) as VpsOrderServiceTypes32;
          result.n32.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  VpsOrderServiceTypes deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = VpsOrderServiceTypesBuilder();
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

