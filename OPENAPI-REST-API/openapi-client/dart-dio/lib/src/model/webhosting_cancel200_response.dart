//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'webhosting_cancel200_response.g.dart';

/// WebhostingCancel200Response
///
/// Properties:
/// * [success] 
/// * [text] 
@BuiltValue()
abstract class WebhostingCancel200Response implements Built<WebhostingCancel200Response, WebhostingCancel200ResponseBuilder> {
  @BuiltValueField(wireName: r'success')
  bool get success;

  @BuiltValueField(wireName: r'text')
  String get text;

  WebhostingCancel200Response._();

  factory WebhostingCancel200Response([void updates(WebhostingCancel200ResponseBuilder b)]) = _$WebhostingCancel200Response;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(WebhostingCancel200ResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<WebhostingCancel200Response> get serializer => _$WebhostingCancel200ResponseSerializer();
}

class _$WebhostingCancel200ResponseSerializer implements PrimitiveSerializer<WebhostingCancel200Response> {
  @override
  final Iterable<Type> types = const [WebhostingCancel200Response, _$WebhostingCancel200Response];

  @override
  final String wireName = r'WebhostingCancel200Response';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    WebhostingCancel200Response object, {
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
    WebhostingCancel200Response object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required WebhostingCancel200ResponseBuilder result,
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
  WebhostingCancel200Response deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = WebhostingCancel200ResponseBuilder();
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

