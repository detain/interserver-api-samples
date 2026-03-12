//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'scrub_ips_log_row_schema.g.dart';

/// ScrubIpsLogRowSchema
///
/// Properties:
/// * [date] 
/// * [filter] 
/// * [blockedIp] 
/// * [targetIp] 
/// * [targetPort] 
/// * [protocol] 
/// * [byteCount] 
/// * [xdpAction] 
@BuiltValue()
abstract class ScrubIpsLogRowSchema implements Built<ScrubIpsLogRowSchema, ScrubIpsLogRowSchemaBuilder> {
  @BuiltValueField(wireName: r'date')
  String? get date;

  @BuiltValueField(wireName: r'filter')
  String? get filter;

  @BuiltValueField(wireName: r'blocked_ip')
  String? get blockedIp;

  @BuiltValueField(wireName: r'target_ip')
  String? get targetIp;

  @BuiltValueField(wireName: r'target_port')
  num? get targetPort;

  @BuiltValueField(wireName: r'protocol')
  String? get protocol;

  @BuiltValueField(wireName: r'byte_count')
  num? get byteCount;

  @BuiltValueField(wireName: r'xdp_action')
  String? get xdpAction;

  ScrubIpsLogRowSchema._();

  factory ScrubIpsLogRowSchema([void updates(ScrubIpsLogRowSchemaBuilder b)]) = _$ScrubIpsLogRowSchema;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ScrubIpsLogRowSchemaBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ScrubIpsLogRowSchema> get serializer => _$ScrubIpsLogRowSchemaSerializer();
}

class _$ScrubIpsLogRowSchemaSerializer implements PrimitiveSerializer<ScrubIpsLogRowSchema> {
  @override
  final Iterable<Type> types = const [ScrubIpsLogRowSchema, _$ScrubIpsLogRowSchema];

  @override
  final String wireName = r'ScrubIpsLogRowSchema';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ScrubIpsLogRowSchema object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.date != null) {
      yield r'date';
      yield serializers.serialize(
        object.date,
        specifiedType: const FullType(String),
      );
    }
    if (object.filter != null) {
      yield r'filter';
      yield serializers.serialize(
        object.filter,
        specifiedType: const FullType(String),
      );
    }
    if (object.blockedIp != null) {
      yield r'blocked_ip';
      yield serializers.serialize(
        object.blockedIp,
        specifiedType: const FullType(String),
      );
    }
    if (object.targetIp != null) {
      yield r'target_ip';
      yield serializers.serialize(
        object.targetIp,
        specifiedType: const FullType(String),
      );
    }
    if (object.targetPort != null) {
      yield r'target_port';
      yield serializers.serialize(
        object.targetPort,
        specifiedType: const FullType(num),
      );
    }
    if (object.protocol != null) {
      yield r'protocol';
      yield serializers.serialize(
        object.protocol,
        specifiedType: const FullType(String),
      );
    }
    if (object.byteCount != null) {
      yield r'byte_count';
      yield serializers.serialize(
        object.byteCount,
        specifiedType: const FullType(num),
      );
    }
    if (object.xdpAction != null) {
      yield r'xdp_action';
      yield serializers.serialize(
        object.xdpAction,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    ScrubIpsLogRowSchema object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ScrubIpsLogRowSchemaBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'date':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.date = valueDes;
          break;
        case r'filter':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.filter = valueDes;
          break;
        case r'blocked_ip':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.blockedIp = valueDes;
          break;
        case r'target_ip':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.targetIp = valueDes;
          break;
        case r'target_port':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.targetPort = valueDes;
          break;
        case r'protocol':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.protocol = valueDes;
          break;
        case r'byte_count':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.byteCount = valueDes;
          break;
        case r'xdp_action':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.xdpAction = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  ScrubIpsLogRowSchema deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ScrubIpsLogRowSchemaBuilder();
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

