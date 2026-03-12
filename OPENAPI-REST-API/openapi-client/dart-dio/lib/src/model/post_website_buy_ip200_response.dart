//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'post_website_buy_ip200_response.g.dart';

/// PostWebsiteBuyIp200Response
///
/// Properties:
/// * [message] 
/// * [success] 
@BuiltValue()
abstract class PostWebsiteBuyIp200Response implements Built<PostWebsiteBuyIp200Response, PostWebsiteBuyIp200ResponseBuilder> {
  @BuiltValueField(wireName: r'message')
  String? get message;

  @BuiltValueField(wireName: r'success')
  bool? get success;

  PostWebsiteBuyIp200Response._();

  factory PostWebsiteBuyIp200Response([void updates(PostWebsiteBuyIp200ResponseBuilder b)]) = _$PostWebsiteBuyIp200Response;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(PostWebsiteBuyIp200ResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<PostWebsiteBuyIp200Response> get serializer => _$PostWebsiteBuyIp200ResponseSerializer();
}

class _$PostWebsiteBuyIp200ResponseSerializer implements PrimitiveSerializer<PostWebsiteBuyIp200Response> {
  @override
  final Iterable<Type> types = const [PostWebsiteBuyIp200Response, _$PostWebsiteBuyIp200Response];

  @override
  final String wireName = r'PostWebsiteBuyIp200Response';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    PostWebsiteBuyIp200Response object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.message != null) {
      yield r'message';
      yield serializers.serialize(
        object.message,
        specifiedType: const FullType(String),
      );
    }
    if (object.success != null) {
      yield r'success';
      yield serializers.serialize(
        object.success,
        specifiedType: const FullType(bool),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    PostWebsiteBuyIp200Response object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required PostWebsiteBuyIp200ResponseBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'message':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.message = valueDes;
          break;
        case r'success':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
          result.success = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  PostWebsiteBuyIp200Response deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = PostWebsiteBuyIp200ResponseBuilder();
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

