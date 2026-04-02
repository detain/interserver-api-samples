//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'add_server200_response.g.dart';

/// AddServer200Response
///
/// Properties:
/// * [text] - Status message.
/// * [invoice] - Invoice ID for payment.
/// * [order] - Server order ID.
@BuiltValue()
abstract class AddServer200Response implements Built<AddServer200Response, AddServer200ResponseBuilder> {
  /// Status message.
  @BuiltValueField(wireName: r'text')
  String? get text;

  /// Invoice ID for payment.
  @BuiltValueField(wireName: r'invoice')
  int? get invoice;

  /// Server order ID.
  @BuiltValueField(wireName: r'order')
  int? get order;

  AddServer200Response._();

  factory AddServer200Response([void updates(AddServer200ResponseBuilder b)]) = _$AddServer200Response;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(AddServer200ResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<AddServer200Response> get serializer => _$AddServer200ResponseSerializer();
}

class _$AddServer200ResponseSerializer implements PrimitiveSerializer<AddServer200Response> {
  @override
  final Iterable<Type> types = const [AddServer200Response, _$AddServer200Response];

  @override
  final String wireName = r'AddServer200Response';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    AddServer200Response object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.text != null) {
      yield r'text';
      yield serializers.serialize(
        object.text,
        specifiedType: const FullType(String),
      );
    }
    if (object.invoice != null) {
      yield r'invoice';
      yield serializers.serialize(
        object.invoice,
        specifiedType: const FullType(int),
      );
    }
    if (object.order != null) {
      yield r'order';
      yield serializers.serialize(
        object.order,
        specifiedType: const FullType(int),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    AddServer200Response object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required AddServer200ResponseBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'text':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.text = valueDes;
          break;
        case r'invoice':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.invoice = valueDes;
          break;
        case r'order':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.order = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  AddServer200Response deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = AddServer200ResponseBuilder();
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

