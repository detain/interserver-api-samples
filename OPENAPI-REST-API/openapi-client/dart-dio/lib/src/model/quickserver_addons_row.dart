//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'quickserver_addons_row.g.dart';

/// A single add-on item associated with a QuickServer service.
///
/// Properties:
/// * [desc] - Description
/// * [value] - Value
@BuiltValue()
abstract class QuickserverAddonsRow implements Built<QuickserverAddonsRow, QuickserverAddonsRowBuilder> {
  /// Description
  @BuiltValueField(wireName: r'desc')
  String? get desc;

  /// Value
  @BuiltValueField(wireName: r'value')
  String? get value;

  QuickserverAddonsRow._();

  factory QuickserverAddonsRow([void updates(QuickserverAddonsRowBuilder b)]) = _$QuickserverAddonsRow;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(QuickserverAddonsRowBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<QuickserverAddonsRow> get serializer => _$QuickserverAddonsRowSerializer();
}

class _$QuickserverAddonsRowSerializer implements PrimitiveSerializer<QuickserverAddonsRow> {
  @override
  final Iterable<Type> types = const [QuickserverAddonsRow, _$QuickserverAddonsRow];

  @override
  final String wireName = r'QuickserverAddonsRow';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    QuickserverAddonsRow object, {
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
    QuickserverAddonsRow object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required QuickserverAddonsRowBuilder result,
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
  QuickserverAddonsRow deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = QuickserverAddonsRowBuilder();
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

