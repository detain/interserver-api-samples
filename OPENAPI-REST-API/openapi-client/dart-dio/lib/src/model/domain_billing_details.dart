//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/domain_billing_extra.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'domain_billing_details.g.dart';

/// Billing information for a domain service including payment status, dates, and cost.
///
/// Properties:
/// * [serviceLastInvoiceDate] - Date of the last invoice for the domain.
/// * [servicePaymentStatus] - Current payment status (e.g., Paid, Unpaid).
/// * [serviceFrequency] - Billing frequency (e.g., Yearly, Monthly).
/// * [nextDate] - Next billing date (ISO 8601).
/// * [serviceNextInvoiceDate] - Human-readable next invoice date.
/// * [serviceCurrency] - Billing currency code.
/// * [serviceCurrencySymbol] - Billing currency symbol.
/// * [serviceCostInfo] - Cost breakdown information.
/// * [serviceExtra] 
/// * [serviceExtraJson] - Raw JSON string of extra billing data.
@BuiltValue()
abstract class DomainBillingDetails implements Built<DomainBillingDetails, DomainBillingDetailsBuilder> {
  /// Date of the last invoice for the domain.
  @BuiltValueField(wireName: r'service_last_invoice_date')
  String? get serviceLastInvoiceDate;

  /// Current payment status (e.g., Paid, Unpaid).
  @BuiltValueField(wireName: r'service_payment_status')
  String? get servicePaymentStatus;

  /// Billing frequency (e.g., Yearly, Monthly).
  @BuiltValueField(wireName: r'service_frequency')
  String? get serviceFrequency;

  /// Next billing date (ISO 8601).
  @BuiltValueField(wireName: r'next_date')
  String? get nextDate;

  /// Human-readable next invoice date.
  @BuiltValueField(wireName: r'service_next_invoice_date')
  String? get serviceNextInvoiceDate;

  /// Billing currency code.
  @BuiltValueField(wireName: r'service_currency')
  String? get serviceCurrency;

  /// Billing currency symbol.
  @BuiltValueField(wireName: r'service_currency_symbol')
  String? get serviceCurrencySymbol;

  /// Cost breakdown information.
  @BuiltValueField(wireName: r'service_cost_info')
  String? get serviceCostInfo;

  @BuiltValueField(wireName: r'service_extra')
  DomainBillingExtra? get serviceExtra;

  /// Raw JSON string of extra billing data.
  @BuiltValueField(wireName: r'service_extra_json')
  String? get serviceExtraJson;

  DomainBillingDetails._();

  factory DomainBillingDetails([void updates(DomainBillingDetailsBuilder b)]) = _$DomainBillingDetails;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(DomainBillingDetailsBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<DomainBillingDetails> get serializer => _$DomainBillingDetailsSerializer();
}

class _$DomainBillingDetailsSerializer implements PrimitiveSerializer<DomainBillingDetails> {
  @override
  final Iterable<Type> types = const [DomainBillingDetails, _$DomainBillingDetails];

  @override
  final String wireName = r'DomainBillingDetails';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    DomainBillingDetails object, {
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
        specifiedType: const FullType(DomainBillingExtra),
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
    DomainBillingDetails object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required DomainBillingDetailsBuilder result,
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
            specifiedType: const FullType(DomainBillingExtra),
          ) as DomainBillingExtra;
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
  DomainBillingDetails deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = DomainBillingDetailsBuilder();
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

