//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'affiliate_payment_setup.g.dart';

/// Affiliate Payment Setup.  Here you can set if you want the payments to go to `prepay` or `paypal` and the PayPal email address.
///
/// Properties:
/// * [affiliatePaypal] 
/// * [affiliatePaymentMethod] 
@BuiltValue()
abstract class AffiliatePaymentSetup implements Built<AffiliatePaymentSetup, AffiliatePaymentSetupBuilder> {
  @BuiltValueField(wireName: r'affiliate_paypal')
  String? get affiliatePaypal;

  @BuiltValueField(wireName: r'affiliate_payment_method')
  String? get affiliatePaymentMethod;

  AffiliatePaymentSetup._();

  factory AffiliatePaymentSetup([void updates(AffiliatePaymentSetupBuilder b)]) = _$AffiliatePaymentSetup;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(AffiliatePaymentSetupBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<AffiliatePaymentSetup> get serializer => _$AffiliatePaymentSetupSerializer();
}

class _$AffiliatePaymentSetupSerializer implements PrimitiveSerializer<AffiliatePaymentSetup> {
  @override
  final Iterable<Type> types = const [AffiliatePaymentSetup, _$AffiliatePaymentSetup];

  @override
  final String wireName = r'AffiliatePaymentSetup';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    AffiliatePaymentSetup object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.affiliatePaypal != null) {
      yield r'affiliate_paypal';
      yield serializers.serialize(
        object.affiliatePaypal,
        specifiedType: const FullType(String),
      );
    }
    if (object.affiliatePaymentMethod != null) {
      yield r'affiliate_payment_method';
      yield serializers.serialize(
        object.affiliatePaymentMethod,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    AffiliatePaymentSetup object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required AffiliatePaymentSetupBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'affiliate_paypal':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.affiliatePaypal = valueDes;
          break;
        case r'affiliate_payment_method':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.affiliatePaymentMethod = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  AffiliatePaymentSetup deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = AffiliatePaymentSetupBuilder();
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

