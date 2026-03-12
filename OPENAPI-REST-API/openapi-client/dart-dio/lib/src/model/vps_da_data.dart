//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/vps_da_license.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'vps_da_data.g.dart';

/// DirectAdmin license options available for a VPS.
///
/// Properties:
/// * [free] 
@BuiltValue()
abstract class VpsDAData implements Built<VpsDAData, VpsDADataBuilder> {
  @BuiltValueField(wireName: r'free')
  VpsDALicense? get free;

  VpsDAData._();

  factory VpsDAData([void updates(VpsDADataBuilder b)]) = _$VpsDAData;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(VpsDADataBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<VpsDAData> get serializer => _$VpsDADataSerializer();
}

class _$VpsDADataSerializer implements PrimitiveSerializer<VpsDAData> {
  @override
  final Iterable<Type> types = const [VpsDAData, _$VpsDAData];

  @override
  final String wireName = r'VpsDAData';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    VpsDAData object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.free != null) {
      yield r'free';
      yield serializers.serialize(
        object.free,
        specifiedType: const FullType(VpsDALicense),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    VpsDAData object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required VpsDADataBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'free':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(VpsDALicense),
          ) as VpsDALicense;
          result.free.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  VpsDAData deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = VpsDADataBuilder();
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

