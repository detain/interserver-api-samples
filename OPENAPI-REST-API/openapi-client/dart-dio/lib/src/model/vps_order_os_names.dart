//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'vps_order_os_names.g.dart';

/// OS Names
///
/// Properties:
/// * [opensuse] 
/// * [ubuntu] 
@BuiltValue()
abstract class VpsOrderOsNames implements Built<VpsOrderOsNames, VpsOrderOsNamesBuilder> {
  @BuiltValueField(wireName: r'opensuse')
  String? get opensuse;

  @BuiltValueField(wireName: r'ubuntu')
  String? get ubuntu;

  VpsOrderOsNames._();

  factory VpsOrderOsNames([void updates(VpsOrderOsNamesBuilder b)]) = _$VpsOrderOsNames;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(VpsOrderOsNamesBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<VpsOrderOsNames> get serializer => _$VpsOrderOsNamesSerializer();
}

class _$VpsOrderOsNamesSerializer implements PrimitiveSerializer<VpsOrderOsNames> {
  @override
  final Iterable<Type> types = const [VpsOrderOsNames, _$VpsOrderOsNames];

  @override
  final String wireName = r'VpsOrderOsNames';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    VpsOrderOsNames object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.opensuse != null) {
      yield r'opensuse';
      yield serializers.serialize(
        object.opensuse,
        specifiedType: const FullType(String),
      );
    }
    if (object.ubuntu != null) {
      yield r'ubuntu';
      yield serializers.serialize(
        object.ubuntu,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    VpsOrderOsNames object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required VpsOrderOsNamesBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'opensuse':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.opensuse = valueDes;
          break;
        case r'ubuntu':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ubuntu = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  VpsOrderOsNames deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = VpsOrderOsNamesBuilder();
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

