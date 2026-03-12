//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/servers_buy_now_response_order_details.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'servers_buy_now_response.g.dart';

/// Success response after placing a buy-it-now dedicated server order.
///
/// Properties:
/// * [success] - Whether the order was placed successfully.
/// * [text] - Human-readable status message.
/// * [orderDetails] 
@BuiltValue()
abstract class ServersBuyNowResponse implements Built<ServersBuyNowResponse, ServersBuyNowResponseBuilder> {
  /// Whether the order was placed successfully.
  @BuiltValueField(wireName: r'success')
  bool? get success;

  /// Human-readable status message.
  @BuiltValueField(wireName: r'text')
  String? get text;

  @BuiltValueField(wireName: r'order_details')
  ServersBuyNowResponseOrderDetails? get orderDetails;

  ServersBuyNowResponse._();

  factory ServersBuyNowResponse([void updates(ServersBuyNowResponseBuilder b)]) = _$ServersBuyNowResponse;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ServersBuyNowResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ServersBuyNowResponse> get serializer => _$ServersBuyNowResponseSerializer();
}

class _$ServersBuyNowResponseSerializer implements PrimitiveSerializer<ServersBuyNowResponse> {
  @override
  final Iterable<Type> types = const [ServersBuyNowResponse, _$ServersBuyNowResponse];

  @override
  final String wireName = r'ServersBuyNowResponse';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ServersBuyNowResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.success != null) {
      yield r'success';
      yield serializers.serialize(
        object.success,
        specifiedType: const FullType(bool),
      );
    }
    if (object.text != null) {
      yield r'text';
      yield serializers.serialize(
        object.text,
        specifiedType: const FullType(String),
      );
    }
    if (object.orderDetails != null) {
      yield r'order_details';
      yield serializers.serialize(
        object.orderDetails,
        specifiedType: const FullType(ServersBuyNowResponseOrderDetails),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    ServersBuyNowResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ServersBuyNowResponseBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'success':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
          result.success = valueDes;
          break;
        case r'text':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.text = valueDes;
          break;
        case r'order_details':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(ServersBuyNowResponseOrderDetails),
          ) as ServersBuyNowResponseOrderDetails;
          result.orderDetails.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  ServersBuyNowResponse deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ServersBuyNowResponseBuilder();
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

