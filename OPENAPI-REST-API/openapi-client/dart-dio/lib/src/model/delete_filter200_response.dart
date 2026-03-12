//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'delete_filter200_response.g.dart';

/// DeleteFilter200Response
///
/// Properties:
/// * [success] 
/// * [text] 
@BuiltValue()
abstract class DeleteFilter200Response implements Built<DeleteFilter200Response, DeleteFilter200ResponseBuilder> {
  @BuiltValueField(wireName: r'success')
  bool? get success;

  @BuiltValueField(wireName: r'text')
  String? get text;

  DeleteFilter200Response._();

  factory DeleteFilter200Response([void updates(DeleteFilter200ResponseBuilder b)]) = _$DeleteFilter200Response;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(DeleteFilter200ResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<DeleteFilter200Response> get serializer => _$DeleteFilter200ResponseSerializer();
}

class _$DeleteFilter200ResponseSerializer implements PrimitiveSerializer<DeleteFilter200Response> {
  @override
  final Iterable<Type> types = const [DeleteFilter200Response, _$DeleteFilter200Response];

  @override
  final String wireName = r'DeleteFilter200Response';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    DeleteFilter200Response object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.success != null) {
      yield r'success';
      yield serializers.serialize(
        object.success,
        specifiedType: const FullType(bool),
      );
    }
    if (object.text != null) {
      yield r'text';
      yield serializers.serialize(
        object.text,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    DeleteFilter200Response object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required DeleteFilter200ResponseBuilder result,
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
        case r'text':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.text = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  DeleteFilter200Response deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = DeleteFilter200ResponseBuilder();
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

