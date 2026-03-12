//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'post_oauth_callback_request.g.dart';

/// PostOauthCallbackRequest
///
/// Properties:
/// * [provider] - The OAuth provider name (e.g. `Google`).
@BuiltValue()
abstract class PostOauthCallbackRequest implements Built<PostOauthCallbackRequest, PostOauthCallbackRequestBuilder> {
  /// The OAuth provider name (e.g. `Google`).
  @BuiltValueField(wireName: r'provider')
  String? get provider;

  PostOauthCallbackRequest._();

  factory PostOauthCallbackRequest([void updates(PostOauthCallbackRequestBuilder b)]) = _$PostOauthCallbackRequest;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(PostOauthCallbackRequestBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<PostOauthCallbackRequest> get serializer => _$PostOauthCallbackRequestSerializer();
}

class _$PostOauthCallbackRequestSerializer implements PrimitiveSerializer<PostOauthCallbackRequest> {
  @override
  final Iterable<Type> types = const [PostOauthCallbackRequest, _$PostOauthCallbackRequest];

  @override
  final String wireName = r'PostOauthCallbackRequest';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    PostOauthCallbackRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.provider != null) {
      yield r'provider';
      yield serializers.serialize(
        object.provider,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    PostOauthCallbackRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required PostOauthCallbackRequestBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'provider':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.provider = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  PostOauthCallbackRequest deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = PostOauthCallbackRequestBuilder();
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

