//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'post_website_migration200_response.g.dart';

/// PostWebsiteMigration200Response
///
/// Properties:
/// * [text] - Confirmation message.
/// * [ticket] - The support ticket ID created for tracking the migration. Use this with `/tickets/{id}` to check migration progress.
@BuiltValue()
abstract class PostWebsiteMigration200Response implements Built<PostWebsiteMigration200Response, PostWebsiteMigration200ResponseBuilder> {
  /// Confirmation message.
  @BuiltValueField(wireName: r'text')
  String? get text;

  /// The support ticket ID created for tracking the migration. Use this with `/tickets/{id}` to check migration progress.
  @BuiltValueField(wireName: r'ticket')
  int? get ticket;

  PostWebsiteMigration200Response._();

  factory PostWebsiteMigration200Response([void updates(PostWebsiteMigration200ResponseBuilder b)]) = _$PostWebsiteMigration200Response;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(PostWebsiteMigration200ResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<PostWebsiteMigration200Response> get serializer => _$PostWebsiteMigration200ResponseSerializer();
}

class _$PostWebsiteMigration200ResponseSerializer implements PrimitiveSerializer<PostWebsiteMigration200Response> {
  @override
  final Iterable<Type> types = const [PostWebsiteMigration200Response, _$PostWebsiteMigration200Response];

  @override
  final String wireName = r'PostWebsiteMigration200Response';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    PostWebsiteMigration200Response object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.text != null) {
      yield r'text';
      yield serializers.serialize(
        object.text,
        specifiedType: const FullType(String),
      );
    }
    if (object.ticket != null) {
      yield r'ticket';
      yield serializers.serialize(
        object.ticket,
        specifiedType: const FullType(int),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    PostWebsiteMigration200Response object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required PostWebsiteMigration200ResponseBuilder result,
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
        case r'ticket':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.ticket = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  PostWebsiteMigration200Response deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = PostWebsiteMigration200ResponseBuilder();
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

