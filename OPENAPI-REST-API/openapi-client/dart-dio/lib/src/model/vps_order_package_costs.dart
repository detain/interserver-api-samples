//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'vps_order_package_costs.g.dart';

/// Package Costs
///
/// Properties:
/// * [n57] 
@BuiltValue()
abstract class VpsOrderPackageCosts implements Built<VpsOrderPackageCosts, VpsOrderPackageCostsBuilder> {
  @BuiltValueField(wireName: r'57')
  num? get n57;

  VpsOrderPackageCosts._();

  factory VpsOrderPackageCosts([void updates(VpsOrderPackageCostsBuilder b)]) = _$VpsOrderPackageCosts;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(VpsOrderPackageCostsBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<VpsOrderPackageCosts> get serializer => _$VpsOrderPackageCostsSerializer();
}

class _$VpsOrderPackageCostsSerializer implements PrimitiveSerializer<VpsOrderPackageCosts> {
  @override
  final Iterable<Type> types = const [VpsOrderPackageCosts, _$VpsOrderPackageCosts];

  @override
  final String wireName = r'VpsOrderPackageCosts';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    VpsOrderPackageCosts object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.n57 != null) {
      yield r'57';
      yield serializers.serialize(
        object.n57,
        specifiedType: const FullType(num),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    VpsOrderPackageCosts object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required VpsOrderPackageCostsBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'57':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.n57 = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  VpsOrderPackageCosts deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = VpsOrderPackageCostsBuilder();
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

