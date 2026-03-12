//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'billing_verify_cc_request.g.dart';

/// Payload for verifying a credit card through the verification flow.
///
/// Properties:
/// * [idx] - Card index to verify.
/// * [ccCcv2] - CVV code for verification.
/// * [ccAmount1] - First micro-charge amount for verification.
/// * [ccAmount2] - Second micro-charge amount for verification.
/// * [terms] - Whether terms were accepted for verification.
@BuiltValue()
abstract class BillingVerifyCcRequest implements Built<BillingVerifyCcRequest, BillingVerifyCcRequestBuilder> {
  /// Card index to verify.
  @BuiltValueField(wireName: r'idx')
  int? get idx;

  /// CVV code for verification.
  @BuiltValueField(wireName: r'cc_ccv2')
  String? get ccCcv2;

  /// First micro-charge amount for verification.
  @BuiltValueField(wireName: r'cc_amount1')
  String? get ccAmount1;

  /// Second micro-charge amount for verification.
  @BuiltValueField(wireName: r'cc_amount2')
  String? get ccAmount2;

  /// Whether terms were accepted for verification.
  @BuiltValueField(wireName: r'terms')
  bool? get terms;

  BillingVerifyCcRequest._();

  factory BillingVerifyCcRequest([void updates(BillingVerifyCcRequestBuilder b)]) = _$BillingVerifyCcRequest;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(BillingVerifyCcRequestBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<BillingVerifyCcRequest> get serializer => _$BillingVerifyCcRequestSerializer();
}

class _$BillingVerifyCcRequestSerializer implements PrimitiveSerializer<BillingVerifyCcRequest> {
  @override
  final Iterable<Type> types = const [BillingVerifyCcRequest, _$BillingVerifyCcRequest];

  @override
  final String wireName = r'BillingVerifyCcRequest';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    BillingVerifyCcRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.idx != null) {
      yield r'idx';
      yield serializers.serialize(
        object.idx,
        specifiedType: const FullType(int),
      );
    }
    if (object.ccCcv2 != null) {
      yield r'cc_ccv2';
      yield serializers.serialize(
        object.ccCcv2,
        specifiedType: const FullType(String),
      );
    }
    if (object.ccAmount1 != null) {
      yield r'cc_amount1';
      yield serializers.serialize(
        object.ccAmount1,
        specifiedType: const FullType(String),
      );
    }
    if (object.ccAmount2 != null) {
      yield r'cc_amount2';
      yield serializers.serialize(
        object.ccAmount2,
        specifiedType: const FullType(String),
      );
    }
    if (object.terms != null) {
      yield r'terms';
      yield serializers.serialize(
        object.terms,
        specifiedType: const FullType(bool),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    BillingVerifyCcRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required BillingVerifyCcRequestBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'idx':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.idx = valueDes;
          break;
        case r'cc_ccv2':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ccCcv2 = valueDes;
          break;
        case r'cc_amount1':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ccAmount1 = valueDes;
          break;
        case r'cc_amount2':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ccAmount2 = valueDes;
          break;
        case r'terms':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
          result.terms = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  BillingVerifyCcRequest deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = BillingVerifyCcRequestBuilder();
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

