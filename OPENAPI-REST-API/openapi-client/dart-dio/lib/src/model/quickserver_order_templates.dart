//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/quickserver_order_templates_ubuntu64.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'quickserver_order_templates.g.dart';

/// Templates details.
///
/// Properties:
/// * [ubuntu] 
@BuiltValue()
abstract class QuickserverOrderTemplates implements Built<QuickserverOrderTemplates, QuickserverOrderTemplatesBuilder> {
  @BuiltValueField(wireName: r'Ubuntu')
  QuickserverOrderTemplatesUbuntu64? get ubuntu;

  QuickserverOrderTemplates._();

  factory QuickserverOrderTemplates([void updates(QuickserverOrderTemplatesBuilder b)]) = _$QuickserverOrderTemplates;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(QuickserverOrderTemplatesBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<QuickserverOrderTemplates> get serializer => _$QuickserverOrderTemplatesSerializer();
}

class _$QuickserverOrderTemplatesSerializer implements PrimitiveSerializer<QuickserverOrderTemplates> {
  @override
  final Iterable<Type> types = const [QuickserverOrderTemplates, _$QuickserverOrderTemplates];

  @override
  final String wireName = r'QuickserverOrderTemplates';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    QuickserverOrderTemplates object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.ubuntu != null) {
      yield r'Ubuntu';
      yield serializers.serialize(
        object.ubuntu,
        specifiedType: const FullType(QuickserverOrderTemplatesUbuntu64),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    QuickserverOrderTemplates object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required QuickserverOrderTemplatesBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'Ubuntu':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(QuickserverOrderTemplatesUbuntu64),
          ) as QuickserverOrderTemplatesUbuntu64;
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
  QuickserverOrderTemplates deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = QuickserverOrderTemplatesBuilder();
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

