//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'invoice.g.dart';

/// An invoice record
///
/// Properties:
/// * [id] 
@BuiltValue()
abstract class Invoice implements Built<Invoice, InvoiceBuilder> {
  @BuiltValueField(wireName: r'id')
  int? get id;

  Invoice._();

  factory Invoice([void updates(InvoiceBuilder b)]) = _$Invoice;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(InvoiceBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<Invoice> get serializer => _$InvoiceSerializer();
}

class _$InvoiceSerializer implements PrimitiveSerializer<Invoice> {
  @override
  final Iterable<Type> types = const [Invoice, _$Invoice];

  @override
  final String wireName = r'Invoice';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    Invoice object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.id != null) {
      yield r'id';
      yield serializers.serialize(
        object.id,
        specifiedType: const FullType(int),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    Invoice object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required InvoiceBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.id = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  Invoice deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = InvoiceBuilder();
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

