//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'domain_nameserver_put_request.g.dart';

/// Payload for replacing the assigned nameserver list for a domain.
///
/// Properties:
/// * [nameserver] 
@BuiltValue()
abstract class DomainNameserverPutRequest implements Built<DomainNameserverPutRequest, DomainNameserverPutRequestBuilder> {
  @BuiltValueField(wireName: r'nameserver')
  BuiltList<String> get nameserver;

  DomainNameserverPutRequest._();

  factory DomainNameserverPutRequest([void updates(DomainNameserverPutRequestBuilder b)]) = _$DomainNameserverPutRequest;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(DomainNameserverPutRequestBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<DomainNameserverPutRequest> get serializer => _$DomainNameserverPutRequestSerializer();
}

class _$DomainNameserverPutRequestSerializer implements PrimitiveSerializer<DomainNameserverPutRequest> {
  @override
  final Iterable<Type> types = const [DomainNameserverPutRequest, _$DomainNameserverPutRequest];

  @override
  final String wireName = r'DomainNameserverPutRequest';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    DomainNameserverPutRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'nameserver';
    yield serializers.serialize(
      object.nameserver,
      specifiedType: const FullType(BuiltList, [FullType(String)]),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    DomainNameserverPutRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required DomainNameserverPutRequestBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'nameserver':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(String)]),
          ) as BuiltList<String>;
          result.nameserver.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  DomainNameserverPutRequest deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = DomainNameserverPutRequestBuilder();
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

