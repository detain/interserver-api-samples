//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'billing_invoice_detail.g.dart';

/// Detailed invoice data payload returned for a single invoice.
@BuiltValue()
abstract class BillingInvoiceDetail implements Built<BillingInvoiceDetail, BillingInvoiceDetailBuilder> {
  BillingInvoiceDetail._();

  factory BillingInvoiceDetail([void updates(BillingInvoiceDetailBuilder b)]) = _$BillingInvoiceDetail;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(BillingInvoiceDetailBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<BillingInvoiceDetail> get serializer => _$BillingInvoiceDetailSerializer();
}

class _$BillingInvoiceDetailSerializer implements PrimitiveSerializer<BillingInvoiceDetail> {
  @override
  final Iterable<Type> types = const [BillingInvoiceDetail, _$BillingInvoiceDetail];

  @override
  final String wireName = r'BillingInvoiceDetail';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    BillingInvoiceDetail object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
  }

  @override
  Object serialize(
    Serializers serializers,
    BillingInvoiceDetail object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  @override
  BillingInvoiceDetail deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = BillingInvoiceDetailBuilder();
    final serializedList = (serialized as Iterable<Object?>).toList();
    return result.build();
  }
}

