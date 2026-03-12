//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'domain_nameserver_post_request.g.dart';

/// Payload for adding a registered nameserver (glue record).
///
/// Properties:
/// * [name] 
/// * [ipAddress] 
@BuiltValue()
abstract class DomainNameserverPostRequest implements Built<DomainNameserverPostRequest, DomainNameserverPostRequestBuilder> {
  @BuiltValueField(wireName: r'name')
  String get name;

  @BuiltValueField(wireName: r'ipAddress')
  String get ipAddress;

  DomainNameserverPostRequest._();

  factory DomainNameserverPostRequest([void updates(DomainNameserverPostRequestBuilder b)]) = _$DomainNameserverPostRequest;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(DomainNameserverPostRequestBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<DomainNameserverPostRequest> get serializer => _$DomainNameserverPostRequestSerializer();
}

class _$DomainNameserverPostRequestSerializer implements PrimitiveSerializer<DomainNameserverPostRequest> {
  @override
  final Iterable<Type> types = const [DomainNameserverPostRequest, _$DomainNameserverPostRequest];

  @override
  final String wireName = r'DomainNameserverPostRequest';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    DomainNameserverPostRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'name';
    yield serializers.serialize(
      object.name,
      specifiedType: const FullType(String),
    );
    yield r'ipAddress';
    yield serializers.serialize(
      object.ipAddress,
      specifiedType: const FullType(String),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    DomainNameserverPostRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required DomainNameserverPostRequestBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.name = valueDes;
          break;
        case r'ipAddress':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ipAddress = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  DomainNameserverPostRequest deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = DomainNameserverPostRequestBuilder();
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

