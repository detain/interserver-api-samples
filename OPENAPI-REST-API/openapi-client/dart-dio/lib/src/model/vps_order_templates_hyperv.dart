//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/vps_order_templates_hyperv_windows.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'vps_order_templates_hyperv.g.dart';

/// VpsOrderTemplatesHyperv
///
/// Properties:
/// * [windows] 
@BuiltValue()
abstract class VpsOrderTemplatesHyperv implements Built<VpsOrderTemplatesHyperv, VpsOrderTemplatesHypervBuilder> {
  @BuiltValueField(wireName: r'windows')
  VpsOrderTemplatesHypervWindows? get windows;

  VpsOrderTemplatesHyperv._();

  factory VpsOrderTemplatesHyperv([void updates(VpsOrderTemplatesHypervBuilder b)]) = _$VpsOrderTemplatesHyperv;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(VpsOrderTemplatesHypervBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<VpsOrderTemplatesHyperv> get serializer => _$VpsOrderTemplatesHypervSerializer();
}

class _$VpsOrderTemplatesHypervSerializer implements PrimitiveSerializer<VpsOrderTemplatesHyperv> {
  @override
  final Iterable<Type> types = const [VpsOrderTemplatesHyperv, _$VpsOrderTemplatesHyperv];

  @override
  final String wireName = r'VpsOrderTemplatesHyperv';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    VpsOrderTemplatesHyperv object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.windows != null) {
      yield r'windows';
      yield serializers.serialize(
        object.windows,
        specifiedType: const FullType(VpsOrderTemplatesHypervWindows),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    VpsOrderTemplatesHyperv object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required VpsOrderTemplatesHypervBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'windows':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(VpsOrderTemplatesHypervWindows),
          ) as VpsOrderTemplatesHypervWindows;
          result.windows.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  VpsOrderTemplatesHyperv deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = VpsOrderTemplatesHypervBuilder();
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

