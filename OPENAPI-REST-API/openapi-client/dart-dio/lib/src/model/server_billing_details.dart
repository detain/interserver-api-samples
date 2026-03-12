//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'server_billing_details.g.dart';

/// Billing information for a dedicated server service including payment status, billing cycle, and cost.
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
/// * [serviceExtra] 
/// * [serviceExtraJson] 
@BuiltValue()
abstract class ServerBillingDetails implements Built<ServerBillingDetails, ServerBillingDetailsBuilder> {
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

  @BuiltValueField(wireName: r'service_extra')
  BuiltList<String>? get serviceExtra;

  @BuiltValueField(wireName: r'service_extra_json')
  String? get serviceExtraJson;

  ServerBillingDetails._();

  factory ServerBillingDetails([void updates(ServerBillingDetailsBuilder b)]) = _$ServerBillingDetails;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ServerBillingDetailsBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ServerBillingDetails> get serializer => _$ServerBillingDetailsSerializer();
}

class _$ServerBillingDetailsSerializer implements PrimitiveSerializer<ServerBillingDetails> {
  @override
  final Iterable<Type> types = const [ServerBillingDetails, _$ServerBillingDetails];

  @override
  final String wireName = r'ServerBillingDetails';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ServerBillingDetails object, {
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
    ServerBillingDetails object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ServerBillingDetailsBuilder result,
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
  ServerBillingDetails deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ServerBillingDetailsBuilder();
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

