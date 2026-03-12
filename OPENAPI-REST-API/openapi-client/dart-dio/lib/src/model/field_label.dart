//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'field_label.g.dart';

/// A display label for a server order form field.
///
/// Properties:
/// * [name] 
/// * [active] 
@BuiltValue()
abstract class FieldLabel implements Built<FieldLabel, FieldLabelBuilder> {
  @BuiltValueField(wireName: r'name')
  String? get name;

  @BuiltValueField(wireName: r'active')
  int? get active;

  FieldLabel._();

  factory FieldLabel([void updates(FieldLabelBuilder b)]) = _$FieldLabel;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(FieldLabelBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<FieldLabel> get serializer => _$FieldLabelSerializer();
}

class _$FieldLabelSerializer implements PrimitiveSerializer<FieldLabel> {
  @override
  final Iterable<Type> types = const [FieldLabel, _$FieldLabel];

  @override
  final String wireName = r'FieldLabel';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    FieldLabel object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.name != null) {
      yield r'name';
      yield serializers.serialize(
        object.name,
        specifiedType: const FullType(String),
      );
    }
    if (object.active != null) {
      yield r'active';
      yield serializers.serialize(
        object.active,
        specifiedType: const FullType(int),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    FieldLabel object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required FieldLabelBuilder result,
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
        case r'active':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.active = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  FieldLabel deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = FieldLabelBuilder();
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

