//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/domain_nameserver_get_response_inner.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'domain_nameserver_get_response.g.dart';

/// List of registered nameserver hosts with glue record metadata.
@BuiltValue()
abstract class DomainNameserverGetResponse implements Built<DomainNameserverGetResponse, DomainNameserverGetResponseBuilder> {
  DomainNameserverGetResponse._();

  factory DomainNameserverGetResponse([void updates(DomainNameserverGetResponseBuilder b)]) = _$DomainNameserverGetResponse;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(DomainNameserverGetResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<DomainNameserverGetResponse> get serializer => _$DomainNameserverGetResponseSerializer();
}

class _$DomainNameserverGetResponseSerializer implements PrimitiveSerializer<DomainNameserverGetResponse> {
  @override
  final Iterable<Type> types = const [DomainNameserverGetResponse, _$DomainNameserverGetResponse];

  @override
  final String wireName = r'DomainNameserverGetResponse';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    DomainNameserverGetResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
  }

  @override
  Object serialize(
    Serializers serializers,
    DomainNameserverGetResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  @override
  DomainNameserverGetResponse deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = DomainNameserverGetResponseBuilder();
    final serializedList = (serialized as Iterable<Object?>).toList();
    return result.build();
  }
}

