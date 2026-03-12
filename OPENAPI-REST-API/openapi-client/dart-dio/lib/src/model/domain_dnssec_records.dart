//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/domain_dnssec_records_inner.dart';
import 'package:built_collection/built_collection.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'domain_dnssec_records.g.dart';

/// DNSSEC DS records currently configured for a domain.
@BuiltValue()
abstract class DomainDnssecRecords implements Built<DomainDnssecRecords, DomainDnssecRecordsBuilder> {
  DomainDnssecRecords._();

  factory DomainDnssecRecords([void updates(DomainDnssecRecordsBuilder b)]) = _$DomainDnssecRecords;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(DomainDnssecRecordsBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<DomainDnssecRecords> get serializer => _$DomainDnssecRecordsSerializer();
}

class _$DomainDnssecRecordsSerializer implements PrimitiveSerializer<DomainDnssecRecords> {
  @override
  final Iterable<Type> types = const [DomainDnssecRecords, _$DomainDnssecRecords];

  @override
  final String wireName = r'DomainDnssecRecords';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    DomainDnssecRecords object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
  }

  @override
  Object serialize(
    Serializers serializers,
    DomainDnssecRecords object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  @override
  DomainDnssecRecords deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = DomainDnssecRecordsBuilder();
    final serializedList = (serialized as Iterable<Object?>).toList();
    return result.build();
  }
}

