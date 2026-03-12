//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'vps_order_platform_packages.g.dart';

/// Platform Packages
///
/// Properties:
/// * [kvm] 
/// * [kvmstorage] 
/// * [hyperv] 
@BuiltValue()
abstract class VpsOrderPlatformPackages implements Built<VpsOrderPlatformPackages, VpsOrderPlatformPackagesBuilder> {
  @BuiltValueField(wireName: r'kvm')
  num? get kvm;

  @BuiltValueField(wireName: r'kvmstorage')
  num? get kvmstorage;

  @BuiltValueField(wireName: r'hyperv')
  num? get hyperv;

  VpsOrderPlatformPackages._();

  factory VpsOrderPlatformPackages([void updates(VpsOrderPlatformPackagesBuilder b)]) = _$VpsOrderPlatformPackages;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(VpsOrderPlatformPackagesBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<VpsOrderPlatformPackages> get serializer => _$VpsOrderPlatformPackagesSerializer();
}

class _$VpsOrderPlatformPackagesSerializer implements PrimitiveSerializer<VpsOrderPlatformPackages> {
  @override
  final Iterable<Type> types = const [VpsOrderPlatformPackages, _$VpsOrderPlatformPackages];

  @override
  final String wireName = r'VpsOrderPlatformPackages';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    VpsOrderPlatformPackages object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.kvm != null) {
      yield r'kvm';
      yield serializers.serialize(
        object.kvm,
        specifiedType: const FullType(num),
      );
    }
    if (object.kvmstorage != null) {
      yield r'kvmstorage';
      yield serializers.serialize(
        object.kvmstorage,
        specifiedType: const FullType(num),
      );
    }
    if (object.hyperv != null) {
      yield r'hyperv';
      yield serializers.serialize(
        object.hyperv,
        specifiedType: const FullType(num),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    VpsOrderPlatformPackages object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required VpsOrderPlatformPackagesBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'kvm':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.kvm = valueDes;
          break;
        case r'kvmstorage':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.kvmstorage = valueDes;
          break;
        case r'hyperv':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.hyperv = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  VpsOrderPlatformPackages deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = VpsOrderPlatformPackagesBuilder();
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

