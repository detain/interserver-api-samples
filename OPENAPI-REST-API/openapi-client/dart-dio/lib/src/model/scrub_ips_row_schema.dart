//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'scrub_ips_row_schema.g.dart';

/// ScrubIpsRowSchema
///
/// Properties:
/// * [scrubIpId] 
/// * [repeatInvoicesCost] 
/// * [scrubIpIp] 
/// * [scrubIpStatus] 
/// * [servicesName] 
@BuiltValue()
abstract class ScrubIpsRowSchema implements Built<ScrubIpsRowSchema, ScrubIpsRowSchemaBuilder> {
  @BuiltValueField(wireName: r'scrub_ip_id')
  int? get scrubIpId;

  @BuiltValueField(wireName: r'repeat_invoices_cost')
  num? get repeatInvoicesCost;

  @BuiltValueField(wireName: r'scrub_ip_ip')
  String? get scrubIpIp;

  @BuiltValueField(wireName: r'scrub_ip_status')
  String? get scrubIpStatus;

  @BuiltValueField(wireName: r'services_name')
  String? get servicesName;

  ScrubIpsRowSchema._();

  factory ScrubIpsRowSchema([void updates(ScrubIpsRowSchemaBuilder b)]) = _$ScrubIpsRowSchema;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ScrubIpsRowSchemaBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ScrubIpsRowSchema> get serializer => _$ScrubIpsRowSchemaSerializer();
}

class _$ScrubIpsRowSchemaSerializer implements PrimitiveSerializer<ScrubIpsRowSchema> {
  @override
  final Iterable<Type> types = const [ScrubIpsRowSchema, _$ScrubIpsRowSchema];

  @override
  final String wireName = r'ScrubIpsRowSchema';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ScrubIpsRowSchema object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.scrubIpId != null) {
      yield r'scrub_ip_id';
      yield serializers.serialize(
        object.scrubIpId,
        specifiedType: const FullType(int),
      );
    }
    if (object.repeatInvoicesCost != null) {
      yield r'repeat_invoices_cost';
      yield serializers.serialize(
        object.repeatInvoicesCost,
        specifiedType: const FullType(num),
      );
    }
    if (object.scrubIpIp != null) {
      yield r'scrub_ip_ip';
      yield serializers.serialize(
        object.scrubIpIp,
        specifiedType: const FullType(String),
      );
    }
    if (object.scrubIpStatus != null) {
      yield r'scrub_ip_status';
      yield serializers.serialize(
        object.scrubIpStatus,
        specifiedType: const FullType(String),
      );
    }
    if (object.servicesName != null) {
      yield r'services_name';
      yield serializers.serialize(
        object.servicesName,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    ScrubIpsRowSchema object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ScrubIpsRowSchemaBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'scrub_ip_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.scrubIpId = valueDes;
          break;
        case r'repeat_invoices_cost':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.repeatInvoicesCost = valueDes;
          break;
        case r'scrub_ip_ip':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.scrubIpIp = valueDes;
          break;
        case r'scrub_ip_status':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.scrubIpStatus = valueDes;
          break;
        case r'services_name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.servicesName = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  ScrubIpsRowSchema deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ScrubIpsRowSchemaBuilder();
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

