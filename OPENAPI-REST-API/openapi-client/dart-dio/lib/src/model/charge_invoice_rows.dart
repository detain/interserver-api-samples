//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/charge_invoice_rows_invoices_value.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'charge_invoice_rows.g.dart';

/// Billing invoices associated with a service, including invoice IDs, descriptions, amounts, and payment status.
///
/// Properties:
/// * [success] - Whether the invoice retrieval was successful.
/// * [invoices] - List of invoices for the service.
@BuiltValue()
abstract class ChargeInvoiceRows implements Built<ChargeInvoiceRows, ChargeInvoiceRowsBuilder> {
  /// Whether the invoice retrieval was successful.
  @BuiltValueField(wireName: r'success')
  bool? get success;

  /// List of invoices for the service.
  @BuiltValueField(wireName: r'invoices')
  BuiltMap<String, ChargeInvoiceRowsInvoicesValue>? get invoices;

  ChargeInvoiceRows._();

  factory ChargeInvoiceRows([void updates(ChargeInvoiceRowsBuilder b)]) = _$ChargeInvoiceRows;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ChargeInvoiceRowsBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ChargeInvoiceRows> get serializer => _$ChargeInvoiceRowsSerializer();
}

class _$ChargeInvoiceRowsSerializer implements PrimitiveSerializer<ChargeInvoiceRows> {
  @override
  final Iterable<Type> types = const [ChargeInvoiceRows, _$ChargeInvoiceRows];

  @override
  final String wireName = r'ChargeInvoiceRows';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ChargeInvoiceRows object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.success != null) {
      yield r'success';
      yield serializers.serialize(
        object.success,
        specifiedType: const FullType(bool),
      );
    }
    if (object.invoices != null) {
      yield r'invoices';
      yield serializers.serialize(
        object.invoices,
        specifiedType: const FullType(BuiltMap, [FullType(String), FullType(ChargeInvoiceRowsInvoicesValue)]),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    ChargeInvoiceRows object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ChargeInvoiceRowsBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'success':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
          result.success = valueDes;
          break;
        case r'invoices':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltMap, [FullType(String), FullType(ChargeInvoiceRowsInvoicesValue)]),
          ) as BuiltMap<String, ChargeInvoiceRowsInvoicesValue>;
          result.invoices.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  ChargeInvoiceRows deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ChargeInvoiceRowsBuilder();
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

