//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'vps_order_location_stock1.g.dart';

/// VpsOrderLocationStock1
///
/// Properties:
/// * [kvm] 
/// * [kvmstorage] 
/// * [hyperv] 
@BuiltValue()
abstract class VpsOrderLocationStock1 implements Built<VpsOrderLocationStock1, VpsOrderLocationStock1Builder> {
  @BuiltValueField(wireName: r'kvm')
  bool? get kvm;

  @BuiltValueField(wireName: r'kvmstorage')
  bool? get kvmstorage;

  @BuiltValueField(wireName: r'hyperv')
  bool? get hyperv;

  VpsOrderLocationStock1._();

  factory VpsOrderLocationStock1([void updates(VpsOrderLocationStock1Builder b)]) = _$VpsOrderLocationStock1;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(VpsOrderLocationStock1Builder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<VpsOrderLocationStock1> get serializer => _$VpsOrderLocationStock1Serializer();
}

class _$VpsOrderLocationStock1Serializer implements PrimitiveSerializer<VpsOrderLocationStock1> {
  @override
  final Iterable<Type> types = const [VpsOrderLocationStock1, _$VpsOrderLocationStock1];

  @override
  final String wireName = r'VpsOrderLocationStock1';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    VpsOrderLocationStock1 object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.kvm != null) {
      yield r'kvm';
      yield serializers.serialize(
        object.kvm,
        specifiedType: const FullType(bool),
      );
    }
    if (object.kvmstorage != null) {
      yield r'kvmstorage';
      yield serializers.serialize(
        object.kvmstorage,
        specifiedType: const FullType(bool),
      );
    }
    if (object.hyperv != null) {
      yield r'hyperv';
      yield serializers.serialize(
        object.hyperv,
        specifiedType: const FullType(bool),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    VpsOrderLocationStock1 object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required VpsOrderLocationStock1Builder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'kvm':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
          result.kvm = valueDes;
          break;
        case r'kvmstorage':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
          result.kvmstorage = valueDes;
          break;
        case r'hyperv':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
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
  VpsOrderLocationStock1 deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = VpsOrderLocationStock1Builder();
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

