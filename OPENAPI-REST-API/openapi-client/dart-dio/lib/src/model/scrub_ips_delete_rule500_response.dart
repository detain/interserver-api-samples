//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'scrub_ips_delete_rule500_response.g.dart';

/// ScrubIpsDeleteRule500Response
///
/// Properties:
/// * [success] 
/// * [text] 
@BuiltValue()
abstract class ScrubIpsDeleteRule500Response implements Built<ScrubIpsDeleteRule500Response, ScrubIpsDeleteRule500ResponseBuilder> {
  @BuiltValueField(wireName: r'success')
  bool? get success;

  @BuiltValueField(wireName: r'text')
  String? get text;

  ScrubIpsDeleteRule500Response._();

  factory ScrubIpsDeleteRule500Response([void updates(ScrubIpsDeleteRule500ResponseBuilder b)]) = _$ScrubIpsDeleteRule500Response;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ScrubIpsDeleteRule500ResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ScrubIpsDeleteRule500Response> get serializer => _$ScrubIpsDeleteRule500ResponseSerializer();
}

class _$ScrubIpsDeleteRule500ResponseSerializer implements PrimitiveSerializer<ScrubIpsDeleteRule500Response> {
  @override
  final Iterable<Type> types = const [ScrubIpsDeleteRule500Response, _$ScrubIpsDeleteRule500Response];

  @override
  final String wireName = r'ScrubIpsDeleteRule500Response';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ScrubIpsDeleteRule500Response object, {
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
    ScrubIpsDeleteRule500Response object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ScrubIpsDeleteRule500ResponseBuilder result,
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
  ScrubIpsDeleteRule500Response deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ScrubIpsDeleteRule500ResponseBuilder();
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

