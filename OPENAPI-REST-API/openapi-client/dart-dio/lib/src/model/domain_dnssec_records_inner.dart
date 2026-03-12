//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'domain_dnssec_records_inner.g.dart';

/// DomainDnssecRecordsInner
///
/// Properties:
/// * [algorithm] 
/// * [digestType] 
/// * [digest] 
/// * [keyTag] 
@BuiltValue()
abstract class DomainDnssecRecordsInner implements Built<DomainDnssecRecordsInner, DomainDnssecRecordsInnerBuilder> {
  @BuiltValueField(wireName: r'algorithm')
  String? get algorithm;

  @BuiltValueField(wireName: r'digest_type')
  String? get digestType;

  @BuiltValueField(wireName: r'digest')
  String? get digest;

  @BuiltValueField(wireName: r'key_tag')
  String? get keyTag;

  DomainDnssecRecordsInner._();

  factory DomainDnssecRecordsInner([void updates(DomainDnssecRecordsInnerBuilder b)]) = _$DomainDnssecRecordsInner;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(DomainDnssecRecordsInnerBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<DomainDnssecRecordsInner> get serializer => _$DomainDnssecRecordsInnerSerializer();
}

class _$DomainDnssecRecordsInnerSerializer implements PrimitiveSerializer<DomainDnssecRecordsInner> {
  @override
  final Iterable<Type> types = const [DomainDnssecRecordsInner, _$DomainDnssecRecordsInner];

  @override
  final String wireName = r'DomainDnssecRecordsInner';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    DomainDnssecRecordsInner object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.algorithm != null) {
      yield r'algorithm';
      yield serializers.serialize(
        object.algorithm,
        specifiedType: const FullType(String),
      );
    }
    if (object.digestType != null) {
      yield r'digest_type';
      yield serializers.serialize(
        object.digestType,
        specifiedType: const FullType(String),
      );
    }
    if (object.digest != null) {
      yield r'digest';
      yield serializers.serialize(
        object.digest,
        specifiedType: const FullType(String),
      );
    }
    if (object.keyTag != null) {
      yield r'key_tag';
      yield serializers.serialize(
        object.keyTag,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    DomainDnssecRecordsInner object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required DomainDnssecRecordsInnerBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'algorithm':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.algorithm = valueDes;
          break;
        case r'digest_type':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.digestType = valueDes;
          break;
        case r'digest':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.digest = valueDes;
          break;
        case r'key_tag':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.keyTag = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  DomainDnssecRecordsInner deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = DomainDnssecRecordsInnerBuilder();
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

