//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'disable_scrub200_response.g.dart';

/// DisableScrub200Response
///
/// Properties:
/// * [success] 
/// * [text] 
@BuiltValue()
abstract class DisableScrub200Response implements Built<DisableScrub200Response, DisableScrub200ResponseBuilder> {
  @BuiltValueField(wireName: r'success')
  bool get success;

  @BuiltValueField(wireName: r'text')
  String get text;

  DisableScrub200Response._();

  factory DisableScrub200Response([void updates(DisableScrub200ResponseBuilder b)]) = _$DisableScrub200Response;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(DisableScrub200ResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<DisableScrub200Response> get serializer => _$DisableScrub200ResponseSerializer();
}

class _$DisableScrub200ResponseSerializer implements PrimitiveSerializer<DisableScrub200Response> {
  @override
  final Iterable<Type> types = const [DisableScrub200Response, _$DisableScrub200Response];

  @override
  final String wireName = r'DisableScrub200Response';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    DisableScrub200Response object, {
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
    DisableScrub200Response object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required DisableScrub200ResponseBuilder result,
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
  DisableScrub200Response deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = DisableScrub200ResponseBuilder();
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

