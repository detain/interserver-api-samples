//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'scrub_ip_place_order.g.dart';

/// Place ScrubIP Order
///
/// Properties:
/// * [serviceType] 
/// * [ip] 
@BuiltValue()
abstract class ScrubIpPlaceOrder implements Built<ScrubIpPlaceOrder, ScrubIpPlaceOrderBuilder> {
  @BuiltValueField(wireName: r'service_type')
  int get serviceType;

  @BuiltValueField(wireName: r'ip')
  String get ip;

  ScrubIpPlaceOrder._();

  factory ScrubIpPlaceOrder([void updates(ScrubIpPlaceOrderBuilder b)]) = _$ScrubIpPlaceOrder;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ScrubIpPlaceOrderBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ScrubIpPlaceOrder> get serializer => _$ScrubIpPlaceOrderSerializer();
}

class _$ScrubIpPlaceOrderSerializer implements PrimitiveSerializer<ScrubIpPlaceOrder> {
  @override
  final Iterable<Type> types = const [ScrubIpPlaceOrder, _$ScrubIpPlaceOrder];

  @override
  final String wireName = r'ScrubIpPlaceOrder';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ScrubIpPlaceOrder object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'service_type';
    yield serializers.serialize(
      object.serviceType,
      specifiedType: const FullType(int),
    );
    yield r'ip';
    yield serializers.serialize(
      object.ip,
      specifiedType: const FullType(String),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    ScrubIpPlaceOrder object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ScrubIpPlaceOrderBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'service_type':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.serviceType = valueDes;
          break;
        case r'ip':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ip = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  ScrubIpPlaceOrder deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ScrubIpPlaceOrderBuilder();
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

