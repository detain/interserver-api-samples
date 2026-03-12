//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'vps_order_platform_names.g.dart';

/// Platform Names
///
/// Properties:
/// * [kvm] 
/// * [kvmstorage] 
/// * [hyperv] 
@BuiltValue()
abstract class VpsOrderPlatformNames implements Built<VpsOrderPlatformNames, VpsOrderPlatformNamesBuilder> {
  @BuiltValueField(wireName: r'kvm')
  String? get kvm;

  @BuiltValueField(wireName: r'kvmstorage')
  String? get kvmstorage;

  @BuiltValueField(wireName: r'hyperv')
  String? get hyperv;

  VpsOrderPlatformNames._();

  factory VpsOrderPlatformNames([void updates(VpsOrderPlatformNamesBuilder b)]) = _$VpsOrderPlatformNames;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(VpsOrderPlatformNamesBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<VpsOrderPlatformNames> get serializer => _$VpsOrderPlatformNamesSerializer();
}

class _$VpsOrderPlatformNamesSerializer implements PrimitiveSerializer<VpsOrderPlatformNames> {
  @override
  final Iterable<Type> types = const [VpsOrderPlatformNames, _$VpsOrderPlatformNames];

  @override
  final String wireName = r'VpsOrderPlatformNames';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    VpsOrderPlatformNames object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.kvm != null) {
      yield r'kvm';
      yield serializers.serialize(
        object.kvm,
        specifiedType: const FullType(String),
      );
    }
    if (object.kvmstorage != null) {
      yield r'kvmstorage';
      yield serializers.serialize(
        object.kvmstorage,
        specifiedType: const FullType(String),
      );
    }
    if (object.hyperv != null) {
      yield r'hyperv';
      yield serializers.serialize(
        object.hyperv,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    VpsOrderPlatformNames object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required VpsOrderPlatformNamesBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'kvm':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.kvm = valueDes;
          break;
        case r'kvmstorage':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.kvmstorage = valueDes;
          break;
        case r'hyperv':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
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
  VpsOrderPlatformNames deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = VpsOrderPlatformNamesBuilder();
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

