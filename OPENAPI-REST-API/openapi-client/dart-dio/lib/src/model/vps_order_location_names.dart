//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'vps_order_location_names.g.dart';

/// Location Names
///
/// Properties:
/// * [n3] 
@BuiltValue()
abstract class VpsOrderLocationNames implements Built<VpsOrderLocationNames, VpsOrderLocationNamesBuilder> {
  @BuiltValueField(wireName: r'3')
  String? get n3;

  VpsOrderLocationNames._();

  factory VpsOrderLocationNames([void updates(VpsOrderLocationNamesBuilder b)]) = _$VpsOrderLocationNames;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(VpsOrderLocationNamesBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<VpsOrderLocationNames> get serializer => _$VpsOrderLocationNamesSerializer();
}

class _$VpsOrderLocationNamesSerializer implements PrimitiveSerializer<VpsOrderLocationNames> {
  @override
  final Iterable<Type> types = const [VpsOrderLocationNames, _$VpsOrderLocationNames];

  @override
  final String wireName = r'VpsOrderLocationNames';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    VpsOrderLocationNames object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.n3 != null) {
      yield r'3';
      yield serializers.serialize(
        object.n3,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    VpsOrderLocationNames object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required VpsOrderLocationNamesBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'3':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.n3 = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  VpsOrderLocationNames deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = VpsOrderLocationNamesBuilder();
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

