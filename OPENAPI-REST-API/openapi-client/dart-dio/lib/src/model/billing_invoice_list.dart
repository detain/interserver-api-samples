//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:built_value/json_object.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'billing_invoice_list.g.dart';

/// Summary list of invoices for the account.
///
/// Properties:
/// * [rows] - Invoice rows returned for the account.
/// * [summary] - Totals and summary data for the invoices list.
@BuiltValue()
abstract class BillingInvoiceList implements Built<BillingInvoiceList, BillingInvoiceListBuilder> {
  /// Invoice rows returned for the account.
  @BuiltValueField(wireName: r'rows')
  BuiltList<JsonObject>? get rows;

  /// Totals and summary data for the invoices list.
  @BuiltValueField(wireName: r'summary')
  JsonObject? get summary;

  BillingInvoiceList._();

  factory BillingInvoiceList([void updates(BillingInvoiceListBuilder b)]) = _$BillingInvoiceList;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(BillingInvoiceListBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<BillingInvoiceList> get serializer => _$BillingInvoiceListSerializer();
}

class _$BillingInvoiceListSerializer implements PrimitiveSerializer<BillingInvoiceList> {
  @override
  final Iterable<Type> types = const [BillingInvoiceList, _$BillingInvoiceList];

  @override
  final String wireName = r'BillingInvoiceList';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    BillingInvoiceList object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.rows != null) {
      yield r'rows';
      yield serializers.serialize(
        object.rows,
        specifiedType: const FullType(BuiltList, [FullType(JsonObject)]),
      );
    }
    if (object.summary != null) {
      yield r'summary';
      yield serializers.serialize(
        object.summary,
        specifiedType: const FullType(JsonObject),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    BillingInvoiceList object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required BillingInvoiceListBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'rows':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(JsonObject)]),
          ) as BuiltList<JsonObject>;
          result.rows.replace(valueDes);
          break;
        case r'summary':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(JsonObject),
          ) as JsonObject;
          result.summary = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  BillingInvoiceList deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = BillingInvoiceListBuilder();
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

