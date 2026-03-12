//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'scrub_ips_delete_rule200_response.g.dart';

/// ScrubIpsDeleteRule200Response
///
/// Properties:
/// * [success] 
/// * [text] 
@BuiltValue()
abstract class ScrubIpsDeleteRule200Response implements Built<ScrubIpsDeleteRule200Response, ScrubIpsDeleteRule200ResponseBuilder> {
  @BuiltValueField(wireName: r'success')
  bool? get success;

  @BuiltValueField(wireName: r'text')
  String? get text;

  ScrubIpsDeleteRule200Response._();

  factory ScrubIpsDeleteRule200Response([void updates(ScrubIpsDeleteRule200ResponseBuilder b)]) = _$ScrubIpsDeleteRule200Response;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ScrubIpsDeleteRule200ResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ScrubIpsDeleteRule200Response> get serializer => _$ScrubIpsDeleteRule200ResponseSerializer();
}

class _$ScrubIpsDeleteRule200ResponseSerializer implements PrimitiveSerializer<ScrubIpsDeleteRule200Response> {
  @override
  final Iterable<Type> types = const [ScrubIpsDeleteRule200Response, _$ScrubIpsDeleteRule200Response];

  @override
  final String wireName = r'ScrubIpsDeleteRule200Response';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ScrubIpsDeleteRule200Response object, {
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
    ScrubIpsDeleteRule200Response object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ScrubIpsDeleteRule200ResponseBuilder result,
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
  ScrubIpsDeleteRule200Response deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ScrubIpsDeleteRule200ResponseBuilder();
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

