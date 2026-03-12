//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/vps_template_row.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'vps_templates_list.g.dart';

/// A listing of the OS Templates available for use.
///
/// Properties:
/// * [templates] - A listing of the templates.
@BuiltValue()
abstract class VpsTemplatesList implements Built<VpsTemplatesList, VpsTemplatesListBuilder> {
  /// A listing of the templates.
  @BuiltValueField(wireName: r'templates')
  BuiltList<VpsTemplateRow> get templates;

  VpsTemplatesList._();

  factory VpsTemplatesList([void updates(VpsTemplatesListBuilder b)]) = _$VpsTemplatesList;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(VpsTemplatesListBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<VpsTemplatesList> get serializer => _$VpsTemplatesListSerializer();
}

class _$VpsTemplatesListSerializer implements PrimitiveSerializer<VpsTemplatesList> {
  @override
  final Iterable<Type> types = const [VpsTemplatesList, _$VpsTemplatesList];

  @override
  final String wireName = r'VpsTemplatesList';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    VpsTemplatesList object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'templates';
    yield serializers.serialize(
      object.templates,
      specifiedType: const FullType(BuiltList, [FullType(VpsTemplateRow)]),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    VpsTemplatesList object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required VpsTemplatesListBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'templates':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(VpsTemplateRow)]),
          ) as BuiltList<VpsTemplateRow>;
          result.templates.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  VpsTemplatesList deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = VpsTemplatesListBuilder();
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

