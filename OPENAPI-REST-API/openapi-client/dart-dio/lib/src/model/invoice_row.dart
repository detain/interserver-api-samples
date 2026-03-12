//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'invoice_row.g.dart';

/// InvoiceRow
@BuiltValue()
abstract class InvoiceRow implements Built<InvoiceRow, InvoiceRowBuilder> {
  InvoiceRow._();

  factory InvoiceRow([void updates(InvoiceRowBuilder b)]) = _$InvoiceRow;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(InvoiceRowBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<InvoiceRow> get serializer => _$InvoiceRowSerializer();
}

class _$InvoiceRowSerializer implements PrimitiveSerializer<InvoiceRow> {
  @override
  final Iterable<Type> types = const [InvoiceRow, _$InvoiceRow];

  @override
  final String wireName = r'InvoiceRow';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    InvoiceRow object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
  }

  @override
  Object serialize(
    Serializers serializers,
    InvoiceRow object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  @override
  InvoiceRow deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = InvoiceRowBuilder();
    final serializedList = (serialized as Iterable<Object?>).toList();
    return result.build();
  }
}

