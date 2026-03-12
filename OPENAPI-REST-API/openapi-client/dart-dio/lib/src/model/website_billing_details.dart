//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/json_object.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'website_billing_details.g.dart';

/// Billing information for a webhosting service including payment status, billing cycle, and cost.
///
/// Properties:
/// * [serviceLastInvoiceDate] - Last invoice date for the service
/// * [servicePaymentStatus] - Payment status for the service
/// * [serviceFrequency] - Frequency of the service
/// * [nextDate] - Next date for the service
/// * [serviceNextInvoiceDate] - Next invoice date for the service
/// * [serviceCurrency] - Currency for the service
/// * [serviceCurrencySymbol] - Currency symbol for the service
/// * [serviceCoupon] - Coupon for the service
/// * [serviceCostInfo] - Cost information for the service
/// * [serviceExtra] - Extra information for the service
/// * [serviceExtraJson] - Extra information in JSON format for the service
@BuiltValue()
abstract class WebsiteBillingDetails implements Built<WebsiteBillingDetails, WebsiteBillingDetailsBuilder> {
  /// Last invoice date for the service
  @BuiltValueField(wireName: r'service_last_invoice_date')
  String? get serviceLastInvoiceDate;

  /// Payment status for the service
  @BuiltValueField(wireName: r'service_payment_status')
  String? get servicePaymentStatus;

  /// Frequency of the service
  @BuiltValueField(wireName: r'service_frequency')
  String? get serviceFrequency;

  /// Next date for the service
  @BuiltValueField(wireName: r'next_date')
  String? get nextDate;

  /// Next invoice date for the service
  @BuiltValueField(wireName: r'service_next_invoice_date')
  String? get serviceNextInvoiceDate;

  /// Currency for the service
  @BuiltValueField(wireName: r'service_currency')
  String? get serviceCurrency;

  /// Currency symbol for the service
  @BuiltValueField(wireName: r'service_currency_symbol')
  String? get serviceCurrencySymbol;

  /// Coupon for the service
  @BuiltValueField(wireName: r'service_coupon')
  String? get serviceCoupon;

  /// Cost information for the service
  @BuiltValueField(wireName: r'service_cost_info')
  String? get serviceCostInfo;

  /// Extra information for the service
  @BuiltValueField(wireName: r'service_extra')
  JsonObject? get serviceExtra;

  /// Extra information in JSON format for the service
  @BuiltValueField(wireName: r'service_extra_json')
  String? get serviceExtraJson;

  WebsiteBillingDetails._();

  factory WebsiteBillingDetails([void updates(WebsiteBillingDetailsBuilder b)]) = _$WebsiteBillingDetails;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(WebsiteBillingDetailsBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<WebsiteBillingDetails> get serializer => _$WebsiteBillingDetailsSerializer();
}

class _$WebsiteBillingDetailsSerializer implements PrimitiveSerializer<WebsiteBillingDetails> {
  @override
  final Iterable<Type> types = const [WebsiteBillingDetails, _$WebsiteBillingDetails];

  @override
  final String wireName = r'WebsiteBillingDetails';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    WebsiteBillingDetails object, {
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
        specifiedType: const FullType(JsonObject),
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
    WebsiteBillingDetails object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required WebsiteBillingDetailsBuilder result,
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
            specifiedType: const FullType(JsonObject),
          ) as JsonObject;
          result.serviceExtra = valueDes;
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
  WebsiteBillingDetails deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = WebsiteBillingDetailsBuilder();
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

