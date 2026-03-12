//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'get_scrub_ip_details200_response_billing_details.g.dart';

/// GetScrubIpDetails200ResponseBillingDetails
///
/// Properties:
/// * [serviceLastInvoiceDate] 
/// * [servicePaymentStatus] 
/// * [serviceFrequency] 
/// * [nextDate] 
/// * [serviceNextInvoiceDate] 
/// * [serviceCurrency] 
/// * [serviceCurrencySymbol] 
/// * [serviceCostInfo] 
@BuiltValue()
abstract class GetScrubIpDetails200ResponseBillingDetails implements Built<GetScrubIpDetails200ResponseBillingDetails, GetScrubIpDetails200ResponseBillingDetailsBuilder> {
  @BuiltValueField(wireName: r'service_last_invoice_date')
  String? get serviceLastInvoiceDate;

  @BuiltValueField(wireName: r'service_payment_status')
  String? get servicePaymentStatus;

  @BuiltValueField(wireName: r'service_frequency')
  String? get serviceFrequency;

  @BuiltValueField(wireName: r'next_date')
  String? get nextDate;

  @BuiltValueField(wireName: r'service_next_invoice_date')
  String? get serviceNextInvoiceDate;

  @BuiltValueField(wireName: r'service_currency')
  String? get serviceCurrency;

  @BuiltValueField(wireName: r'service_currency_symbol')
  String? get serviceCurrencySymbol;

  @BuiltValueField(wireName: r'service_cost_info')
  String? get serviceCostInfo;

  GetScrubIpDetails200ResponseBillingDetails._();

  factory GetScrubIpDetails200ResponseBillingDetails([void updates(GetScrubIpDetails200ResponseBillingDetailsBuilder b)]) = _$GetScrubIpDetails200ResponseBillingDetails;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(GetScrubIpDetails200ResponseBillingDetailsBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<GetScrubIpDetails200ResponseBillingDetails> get serializer => _$GetScrubIpDetails200ResponseBillingDetailsSerializer();
}

class _$GetScrubIpDetails200ResponseBillingDetailsSerializer implements PrimitiveSerializer<GetScrubIpDetails200ResponseBillingDetails> {
  @override
  final Iterable<Type> types = const [GetScrubIpDetails200ResponseBillingDetails, _$GetScrubIpDetails200ResponseBillingDetails];

  @override
  final String wireName = r'GetScrubIpDetails200ResponseBillingDetails';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    GetScrubIpDetails200ResponseBillingDetails object, {
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
  }

  @override
  Object serialize(
    Serializers serializers,
    GetScrubIpDetails200ResponseBillingDetails object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required GetScrubIpDetails200ResponseBillingDetailsBuilder result,
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
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  GetScrubIpDetails200ResponseBillingDetails deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = GetScrubIpDetails200ResponseBillingDetailsBuilder();
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

