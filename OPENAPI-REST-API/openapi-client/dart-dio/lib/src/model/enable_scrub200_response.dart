//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'enable_scrub200_response.g.dart';

/// EnableScrub200Response
///
/// Properties:
/// * [success] 
/// * [text] 
@BuiltValue()
abstract class EnableScrub200Response implements Built<EnableScrub200Response, EnableScrub200ResponseBuilder> {
  @BuiltValueField(wireName: r'success')
  bool get success;

  @BuiltValueField(wireName: r'text')
  String get text;

  EnableScrub200Response._();

  factory EnableScrub200Response([void updates(EnableScrub200ResponseBuilder b)]) = _$EnableScrub200Response;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(EnableScrub200ResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<EnableScrub200Response> get serializer => _$EnableScrub200ResponseSerializer();
}

class _$EnableScrub200ResponseSerializer implements PrimitiveSerializer<EnableScrub200Response> {
  @override
  final Iterable<Type> types = const [EnableScrub200Response, _$EnableScrub200Response];

  @override
  final String wireName = r'EnableScrub200Response';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    EnableScrub200Response object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'success';
    yield serializers.serialize(
      object.success,
      specifiedType: const FullType(bool),
    );
    yield r'text';
    yield serializers.serialize(
      object.text,
      specifiedType: const FullType(String),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    EnableScrub200Response object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required EnableScrub200ResponseBuilder result,
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
  EnableScrub200Response deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = EnableScrub200ResponseBuilder();
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

