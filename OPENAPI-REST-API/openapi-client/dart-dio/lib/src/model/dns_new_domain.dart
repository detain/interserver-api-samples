//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'dns_new_domain.g.dart';

/// The request for a new domain to be managed by the dns servers.
///
/// Properties:
/// * [domain] - The domain name.
/// * [ip] - IP Address to point the domain to.
@BuiltValue()
abstract class DnsNewDomain implements Built<DnsNewDomain, DnsNewDomainBuilder> {
  /// The domain name.
  @BuiltValueField(wireName: r'domain')
  String get domain;

  /// IP Address to point the domain to.
  @BuiltValueField(wireName: r'ip')
  String get ip;

  DnsNewDomain._();

  factory DnsNewDomain([void updates(DnsNewDomainBuilder b)]) = _$DnsNewDomain;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(DnsNewDomainBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<DnsNewDomain> get serializer => _$DnsNewDomainSerializer();
}

class _$DnsNewDomainSerializer implements PrimitiveSerializer<DnsNewDomain> {
  @override
  final Iterable<Type> types = const [DnsNewDomain, _$DnsNewDomain];

  @override
  final String wireName = r'DnsNewDomain';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    DnsNewDomain object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'domain';
    yield serializers.serialize(
      object.domain,
      specifiedType: const FullType(String),
    );
    yield r'ip';
    yield serializers.serialize(
      object.ip,
      specifiedType: const FullType(String),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    DnsNewDomain object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required DnsNewDomainBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'domain':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.domain = valueDes;
          break;
        case r'ip':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ip = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  DnsNewDomain deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = DnsNewDomainBuilder();
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

