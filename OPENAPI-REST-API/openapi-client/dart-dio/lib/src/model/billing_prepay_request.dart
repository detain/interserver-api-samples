//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'billing_prepay_request.g.dart';

/// Request payload for creating a new prepay balance.
///
/// Properties:
/// * [module] - Module the prepay should be applied to (for example `default`).
/// * [amount] - Amount to add to prepay balance. Minimum is $10.
/// * [automaticUse] - Whether the prepay balance should be used automatically.
@BuiltValue()
abstract class BillingPrepayRequest implements Built<BillingPrepayRequest, BillingPrepayRequestBuilder> {
  /// Module the prepay should be applied to (for example `default`).
  @BuiltValueField(wireName: r'module')
  String? get module;

  /// Amount to add to prepay balance. Minimum is $10.
  @BuiltValueField(wireName: r'amount')
  num? get amount;

  /// Whether the prepay balance should be used automatically.
  @BuiltValueField(wireName: r'automatic_use')
  String? get automaticUse;

  BillingPrepayRequest._();

  factory BillingPrepayRequest([void updates(BillingPrepayRequestBuilder b)]) = _$BillingPrepayRequest;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(BillingPrepayRequestBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<BillingPrepayRequest> get serializer => _$BillingPrepayRequestSerializer();
}

class _$BillingPrepayRequestSerializer implements PrimitiveSerializer<BillingPrepayRequest> {
  @override
  final Iterable<Type> types = const [BillingPrepayRequest, _$BillingPrepayRequest];

  @override
  final String wireName = r'BillingPrepayRequest';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    BillingPrepayRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.module != null) {
      yield r'module';
      yield serializers.serialize(
        object.module,
        specifiedType: const FullType(String),
      );
    }
    if (object.amount != null) {
      yield r'amount';
      yield serializers.serialize(
        object.amount,
        specifiedType: const FullType(num),
      );
    }
    if (object.automaticUse != null) {
      yield r'automatic_use';
      yield serializers.serialize(
        object.automaticUse,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    BillingPrepayRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required BillingPrepayRequestBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'module':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.module = valueDes;
          break;
        case r'amount':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.amount = valueDes;
          break;
        case r'automatic_use':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.automaticUse = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  BillingPrepayRequest deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = BillingPrepayRequestBuilder();
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

