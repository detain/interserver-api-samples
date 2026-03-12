//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/vps_order_location_stock1.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'vps_order_location_stock.g.dart';

/// Location Stock
///
/// Properties:
/// * [n1] 
@BuiltValue()
abstract class VpsOrderLocationStock implements Built<VpsOrderLocationStock, VpsOrderLocationStockBuilder> {
  @BuiltValueField(wireName: r'1')
  VpsOrderLocationStock1? get n1;

  VpsOrderLocationStock._();

  factory VpsOrderLocationStock([void updates(VpsOrderLocationStockBuilder b)]) = _$VpsOrderLocationStock;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(VpsOrderLocationStockBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<VpsOrderLocationStock> get serializer => _$VpsOrderLocationStockSerializer();
}

class _$VpsOrderLocationStockSerializer implements PrimitiveSerializer<VpsOrderLocationStock> {
  @override
  final Iterable<Type> types = const [VpsOrderLocationStock, _$VpsOrderLocationStock];

  @override
  final String wireName = r'VpsOrderLocationStock';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    VpsOrderLocationStock object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.n1 != null) {
      yield r'1';
      yield serializers.serialize(
        object.n1,
        specifiedType: const FullType(VpsOrderLocationStock1),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    VpsOrderLocationStock object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required VpsOrderLocationStockBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'1':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(VpsOrderLocationStock1),
          ) as VpsOrderLocationStock1;
          result.n1.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  VpsOrderLocationStock deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = VpsOrderLocationStockBuilder();
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

