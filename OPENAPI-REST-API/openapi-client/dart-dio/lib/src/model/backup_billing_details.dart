//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'backup_billing_details.g.dart';

/// BackupBillingDetails
///
/// Properties:
/// * [serviceLastInvoiceDate] - Last invoice date of the service.
/// * [servicePaymentStatus] - Payment status of the service.
/// * [serviceFrequency] - Billing frequency of the service.
/// * [nextDate] - Next billing date of the service.
/// * [serviceNextInvoiceDate] - Next invoice date of the service.
/// * [serviceCurrency] - Currency of the service.
/// * [serviceCurrencySymbol] - Currency symbol of the service.
/// * [serviceCostInfo] - Cost information of the service.
/// * [serviceExtra] - Service Extra Info
/// * [serviceExtraJson] - JSON representation of extra service information.
@BuiltValue()
abstract class BackupBillingDetails implements Built<BackupBillingDetails, BackupBillingDetailsBuilder> {
  /// Last invoice date of the service.
  @BuiltValueField(wireName: r'service_last_invoice_date')
  String? get serviceLastInvoiceDate;

  /// Payment status of the service.
  @BuiltValueField(wireName: r'service_payment_status')
  String? get servicePaymentStatus;

  /// Billing frequency of the service.
  @BuiltValueField(wireName: r'service_frequency')
  String? get serviceFrequency;

  /// Next billing date of the service.
  @BuiltValueField(wireName: r'next_date')
  String? get nextDate;

  /// Next invoice date of the service.
  @BuiltValueField(wireName: r'service_next_invoice_date')
  String? get serviceNextInvoiceDate;

  /// Currency of the service.
  @BuiltValueField(wireName: r'service_currency')
  String? get serviceCurrency;

  /// Currency symbol of the service.
  @BuiltValueField(wireName: r'service_currency_symbol')
  String? get serviceCurrencySymbol;

  /// Cost information of the service.
  @BuiltValueField(wireName: r'service_cost_info')
  String? get serviceCostInfo;

  /// Service Extra Info
  @BuiltValueField(wireName: r'service_extra')
  String? get serviceExtra;

  /// JSON representation of extra service information.
  @BuiltValueField(wireName: r'service_extra_json')
  String? get serviceExtraJson;

  BackupBillingDetails._();

  factory BackupBillingDetails([void updates(BackupBillingDetailsBuilder b)]) = _$BackupBillingDetails;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(BackupBillingDetailsBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<BackupBillingDetails> get serializer => _$BackupBillingDetailsSerializer();
}

class _$BackupBillingDetailsSerializer implements PrimitiveSerializer<BackupBillingDetails> {
  @override
  final Iterable<Type> types = const [BackupBillingDetails, _$BackupBillingDetails];

  @override
  final String wireName = r'BackupBillingDetails';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    BackupBillingDetails object, {
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
        specifiedType: const FullType(String),
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
    BackupBillingDetails object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required BackupBillingDetailsBuilder result,
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
            specifiedType: const FullType(String),
          ) as String;
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
  BackupBillingDetails deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = BackupBillingDetailsBuilder();
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

