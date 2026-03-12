//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'domain_dnssec_request.g.dart';

/// Request payload for adding DNSSEC DS records to a domain.
///
/// Properties:
/// * [algorithm] - List of DNSSEC algorithm IDs for each record.
/// * [digestType] - List of digest type IDs for each record.
/// * [digest] - List of hex digests for each record.
/// * [keyTag] - List of key tag values corresponding to each record.
@BuiltValue()
abstract class DomainDnssecRequest implements Built<DomainDnssecRequest, DomainDnssecRequestBuilder> {
  /// List of DNSSEC algorithm IDs for each record.
  @BuiltValueField(wireName: r'algorithm')
  BuiltList<int>? get algorithm;

  /// List of digest type IDs for each record.
  @BuiltValueField(wireName: r'digest_type')
  BuiltList<int>? get digestType;

  /// List of hex digests for each record.
  @BuiltValueField(wireName: r'digest')
  BuiltList<String>? get digest;

  /// List of key tag values corresponding to each record.
  @BuiltValueField(wireName: r'key_tag')
  BuiltList<int>? get keyTag;

  DomainDnssecRequest._();

  factory DomainDnssecRequest([void updates(DomainDnssecRequestBuilder b)]) = _$DomainDnssecRequest;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(DomainDnssecRequestBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<DomainDnssecRequest> get serializer => _$DomainDnssecRequestSerializer();
}

class _$DomainDnssecRequestSerializer implements PrimitiveSerializer<DomainDnssecRequest> {
  @override
  final Iterable<Type> types = const [DomainDnssecRequest, _$DomainDnssecRequest];

  @override
  final String wireName = r'DomainDnssecRequest';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    DomainDnssecRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.algorithm != null) {
      yield r'algorithm';
      yield serializers.serialize(
        object.algorithm,
        specifiedType: const FullType(BuiltList, [FullType(int)]),
      );
    }
    if (object.digestType != null) {
      yield r'digest_type';
      yield serializers.serialize(
        object.digestType,
        specifiedType: const FullType(BuiltList, [FullType(int)]),
      );
    }
    if (object.digest != null) {
      yield r'digest';
      yield serializers.serialize(
        object.digest,
        specifiedType: const FullType(BuiltList, [FullType(String)]),
      );
    }
    if (object.keyTag != null) {
      yield r'key_tag';
      yield serializers.serialize(
        object.keyTag,
        specifiedType: const FullType(BuiltList, [FullType(int)]),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    DomainDnssecRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required DomainDnssecRequestBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'algorithm':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(int)]),
          ) as BuiltList<int>;
          result.algorithm.replace(valueDes);
          break;
        case r'digest_type':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(int)]),
          ) as BuiltList<int>;
          result.digestType.replace(valueDes);
          break;
        case r'digest':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(String)]),
          ) as BuiltList<String>;
          result.digest.replace(valueDes);
          break;
        case r'key_tag':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(int)]),
          ) as BuiltList<int>;
          result.keyTag.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  DomainDnssecRequest deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = DomainDnssecRequestBuilder();
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

