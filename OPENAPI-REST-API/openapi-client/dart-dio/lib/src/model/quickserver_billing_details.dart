//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/quickserver_service_extra.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'quickserver_billing_details.g.dart';

/// Billing information for a QuickServer service including payment status, billing cycle, and cost.
///
/// Properties:
/// * [serviceLastInvoiceDate] - Last invoice date
/// * [servicePaymentStatus] - Payment status
/// * [serviceFrequency] - Service frequency
/// * [nextDate] - Next date
/// * [serviceNextInvoiceDate] - Next invoice date
/// * [serviceCurrency] - Currency
/// * [serviceCurrencySymbol] - Currency symbol
/// * [serviceCostInfo] - Cost information
/// * [serviceExtra] 
/// * [serviceExtraJson] - Extra information (JSON format)
@BuiltValue()
abstract class QuickserverBillingDetails implements Built<QuickserverBillingDetails, QuickserverBillingDetailsBuilder> {
  /// Last invoice date
  @BuiltValueField(wireName: r'service_last_invoice_date')
  String? get serviceLastInvoiceDate;

  /// Payment status
  @BuiltValueField(wireName: r'service_payment_status')
  String? get servicePaymentStatus;

  /// Service frequency
  @BuiltValueField(wireName: r'service_frequency')
  String? get serviceFrequency;

  /// Next date
  @BuiltValueField(wireName: r'next_date')
  String? get nextDate;

  /// Next invoice date
  @BuiltValueField(wireName: r'service_next_invoice_date')
  String? get serviceNextInvoiceDate;

  /// Currency
  @BuiltValueField(wireName: r'service_currency')
  String? get serviceCurrency;

  /// Currency symbol
  @BuiltValueField(wireName: r'service_currency_symbol')
  String? get serviceCurrencySymbol;

  /// Cost information
  @BuiltValueField(wireName: r'service_cost_info')
  String? get serviceCostInfo;

  @BuiltValueField(wireName: r'service_extra')
  QuickserverServiceExtra? get serviceExtra;

  /// Extra information (JSON format)
  @BuiltValueField(wireName: r'service_extra_json')
  String? get serviceExtraJson;

  QuickserverBillingDetails._();

  factory QuickserverBillingDetails([void updates(QuickserverBillingDetailsBuilder b)]) = _$QuickserverBillingDetails;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(QuickserverBillingDetailsBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<QuickserverBillingDetails> get serializer => _$QuickserverBillingDetailsSerializer();
}

class _$QuickserverBillingDetailsSerializer implements PrimitiveSerializer<QuickserverBillingDetails> {
  @override
  final Iterable<Type> types = const [QuickserverBillingDetails, _$QuickserverBillingDetails];

  @override
  final String wireName = r'QuickserverBillingDetails';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    QuickserverBillingDetails object, {
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
        specifiedType: const FullType(QuickserverServiceExtra),
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
    QuickserverBillingDetails object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required QuickserverBillingDetailsBuilder result,
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
            specifiedType: const FullType(QuickserverServiceExtra),
          ) as QuickserverServiceExtra;
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
  QuickserverBillingDetails deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = QuickserverBillingDetailsBuilder();
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

