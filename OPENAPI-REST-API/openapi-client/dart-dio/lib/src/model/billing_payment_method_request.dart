//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'billing_payment_method_request.g.dart';

/// Payload for updating the default account payment method.
///
/// Properties:
/// * [paymentMethod] - Payment method identifier (cc, paypal, or cc{index}).
/// * [ccAuto] - Whether automatic credit card payments are enabled.
@BuiltValue()
abstract class BillingPaymentMethodRequest implements Built<BillingPaymentMethodRequest, BillingPaymentMethodRequestBuilder> {
  /// Payment method identifier (cc, paypal, or cc{index}).
  @BuiltValueField(wireName: r'payment_method')
  String? get paymentMethod;

  /// Whether automatic credit card payments are enabled.
  @BuiltValueField(wireName: r'cc_auto')
  String? get ccAuto;

  BillingPaymentMethodRequest._();

  factory BillingPaymentMethodRequest([void updates(BillingPaymentMethodRequestBuilder b)]) = _$BillingPaymentMethodRequest;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(BillingPaymentMethodRequestBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<BillingPaymentMethodRequest> get serializer => _$BillingPaymentMethodRequestSerializer();
}

class _$BillingPaymentMethodRequestSerializer implements PrimitiveSerializer<BillingPaymentMethodRequest> {
  @override
  final Iterable<Type> types = const [BillingPaymentMethodRequest, _$BillingPaymentMethodRequest];

  @override
  final String wireName = r'BillingPaymentMethodRequest';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    BillingPaymentMethodRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.paymentMethod != null) {
      yield r'payment_method';
      yield serializers.serialize(
        object.paymentMethod,
        specifiedType: const FullType(String),
      );
    }
    if (object.ccAuto != null) {
      yield r'cc_auto';
      yield serializers.serialize(
        object.ccAuto,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    BillingPaymentMethodRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required BillingPaymentMethodRequestBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'payment_method':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.paymentMethod = valueDes;
          break;
        case r'cc_auto':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ccAuto = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  BillingPaymentMethodRequest deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = BillingPaymentMethodRequestBuilder();
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

