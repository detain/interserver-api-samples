//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/quickserver_addons_row.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'quickserver_addons.g.dart';

/// QuickserverAddons
///
/// Properties:
/// * [title] - Table title
/// * [rows] 
@BuiltValue()
abstract class QuickserverAddons implements Built<QuickserverAddons, QuickserverAddonsBuilder> {
  /// Table title
  @BuiltValueField(wireName: r'title')
  String? get title;

  @BuiltValueField(wireName: r'rows')
  BuiltList<QuickserverAddonsRow>? get rows;

  QuickserverAddons._();

  factory QuickserverAddons([void updates(QuickserverAddonsBuilder b)]) = _$QuickserverAddons;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(QuickserverAddonsBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<QuickserverAddons> get serializer => _$QuickserverAddonsSerializer();
}

class _$QuickserverAddonsSerializer implements PrimitiveSerializer<QuickserverAddons> {
  @override
  final Iterable<Type> types = const [QuickserverAddons, _$QuickserverAddons];

  @override
  final String wireName = r'QuickserverAddons';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    QuickserverAddons object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.title != null) {
      yield r'title';
      yield serializers.serialize(
        object.title,
        specifiedType: const FullType(String),
      );
    }
    if (object.rows != null) {
      yield r'rows';
      yield serializers.serialize(
        object.rows,
        specifiedType: const FullType(BuiltList, [FullType(QuickserverAddonsRow)]),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    QuickserverAddons object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required QuickserverAddonsBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'title':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.title = valueDes;
          break;
        case r'rows':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(QuickserverAddonsRow)]),
          ) as BuiltList<QuickserverAddonsRow>;
          result.rows.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  QuickserverAddons deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = QuickserverAddonsBuilder();
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

