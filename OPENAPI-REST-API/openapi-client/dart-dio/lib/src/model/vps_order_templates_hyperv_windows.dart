//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'vps_order_templates_hyperv_windows.g.dart';

/// VpsOrderTemplatesHypervWindows
///
/// Properties:
/// * [windows2019Standard] 
/// * [windows2022] 
@BuiltValue()
abstract class VpsOrderTemplatesHypervWindows implements Built<VpsOrderTemplatesHypervWindows, VpsOrderTemplatesHypervWindowsBuilder> {
  @BuiltValueField(wireName: r'Windows2019Standard')
  String? get windows2019Standard;

  @BuiltValueField(wireName: r'Windows2022')
  String? get windows2022;

  VpsOrderTemplatesHypervWindows._();

  factory VpsOrderTemplatesHypervWindows([void updates(VpsOrderTemplatesHypervWindowsBuilder b)]) = _$VpsOrderTemplatesHypervWindows;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(VpsOrderTemplatesHypervWindowsBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<VpsOrderTemplatesHypervWindows> get serializer => _$VpsOrderTemplatesHypervWindowsSerializer();
}

class _$VpsOrderTemplatesHypervWindowsSerializer implements PrimitiveSerializer<VpsOrderTemplatesHypervWindows> {
  @override
  final Iterable<Type> types = const [VpsOrderTemplatesHypervWindows, _$VpsOrderTemplatesHypervWindows];

  @override
  final String wireName = r'VpsOrderTemplatesHypervWindows';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    VpsOrderTemplatesHypervWindows object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.windows2019Standard != null) {
      yield r'Windows2019Standard';
      yield serializers.serialize(
        object.windows2019Standard,
        specifiedType: const FullType(String),
      );
    }
    if (object.windows2022 != null) {
      yield r'Windows2022';
      yield serializers.serialize(
        object.windows2022,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    VpsOrderTemplatesHypervWindows object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required VpsOrderTemplatesHypervWindowsBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'Windows2019Standard':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.windows2019Standard = valueDes;
          break;
        case r'Windows2022':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.windows2022 = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  VpsOrderTemplatesHypervWindows deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = VpsOrderTemplatesHypervWindowsBuilder();
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

