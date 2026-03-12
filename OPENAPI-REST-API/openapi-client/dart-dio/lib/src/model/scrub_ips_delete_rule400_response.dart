//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'scrub_ips_delete_rule400_response.g.dart';

/// ScrubIpsDeleteRule400Response
///
/// Properties:
/// * [success] 
/// * [text] 
@BuiltValue()
abstract class ScrubIpsDeleteRule400Response implements Built<ScrubIpsDeleteRule400Response, ScrubIpsDeleteRule400ResponseBuilder> {
  @BuiltValueField(wireName: r'success')
  bool? get success;

  @BuiltValueField(wireName: r'text')
  String? get text;

  ScrubIpsDeleteRule400Response._();

  factory ScrubIpsDeleteRule400Response([void updates(ScrubIpsDeleteRule400ResponseBuilder b)]) = _$ScrubIpsDeleteRule400Response;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ScrubIpsDeleteRule400ResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ScrubIpsDeleteRule400Response> get serializer => _$ScrubIpsDeleteRule400ResponseSerializer();
}

class _$ScrubIpsDeleteRule400ResponseSerializer implements PrimitiveSerializer<ScrubIpsDeleteRule400Response> {
  @override
  final Iterable<Type> types = const [ScrubIpsDeleteRule400Response, _$ScrubIpsDeleteRule400Response];

  @override
  final String wireName = r'ScrubIpsDeleteRule400Response';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ScrubIpsDeleteRule400Response object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.success != null) {
      yield r'success';
      yield serializers.serialize(
        object.success,
        specifiedType: const FullType(bool),
      );
    }
    if (object.text != null) {
      yield r'text';
      yield serializers.serialize(
        object.text,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    ScrubIpsDeleteRule400Response object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ScrubIpsDeleteRule400ResponseBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'success':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
          result.success = valueDes;
          break;
        case r'text':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.text = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  ScrubIpsDeleteRule400Response deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ScrubIpsDeleteRule400ResponseBuilder();
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

