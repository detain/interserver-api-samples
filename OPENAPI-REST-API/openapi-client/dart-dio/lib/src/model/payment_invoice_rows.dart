//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/invoice_row.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'payment_invoice_rows.g.dart';

/// PaymentInvoiceRows
@BuiltValue()
abstract class PaymentInvoiceRows implements Built<PaymentInvoiceRows, PaymentInvoiceRowsBuilder> {
  PaymentInvoiceRows._();

  factory PaymentInvoiceRows([void updates(PaymentInvoiceRowsBuilder b)]) = _$PaymentInvoiceRows;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(PaymentInvoiceRowsBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<PaymentInvoiceRows> get serializer => _$PaymentInvoiceRowsSerializer();
}

class _$PaymentInvoiceRowsSerializer implements PrimitiveSerializer<PaymentInvoiceRows> {
  @override
  final Iterable<Type> types = const [PaymentInvoiceRows, _$PaymentInvoiceRows];

  @override
  final String wireName = r'PaymentInvoiceRows';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    PaymentInvoiceRows object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
  }

  @override
  Object serialize(
    Serializers serializers,
    PaymentInvoiceRows object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  @override
  PaymentInvoiceRows deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = PaymentInvoiceRowsBuilder();
    final serializedList = (serialized as Iterable<Object?>).toList();
    return result.build();
  }
}

