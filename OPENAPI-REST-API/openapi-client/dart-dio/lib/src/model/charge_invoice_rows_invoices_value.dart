//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/charge_invoice_rows_invoices_value_paid_invoices_value.dart';
import 'package:built_collection/built_collection.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'charge_invoice_rows_invoices_value.g.dart';

/// ChargeInvoiceRowsInvoicesValue
///
/// Properties:
/// * [invoicesId] - Unique invoice ID.
/// * [invoicesDescription] - Description of the invoice charge.
/// * [invoicesAmount] - Invoice amount.
/// * [invoicesDate] - Invoice date.
/// * [invoicesPaid] 
/// * [invoicesDueDate] 
/// * [invoicesCurrency] 
/// * [currencySymbol] 
/// * [invoicesDateFormatted] 
/// * [paidInvoices] - This is optional when invoices_paid = 1 this array will show
@BuiltValue()
abstract class ChargeInvoiceRowsInvoicesValue implements Built<ChargeInvoiceRowsInvoicesValue, ChargeInvoiceRowsInvoicesValueBuilder> {
  /// Unique invoice ID.
  @BuiltValueField(wireName: r'invoices_id')
  num? get invoicesId;

  /// Description of the invoice charge.
  @BuiltValueField(wireName: r'invoices_description')
  String? get invoicesDescription;

  /// Invoice amount.
  @BuiltValueField(wireName: r'invoices_amount')
  num? get invoicesAmount;

  /// Invoice date.
  @BuiltValueField(wireName: r'invoices_date')
  String? get invoicesDate;

  @BuiltValueField(wireName: r'invoices_paid')
  ChargeInvoiceRowsInvoicesValueInvoicesPaidEnum? get invoicesPaid;
  // enum invoicesPaidEnum {  0,  1,  };

  @BuiltValueField(wireName: r'invoices_due_date')
  String? get invoicesDueDate;

  @BuiltValueField(wireName: r'invoices_currency')
  String? get invoicesCurrency;

  @BuiltValueField(wireName: r'currency_symbol')
  String? get currencySymbol;

  @BuiltValueField(wireName: r'invoices_date_formatted')
  String? get invoicesDateFormatted;

  /// This is optional when invoices_paid = 1 this array will show
  @BuiltValueField(wireName: r'paid_invoices')
  BuiltMap<String, ChargeInvoiceRowsInvoicesValuePaidInvoicesValue>? get paidInvoices;

  ChargeInvoiceRowsInvoicesValue._();

  factory ChargeInvoiceRowsInvoicesValue([void updates(ChargeInvoiceRowsInvoicesValueBuilder b)]) = _$ChargeInvoiceRowsInvoicesValue;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ChargeInvoiceRowsInvoicesValueBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ChargeInvoiceRowsInvoicesValue> get serializer => _$ChargeInvoiceRowsInvoicesValueSerializer();
}

class _$ChargeInvoiceRowsInvoicesValueSerializer implements PrimitiveSerializer<ChargeInvoiceRowsInvoicesValue> {
  @override
  final Iterable<Type> types = const [ChargeInvoiceRowsInvoicesValue, _$ChargeInvoiceRowsInvoicesValue];

  @override
  final String wireName = r'ChargeInvoiceRowsInvoicesValue';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ChargeInvoiceRowsInvoicesValue object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.invoicesId != null) {
      yield r'invoices_id';
      yield serializers.serialize(
        object.invoicesId,
        specifiedType: const FullType(num),
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
    if (object.invoicesPaid != null) {
      yield r'invoices_paid';
      yield serializers.serialize(
        object.invoicesPaid,
        specifiedType: const FullType(ChargeInvoiceRowsInvoicesValueInvoicesPaidEnum),
      );
    }
    if (object.invoicesDueDate != null) {
      yield r'invoices_due_date';
      yield serializers.serialize(
        object.invoicesDueDate,
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
    if (object.paidInvoices != null) {
      yield r'paid_invoices';
      yield serializers.serialize(
        object.paidInvoices,
        specifiedType: const FullType(BuiltMap, [FullType(String), FullType(ChargeInvoiceRowsInvoicesValuePaidInvoicesValue)]),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    ChargeInvoiceRowsInvoicesValue object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ChargeInvoiceRowsInvoicesValueBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'invoices_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
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
        case r'invoices_paid':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(ChargeInvoiceRowsInvoicesValueInvoicesPaidEnum),
          ) as ChargeInvoiceRowsInvoicesValueInvoicesPaidEnum;
          result.invoicesPaid = valueDes;
          break;
        case r'invoices_due_date':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.invoicesDueDate = valueDes;
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
        case r'paid_invoices':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltMap, [FullType(String), FullType(ChargeInvoiceRowsInvoicesValuePaidInvoicesValue)]),
          ) as BuiltMap<String, ChargeInvoiceRowsInvoicesValuePaidInvoicesValue>;
          result.paidInvoices.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  ChargeInvoiceRowsInvoicesValue deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ChargeInvoiceRowsInvoicesValueBuilder();
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

class ChargeInvoiceRowsInvoicesValueInvoicesPaidEnum extends EnumClass {

  @BuiltValueEnumConst(wireName: r'0')
  static const ChargeInvoiceRowsInvoicesValueInvoicesPaidEnum n0 = _$chargeInvoiceRowsInvoicesValueInvoicesPaidEnum_n0;
  @BuiltValueEnumConst(wireName: r'1')
  static const ChargeInvoiceRowsInvoicesValueInvoicesPaidEnum n1 = _$chargeInvoiceRowsInvoicesValueInvoicesPaidEnum_n1;

  static Serializer<ChargeInvoiceRowsInvoicesValueInvoicesPaidEnum> get serializer => _$chargeInvoiceRowsInvoicesValueInvoicesPaidEnumSerializer;

  const ChargeInvoiceRowsInvoicesValueInvoicesPaidEnum._(String name): super(name);

  static BuiltSet<ChargeInvoiceRowsInvoicesValueInvoicesPaidEnum> get values => _$chargeInvoiceRowsInvoicesValueInvoicesPaidEnumValues;
  static ChargeInvoiceRowsInvoicesValueInvoicesPaidEnum valueOf(String name) => _$chargeInvoiceRowsInvoicesValueInvoicesPaidEnumValueOf(name);
}

