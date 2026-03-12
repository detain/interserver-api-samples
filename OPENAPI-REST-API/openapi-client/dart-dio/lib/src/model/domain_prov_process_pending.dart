//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/domain_prov_process_pending_attributes.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'domain_prov_process_pending.g.dart';

/// Provisioning status data for a pending domain order.
///
/// Properties:
/// * [oPSVersion] 
/// * [responseText] 
/// * [protocol] 
/// * [responseCode] 
/// * [action] 
/// * [object] 
/// * [isSuccess] 
/// * [attributes] 
@BuiltValue()
abstract class DomainProvProcessPending implements Built<DomainProvProcessPending, DomainProvProcessPendingBuilder> {
  @BuiltValueField(wireName: r'_OPS_version')
  String? get oPSVersion;

  @BuiltValueField(wireName: r'response_text')
  String? get responseText;

  @BuiltValueField(wireName: r'protocol')
  String? get protocol;

  @BuiltValueField(wireName: r'response_code')
  String? get responseCode;

  @BuiltValueField(wireName: r'action')
  String? get action;

  @BuiltValueField(wireName: r'object')
  String? get object;

  @BuiltValueField(wireName: r'is_success')
  String? get isSuccess;

  @BuiltValueField(wireName: r'attributes')
  DomainProvProcessPendingAttributes? get attributes;

  DomainProvProcessPending._();

  factory DomainProvProcessPending([void updates(DomainProvProcessPendingBuilder b)]) = _$DomainProvProcessPending;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(DomainProvProcessPendingBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<DomainProvProcessPending> get serializer => _$DomainProvProcessPendingSerializer();
}

class _$DomainProvProcessPendingSerializer implements PrimitiveSerializer<DomainProvProcessPending> {
  @override
  final Iterable<Type> types = const [DomainProvProcessPending, _$DomainProvProcessPending];

  @override
  final String wireName = r'DomainProvProcessPending';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    DomainProvProcessPending object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.oPSVersion != null) {
      yield r'_OPS_version';
      yield serializers.serialize(
        object.oPSVersion,
        specifiedType: const FullType(String),
      );
    }
    if (object.responseText != null) {
      yield r'response_text';
      yield serializers.serialize(
        object.responseText,
        specifiedType: const FullType(String),
      );
    }
    if (object.protocol != null) {
      yield r'protocol';
      yield serializers.serialize(
        object.protocol,
        specifiedType: const FullType(String),
      );
    }
    if (object.responseCode != null) {
      yield r'response_code';
      yield serializers.serialize(
        object.responseCode,
        specifiedType: const FullType(String),
      );
    }
    if (object.action != null) {
      yield r'action';
      yield serializers.serialize(
        object.action,
        specifiedType: const FullType(String),
      );
    }
    if (object.object != null) {
      yield r'object';
      yield serializers.serialize(
        object.object,
        specifiedType: const FullType(String),
      );
    }
    if (object.isSuccess != null) {
      yield r'is_success';
      yield serializers.serialize(
        object.isSuccess,
        specifiedType: const FullType(String),
      );
    }
    if (object.attributes != null) {
      yield r'attributes';
      yield serializers.serialize(
        object.attributes,
        specifiedType: const FullType(DomainProvProcessPendingAttributes),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    DomainProvProcessPending object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required DomainProvProcessPendingBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'_OPS_version':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.oPSVersion = valueDes;
          break;
        case r'response_text':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.responseText = valueDes;
          break;
        case r'protocol':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.protocol = valueDes;
          break;
        case r'response_code':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.responseCode = valueDes;
          break;
        case r'action':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.action = valueDes;
          break;
        case r'object':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.object = valueDes;
          break;
        case r'is_success':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.isSuccess = valueDes;
          break;
        case r'attributes':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(DomainProvProcessPendingAttributes),
          ) as DomainProvProcessPendingAttributes;
          result.attributes.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  DomainProvProcessPending deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = DomainProvProcessPendingBuilder();
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

