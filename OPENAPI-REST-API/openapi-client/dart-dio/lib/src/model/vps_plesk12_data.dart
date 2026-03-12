//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/vps_plesk_license.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'vps_plesk12_data.g.dart';

/// VpsPlesk12Data
///
/// Properties:
/// * [admin] 
/// * [pro] 
/// * [host] 
@BuiltValue()
abstract class VpsPlesk12Data implements Built<VpsPlesk12Data, VpsPlesk12DataBuilder> {
  @BuiltValueField(wireName: r'admin')
  VpsPleskLicense? get admin;

  @BuiltValueField(wireName: r'pro')
  VpsPleskLicense? get pro;

  @BuiltValueField(wireName: r'host')
  VpsPleskLicense? get host;

  VpsPlesk12Data._();

  factory VpsPlesk12Data([void updates(VpsPlesk12DataBuilder b)]) = _$VpsPlesk12Data;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(VpsPlesk12DataBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<VpsPlesk12Data> get serializer => _$VpsPlesk12DataSerializer();
}

class _$VpsPlesk12DataSerializer implements PrimitiveSerializer<VpsPlesk12Data> {
  @override
  final Iterable<Type> types = const [VpsPlesk12Data, _$VpsPlesk12Data];

  @override
  final String wireName = r'VpsPlesk12Data';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    VpsPlesk12Data object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.admin != null) {
      yield r'admin';
      yield serializers.serialize(
        object.admin,
        specifiedType: const FullType(VpsPleskLicense),
      );
    }
    if (object.pro != null) {
      yield r'pro';
      yield serializers.serialize(
        object.pro,
        specifiedType: const FullType(VpsPleskLicense),
      );
    }
    if (object.host != null) {
      yield r'host';
      yield serializers.serialize(
        object.host,
        specifiedType: const FullType(VpsPleskLicense),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    VpsPlesk12Data object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required VpsPlesk12DataBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'admin':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(VpsPleskLicense),
          ) as VpsPleskLicense;
          result.admin.replace(valueDes);
          break;
        case r'pro':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(VpsPleskLicense),
          ) as VpsPleskLicense;
          result.pro.replace(valueDes);
          break;
        case r'host':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(VpsPleskLicense),
          ) as VpsPleskLicense;
          result.host.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  VpsPlesk12Data deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = VpsPlesk12DataBuilder();
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

