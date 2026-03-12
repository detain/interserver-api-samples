//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/vps_service_extra.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'vps_billing_details.g.dart';

/// Billing information for a VPS service including payment status, billing cycle, and cost.
///
/// Properties:
/// * [serviceLastInvoiceDate] - Last invoice date
/// * [servicePaymentStatus] - Payment status
/// * [serviceFrequency] - Billing frequency
/// * [nextDate] - Next billing date
/// * [serviceNextInvoiceDate] - Next invoice date
/// * [serviceCurrency] - Currency used for billing
/// * [serviceCurrencySymbol] - Currency symbol
/// * [serviceCoupon] - Billing coupon code
/// * [serviceCostInfo] - Cost information
/// * [serviceExtra] 
/// * [serviceExtraJson] - Additional information in JSON format
@BuiltValue()
abstract class VpsBillingDetails implements Built<VpsBillingDetails, VpsBillingDetailsBuilder> {
  /// Last invoice date
  @BuiltValueField(wireName: r'service_last_invoice_date')
  String? get serviceLastInvoiceDate;

  /// Payment status
  @BuiltValueField(wireName: r'service_payment_status')
  String? get servicePaymentStatus;

  /// Billing frequency
  @BuiltValueField(wireName: r'service_frequency')
  String? get serviceFrequency;

  /// Next billing date
  @BuiltValueField(wireName: r'next_date')
  String? get nextDate;

  /// Next invoice date
  @BuiltValueField(wireName: r'service_next_invoice_date')
  String? get serviceNextInvoiceDate;

  /// Currency used for billing
  @BuiltValueField(wireName: r'service_currency')
  String? get serviceCurrency;

  /// Currency symbol
  @BuiltValueField(wireName: r'service_currency_symbol')
  String? get serviceCurrencySymbol;

  /// Billing coupon code
  @BuiltValueField(wireName: r'service_coupon')
  String? get serviceCoupon;

  /// Cost information
  @BuiltValueField(wireName: r'service_cost_info')
  String? get serviceCostInfo;

  @BuiltValueField(wireName: r'service_extra')
  VpsServiceExtra? get serviceExtra;

  /// Additional information in JSON format
  @BuiltValueField(wireName: r'service_extra_json')
  String? get serviceExtraJson;

  VpsBillingDetails._();

  factory VpsBillingDetails([void updates(VpsBillingDetailsBuilder b)]) = _$VpsBillingDetails;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(VpsBillingDetailsBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<VpsBillingDetails> get serializer => _$VpsBillingDetailsSerializer();
}

class _$VpsBillingDetailsSerializer implements PrimitiveSerializer<VpsBillingDetails> {
  @override
  final Iterable<Type> types = const [VpsBillingDetails, _$VpsBillingDetails];

  @override
  final String wireName = r'VpsBillingDetails';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    VpsBillingDetails object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.serviceLastInvoiceDate != null) {
      yield r'service_last_invoice_date';
      yield serializers.serialize(
        object.serviceLastInvoiceDate,
        specifiedType: const FullType(String),
      );
    }
    if (object.servicePaymentStatus != null) {
      yield r'service_payment_status';
      yield serializers.serialize(
        object.servicePaymentStatus,
        specifiedType: const FullType(String),
      );
    }
    if (object.serviceFrequency != null) {
      yield r'service_frequency';
      yield serializers.serialize(
        object.serviceFrequency,
        specifiedType: const FullType(String),
      );
    }
    if (object.nextDate != null) {
      yield r'next_date';
      yield serializers.serialize(
        object.nextDate,
        specifiedType: const FullType(String),
      );
    }
    if (object.serviceNextInvoiceDate != null) {
      yield r'service_next_invoice_date';
      yield serializers.serialize(
        object.serviceNextInvoiceDate,
        specifiedType: const FullType(String),
      );
    }
    if (object.serviceCurrency != null) {
      yield r'service_currency';
      yield serializers.serialize(
        object.serviceCurrency,
        specifiedType: const FullType(String),
      );
    }
    if (object.serviceCurrencySymbol != null) {
      yield r'service_currency_symbol';
      yield serializers.serialize(
        object.serviceCurrencySymbol,
        specifiedType: const FullType(String),
      );
    }
    if (object.serviceCoupon != null) {
      yield r'service_coupon';
      yield serializers.serialize(
        object.serviceCoupon,
        specifiedType: const FullType(String),
      );
    }
    if (object.serviceCostInfo != null) {
      yield r'service_cost_info';
      yield serializers.serialize(
        object.serviceCostInfo,
        specifiedType: const FullType(String),
      );
    }
    if (object.serviceExtra != null) {
      yield r'service_extra';
      yield serializers.serialize(
        object.serviceExtra,
        specifiedType: const FullType(VpsServiceExtra),
      );
    }
    if (object.serviceExtraJson != null) {
      yield r'service_extra_json';
      yield serializers.serialize(
        object.serviceExtraJson,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    VpsBillingDetails object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required VpsBillingDetailsBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'service_last_invoice_date':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serviceLastInvoiceDate = valueDes;
          break;
        case r'service_payment_status':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.servicePaymentStatus = valueDes;
          break;
        case r'service_frequency':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serviceFrequency = valueDes;
          break;
        case r'next_date':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.nextDate = valueDes;
          break;
        case r'service_next_invoice_date':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serviceNextInvoiceDate = valueDes;
          break;
        case r'service_currency':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serviceCurrency = valueDes;
          break;
        case r'service_currency_symbol':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serviceCurrencySymbol = valueDes;
          break;
        case r'service_coupon':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serviceCoupon = valueDes;
          break;
        case r'service_cost_info':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serviceCostInfo = valueDes;
          break;
        case r'service_extra':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(VpsServiceExtra),
          ) as VpsServiceExtra;
          result.serviceExtra.replace(valueDes);
          break;
        case r'service_extra_json':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serviceExtraJson = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  VpsBillingDetails deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = VpsBillingDetailsBuilder();
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

