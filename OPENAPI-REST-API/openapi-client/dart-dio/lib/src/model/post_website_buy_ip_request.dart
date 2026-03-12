//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'post_website_buy_ip_request.g.dart';

/// PostWebsiteBuyIpRequest
///
/// Properties:
/// * [ips] - A map of IP addresses to their desired reverse DNS hostnames.
@BuiltValue()
abstract class PostWebsiteBuyIpRequest implements Built<PostWebsiteBuyIpRequest, PostWebsiteBuyIpRequestBuilder> {
  /// A map of IP addresses to their desired reverse DNS hostnames.
  @BuiltValueField(wireName: r'ips')
  BuiltMap<String, String>? get ips;

  PostWebsiteBuyIpRequest._();

  factory PostWebsiteBuyIpRequest([void updates(PostWebsiteBuyIpRequestBuilder b)]) = _$PostWebsiteBuyIpRequest;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(PostWebsiteBuyIpRequestBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<PostWebsiteBuyIpRequest> get serializer => _$PostWebsiteBuyIpRequestSerializer();
}

class _$PostWebsiteBuyIpRequestSerializer implements PrimitiveSerializer<PostWebsiteBuyIpRequest> {
  @override
  final Iterable<Type> types = const [PostWebsiteBuyIpRequest, _$PostWebsiteBuyIpRequest];

  @override
  final String wireName = r'PostWebsiteBuyIpRequest';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    PostWebsiteBuyIpRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.ips != null) {
      yield r'ips';
      yield serializers.serialize(
        object.ips,
        specifiedType: const FullType(BuiltMap, [FullType(String), FullType(String)]),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    PostWebsiteBuyIpRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required PostWebsiteBuyIpRequestBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'ips':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltMap, [FullType(String), FullType(String)]),
          ) as BuiltMap<String, String>;
          result.ips.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  PostWebsiteBuyIpRequest deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = PostWebsiteBuyIpRequestBuilder();
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

