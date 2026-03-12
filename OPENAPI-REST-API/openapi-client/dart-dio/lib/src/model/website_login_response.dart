//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'website_login_response.g.dart';

/// Response from a website login request.
///
/// Properties:
/// * [type] 
/// * [location] 
@BuiltValue()
abstract class WebsiteLoginResponse implements Built<WebsiteLoginResponse, WebsiteLoginResponseBuilder> {
  @BuiltValueField(wireName: r'type')
  String? get type;

  @BuiltValueField(wireName: r'location')
  String? get location;

  WebsiteLoginResponse._();

  factory WebsiteLoginResponse([void updates(WebsiteLoginResponseBuilder b)]) = _$WebsiteLoginResponse;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(WebsiteLoginResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<WebsiteLoginResponse> get serializer => _$WebsiteLoginResponseSerializer();
}

class _$WebsiteLoginResponseSerializer implements PrimitiveSerializer<WebsiteLoginResponse> {
  @override
  final Iterable<Type> types = const [WebsiteLoginResponse, _$WebsiteLoginResponse];

  @override
  final String wireName = r'WebsiteLoginResponse';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    WebsiteLoginResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.type != null) {
      yield r'type';
      yield serializers.serialize(
        object.type,
        specifiedType: const FullType(String),
      );
    }
    if (object.location != null) {
      yield r'location';
      yield serializers.serialize(
        object.location,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    WebsiteLoginResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required WebsiteLoginResponseBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'type':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.type = valueDes;
          break;
        case r'location':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.location = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  WebsiteLoginResponse deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = WebsiteLoginResponseBuilder();
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

