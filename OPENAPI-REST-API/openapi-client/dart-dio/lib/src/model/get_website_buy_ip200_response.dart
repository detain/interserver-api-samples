//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'get_website_buy_ip200_response.g.dart';

/// GetWebsiteBuyIp200Response
///
/// Properties:
/// * [ips] - A map of IP addresses to their current reverse DNS hostnames.
@BuiltValue()
abstract class GetWebsiteBuyIp200Response implements Built<GetWebsiteBuyIp200Response, GetWebsiteBuyIp200ResponseBuilder> {
  /// A map of IP addresses to their current reverse DNS hostnames.
  @BuiltValueField(wireName: r'ips')
  BuiltMap<String, String>? get ips;

  GetWebsiteBuyIp200Response._();

  factory GetWebsiteBuyIp200Response([void updates(GetWebsiteBuyIp200ResponseBuilder b)]) = _$GetWebsiteBuyIp200Response;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(GetWebsiteBuyIp200ResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<GetWebsiteBuyIp200Response> get serializer => _$GetWebsiteBuyIp200ResponseSerializer();
}

class _$GetWebsiteBuyIp200ResponseSerializer implements PrimitiveSerializer<GetWebsiteBuyIp200Response> {
  @override
  final Iterable<Type> types = const [GetWebsiteBuyIp200Response, _$GetWebsiteBuyIp200Response];

  @override
  final String wireName = r'GetWebsiteBuyIp200Response';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    GetWebsiteBuyIp200Response object, {
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
    GetWebsiteBuyIp200Response object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required GetWebsiteBuyIp200ResponseBuilder result,
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
  GetWebsiteBuyIp200Response deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = GetWebsiteBuyIp200ResponseBuilder();
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

