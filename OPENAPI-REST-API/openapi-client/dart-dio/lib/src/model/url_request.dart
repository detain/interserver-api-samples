//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'url_request.g.dart';

/// URL
///
/// Properties:
/// * [url] 
@BuiltValue()
abstract class UrlRequest implements Built<UrlRequest, UrlRequestBuilder> {
  @BuiltValueField(wireName: r'url')
  String? get url;

  UrlRequest._();

  factory UrlRequest([void updates(UrlRequestBuilder b)]) = _$UrlRequest;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(UrlRequestBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<UrlRequest> get serializer => _$UrlRequestSerializer();
}

class _$UrlRequestSerializer implements PrimitiveSerializer<UrlRequest> {
  @override
  final Iterable<Type> types = const [UrlRequest, _$UrlRequest];

  @override
  final String wireName = r'UrlRequest';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    UrlRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.url != null) {
      yield r'url';
      yield serializers.serialize(
        object.url,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    UrlRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required UrlRequestBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'url':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.url = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  UrlRequest deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = UrlRequestBuilder();
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

