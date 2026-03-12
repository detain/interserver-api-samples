//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/vps_order_templates_hyperv.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'vps_order_templates.g.dart';

/// Templates
///
/// Properties:
/// * [hyperv] 
@BuiltValue()
abstract class VpsOrderTemplates implements Built<VpsOrderTemplates, VpsOrderTemplatesBuilder> {
  @BuiltValueField(wireName: r'hyperv')
  VpsOrderTemplatesHyperv? get hyperv;

  VpsOrderTemplates._();

  factory VpsOrderTemplates([void updates(VpsOrderTemplatesBuilder b)]) = _$VpsOrderTemplates;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(VpsOrderTemplatesBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<VpsOrderTemplates> get serializer => _$VpsOrderTemplatesSerializer();
}

class _$VpsOrderTemplatesSerializer implements PrimitiveSerializer<VpsOrderTemplates> {
  @override
  final Iterable<Type> types = const [VpsOrderTemplates, _$VpsOrderTemplates];

  @override
  final String wireName = r'VpsOrderTemplates';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    VpsOrderTemplates object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.hyperv != null) {
      yield r'hyperv';
      yield serializers.serialize(
        object.hyperv,
        specifiedType: const FullType(VpsOrderTemplatesHyperv),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    VpsOrderTemplates object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required VpsOrderTemplatesBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'hyperv':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(VpsOrderTemplatesHyperv),
          ) as VpsOrderTemplatesHyperv;
          result.hyperv.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  VpsOrderTemplates deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = VpsOrderTemplatesBuilder();
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

