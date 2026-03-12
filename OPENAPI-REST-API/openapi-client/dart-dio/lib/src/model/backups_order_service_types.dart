//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'backups_order_service_types.g.dart';

/// BackupsOrderServiceTypes
///
/// Properties:
/// * [n11006] 
@BuiltValue()
abstract class BackupsOrderServiceTypes implements Built<BackupsOrderServiceTypes, BackupsOrderServiceTypesBuilder> {
  @BuiltValueField(wireName: r'11006')
  BackupsOrderServiceTypes? get n11006;

  BackupsOrderServiceTypes._();

  factory BackupsOrderServiceTypes([void updates(BackupsOrderServiceTypesBuilder b)]) = _$BackupsOrderServiceTypes;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(BackupsOrderServiceTypesBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<BackupsOrderServiceTypes> get serializer => _$BackupsOrderServiceTypesSerializer();
}

class _$BackupsOrderServiceTypesSerializer implements PrimitiveSerializer<BackupsOrderServiceTypes> {
  @override
  final Iterable<Type> types = const [BackupsOrderServiceTypes, _$BackupsOrderServiceTypes];

  @override
  final String wireName = r'BackupsOrderServiceTypes';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    BackupsOrderServiceTypes object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.n11006 != null) {
      yield r'11006';
      yield serializers.serialize(
        object.n11006,
        specifiedType: const FullType(BackupsOrderServiceTypes),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    BackupsOrderServiceTypes object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required BackupsOrderServiceTypesBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'11006':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BackupsOrderServiceTypes),
          ) as BackupsOrderServiceTypes;
          result.n11006.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  BackupsOrderServiceTypes deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = BackupsOrderServiceTypesBuilder();
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

