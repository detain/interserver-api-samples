//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'mail_billing_details.g.dart';

/// Billing information for a mail service including payment status, billing cycle, and cost.
///
/// Properties:
/// * [serviceLastInvoiceDate] - The last invoice date of the service.
/// * [servicePaymentStatus] - The payment status of the service.
/// * [serviceFrequency] - The frequency of the service payment.
/// * [nextDate] - The next payment date of the service.
/// * [serviceNextInvoiceDate] - The next invoice date of the service.
/// * [serviceCurrency] - The currency of the service.
/// * [serviceCurrencySymbol] - The currency symbol of the service.
/// * [serviceCostInfo] - The cost information of the service.
/// * [serviceExtra] - Extra information for the service.
/// * [serviceExtraJson] - Extra JSON information for the service.
@BuiltValue()
abstract class MailBillingDetails implements Built<MailBillingDetails, MailBillingDetailsBuilder> {
  /// The last invoice date of the service.
  @BuiltValueField(wireName: r'service_last_invoice_date')
  String? get serviceLastInvoiceDate;

  /// The payment status of the service.
  @BuiltValueField(wireName: r'service_payment_status')
  String? get servicePaymentStatus;

  /// The frequency of the service payment.
  @BuiltValueField(wireName: r'service_frequency')
  String? get serviceFrequency;

  /// The next payment date of the service.
  @BuiltValueField(wireName: r'next_date')
  String? get nextDate;

  /// The next invoice date of the service.
  @BuiltValueField(wireName: r'service_next_invoice_date')
  String? get serviceNextInvoiceDate;

  /// The currency of the service.
  @BuiltValueField(wireName: r'service_currency')
  String? get serviceCurrency;

  /// The currency symbol of the service.
  @BuiltValueField(wireName: r'service_currency_symbol')
  String? get serviceCurrencySymbol;

  /// The cost information of the service.
  @BuiltValueField(wireName: r'service_cost_info')
  String? get serviceCostInfo;

  /// Extra information for the service.
  @BuiltValueField(wireName: r'service_extra')
  BuiltList<String>? get serviceExtra;

  /// Extra JSON information for the service.
  @BuiltValueField(wireName: r'service_extra_json')
  String? get serviceExtraJson;

  MailBillingDetails._();

  factory MailBillingDetails([void updates(MailBillingDetailsBuilder b)]) = _$MailBillingDetails;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(MailBillingDetailsBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<MailBillingDetails> get serializer => _$MailBillingDetailsSerializer();
}

class _$MailBillingDetailsSerializer implements PrimitiveSerializer<MailBillingDetails> {
  @override
  final Iterable<Type> types = const [MailBillingDetails, _$MailBillingDetails];

  @override
  final String wireName = r'MailBillingDetails';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    MailBillingDetails object, {
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
        specifiedType: const FullType(BuiltList, [FullType(String)]),
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
    MailBillingDetails object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required MailBillingDetailsBuilder result,
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
            specifiedType: const FullType(BuiltList, [FullType(String)]),
          ) as BuiltList<String>;
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
  MailBillingDetails deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = MailBillingDetailsBuilder();
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

