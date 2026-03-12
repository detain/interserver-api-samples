//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'servers_buy_now_response_order_details.g.dart';

/// Details of the placed order.
///
/// Properties:
/// * [serviceId] - The newly created service ID for the ordered server.
/// * [invoiceId] - The invoice ID generated for the order.
@BuiltValue()
abstract class ServersBuyNowResponseOrderDetails implements Built<ServersBuyNowResponseOrderDetails, ServersBuyNowResponseOrderDetailsBuilder> {
  /// The newly created service ID for the ordered server.
  @BuiltValueField(wireName: r'service_id')
  num? get serviceId;

  /// The invoice ID generated for the order.
  @BuiltValueField(wireName: r'invoice_id')
  num? get invoiceId;

  ServersBuyNowResponseOrderDetails._();

  factory ServersBuyNowResponseOrderDetails([void updates(ServersBuyNowResponseOrderDetailsBuilder b)]) = _$ServersBuyNowResponseOrderDetails;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ServersBuyNowResponseOrderDetailsBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ServersBuyNowResponseOrderDetails> get serializer => _$ServersBuyNowResponseOrderDetailsSerializer();
}

class _$ServersBuyNowResponseOrderDetailsSerializer implements PrimitiveSerializer<ServersBuyNowResponseOrderDetails> {
  @override
  final Iterable<Type> types = const [ServersBuyNowResponseOrderDetails, _$ServersBuyNowResponseOrderDetails];

  @override
  final String wireName = r'ServersBuyNowResponseOrderDetails';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ServersBuyNowResponseOrderDetails object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.serviceId != null) {
      yield r'service_id';
      yield serializers.serialize(
        object.serviceId,
        specifiedType: const FullType(num),
      );
    }
    if (object.invoiceId != null) {
      yield r'invoice_id';
      yield serializers.serialize(
        object.invoiceId,
        specifiedType: const FullType(num),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    ServersBuyNowResponseOrderDetails object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ServersBuyNowResponseOrderDetailsBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'service_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.serviceId = valueDes;
          break;
        case r'invoice_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.invoiceId = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  ServersBuyNowResponseOrderDetails deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ServersBuyNowResponseOrderDetailsBuilder();
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

