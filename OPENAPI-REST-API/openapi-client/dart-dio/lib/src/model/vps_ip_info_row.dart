//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'vps_ip_info_row.g.dart';

/// VpsIPInfoRow
///
/// Properties:
/// * [desc] - Description
/// * [value] - Value
@BuiltValue()
abstract class VpsIPInfoRow implements Built<VpsIPInfoRow, VpsIPInfoRowBuilder> {
  /// Description
  @BuiltValueField(wireName: r'desc')
  String? get desc;

  /// Value
  @BuiltValueField(wireName: r'value')
  String? get value;

  VpsIPInfoRow._();

  factory VpsIPInfoRow([void updates(VpsIPInfoRowBuilder b)]) = _$VpsIPInfoRow;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(VpsIPInfoRowBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<VpsIPInfoRow> get serializer => _$VpsIPInfoRowSerializer();
}

class _$VpsIPInfoRowSerializer implements PrimitiveSerializer<VpsIPInfoRow> {
  @override
  final Iterable<Type> types = const [VpsIPInfoRow, _$VpsIPInfoRow];

  @override
  final String wireName = r'VpsIPInfoRow';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    VpsIPInfoRow object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.desc != null) {
      yield r'desc';
      yield serializers.serialize(
        object.desc,
        specifiedType: const FullType(String),
      );
    }
    if (object.value != null) {
      yield r'value';
      yield serializers.serialize(
        object.value,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    VpsIPInfoRow object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required VpsIPInfoRowBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'desc':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.desc = valueDes;
          break;
        case r'value':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.value = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  VpsIPInfoRow deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = VpsIPInfoRowBuilder();
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

