//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/charge_invoice_rows_invoices_value_paid_invoices_value_refund_invoices_value.dart';
import 'package:built_collection/built_collection.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'charge_invoice_rows_invoices_value_paid_invoices_value.g.dart';

/// ChargeInvoiceRowsInvoicesValuePaidInvoicesValue
///
/// Properties:
/// * [invoicesId] 
/// * [invoicesDescription] 
/// * [invoicesAmount] 
/// * [invoicesDate] 
/// * [invoicesCurrency] 
/// * [currencySymbol] 
/// * [invoicesDateFormatted] 
/// * [paymentType] 
/// * [refundInvoices] - This is optional when refund is present this will show
@BuiltValue()
abstract class ChargeInvoiceRowsInvoicesValuePaidInvoicesValue implements Built<ChargeInvoiceRowsInvoicesValuePaidInvoicesValue, ChargeInvoiceRowsInvoicesValuePaidInvoicesValueBuilder> {
  @BuiltValueField(wireName: r'invoices_id')
  String? get invoicesId;

  @BuiltValueField(wireName: r'invoices_description')
  String? get invoicesDescription;

  @BuiltValueField(wireName: r'invoices_amount')
  num? get invoicesAmount;

  @BuiltValueField(wireName: r'invoices_date')
  String? get invoicesDate;

  @BuiltValueField(wireName: r'invoices_currency')
  String? get invoicesCurrency;

  @BuiltValueField(wireName: r'currency_symbol')
  String? get currencySymbol;

  @BuiltValueField(wireName: r'invoices_date_formatted')
  String? get invoicesDateFormatted;

  @BuiltValueField(wireName: r'payment_type')
  String? get paymentType;

  /// This is optional when refund is present this will show
  @BuiltValueField(wireName: r'refund_invoices')
  BuiltMap<String, ChargeInvoiceRowsInvoicesValuePaidInvoicesValueRefundInvoicesValue>? get refundInvoices;

  ChargeInvoiceRowsInvoicesValuePaidInvoicesValue._();

  factory ChargeInvoiceRowsInvoicesValuePaidInvoicesValue([void updates(ChargeInvoiceRowsInvoicesValuePaidInvoicesValueBuilder b)]) = _$ChargeInvoiceRowsInvoicesValuePaidInvoicesValue;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ChargeInvoiceRowsInvoicesValuePaidInvoicesValueBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ChargeInvoiceRowsInvoicesValuePaidInvoicesValue> get serializer => _$ChargeInvoiceRowsInvoicesValuePaidInvoicesValueSerializer();
}

class _$ChargeInvoiceRowsInvoicesValuePaidInvoicesValueSerializer implements PrimitiveSerializer<ChargeInvoiceRowsInvoicesValuePaidInvoicesValue> {
  @override
  final Iterable<Type> types = const [ChargeInvoiceRowsInvoicesValuePaidInvoicesValue, _$ChargeInvoiceRowsInvoicesValuePaidInvoicesValue];

  @override
  final String wireName = r'ChargeInvoiceRowsInvoicesValuePaidInvoicesValue';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ChargeInvoiceRowsInvoicesValuePaidInvoicesValue object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.invoicesId != null) {
      yield r'invoices_id';
      yield serializers.serialize(
        object.invoicesId,
        specifiedType: const FullType(String),
      );
    }
    if (object.invoicesDescription != null) {
      yield r'invoices_description';
      yield serializers.serialize(
        object.invoicesDescription,
        specifiedType: const FullType(String),
      );
    }
    if (object.invoicesAmount != null) {
      yield r'invoices_amount';
      yield serializers.serialize(
        object.invoicesAmount,
        specifiedType: const FullType(num),
      );
    }
    if (object.invoicesDate != null) {
      yield r'invoices_date';
      yield serializers.serialize(
        object.invoicesDate,
        specifiedType: const FullType(String),
      );
    }
    if (object.invoicesCurrency != null) {
      yield r'invoices_currency';
      yield serializers.serialize(
        object.invoicesCurrency,
        specifiedType: const FullType(String),
      );
    }
    if (object.currencySymbol != null) {
      yield r'currency_symbol';
      yield serializers.serialize(
        object.currencySymbol,
        specifiedType: const FullType(String),
      );
    }
    if (object.invoicesDateFormatted != null) {
      yield r'invoices_date_formatted';
      yield serializers.serialize(
        object.invoicesDateFormatted,
        specifiedType: const FullType(String),
      );
    }
    if (object.paymentType != null) {
      yield r'payment_type';
      yield serializers.serialize(
        object.paymentType,
        specifiedType: const FullType(String),
      );
    }
    if (object.refundInvoices != null) {
      yield r'refund_invoices';
      yield serializers.serialize(
        object.refundInvoices,
        specifiedType: const FullType(BuiltMap, [FullType(String), FullType(ChargeInvoiceRowsInvoicesValuePaidInvoicesValueRefundInvoicesValue)]),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    ChargeInvoiceRowsInvoicesValuePaidInvoicesValue object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ChargeInvoiceRowsInvoicesValuePaidInvoicesValueBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'invoices_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.invoicesId = valueDes;
          break;
        case r'invoices_description':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.invoicesDescription = valueDes;
          break;
        case r'invoices_amount':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.invoicesAmount = valueDes;
          break;
        case r'invoices_date':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.invoicesDate = valueDes;
          break;
        case r'invoices_currency':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.invoicesCurrency = valueDes;
          break;
        case r'currency_symbol':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.currencySymbol = valueDes;
          break;
        case r'invoices_date_formatted':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.invoicesDateFormatted = valueDes;
          break;
        case r'payment_type':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.paymentType = valueDes;
          break;
        case r'refund_invoices':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltMap, [FullType(String), FullType(ChargeInvoiceRowsInvoicesValuePaidInvoicesValueRefundInvoicesValue)]),
          ) as BuiltMap<String, ChargeInvoiceRowsInvoicesValuePaidInvoicesValueRefundInvoicesValue>;
          result.refundInvoices.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  ChargeInvoiceRowsInvoicesValuePaidInvoicesValue deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ChargeInvoiceRowsInvoicesValuePaidInvoicesValueBuilder();
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

