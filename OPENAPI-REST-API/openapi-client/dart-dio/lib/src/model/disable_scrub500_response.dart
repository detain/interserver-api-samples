//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'disable_scrub500_response.g.dart';

/// DisableScrub500Response
///
/// Properties:
/// * [success] 
/// * [text] 
@BuiltValue()
abstract class DisableScrub500Response implements Built<DisableScrub500Response, DisableScrub500ResponseBuilder> {
  @BuiltValueField(wireName: r'success')
  bool get success;

  @BuiltValueField(wireName: r'text')
  String get text;

  DisableScrub500Response._();

  factory DisableScrub500Response([void updates(DisableScrub500ResponseBuilder b)]) = _$DisableScrub500Response;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(DisableScrub500ResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<DisableScrub500Response> get serializer => _$DisableScrub500ResponseSerializer();
}

class _$DisableScrub500ResponseSerializer implements PrimitiveSerializer<DisableScrub500Response> {
  @override
  final Iterable<Type> types = const [DisableScrub500Response, _$DisableScrub500Response];

  @override
  final String wireName = r'DisableScrub500Response';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    DisableScrub500Response object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'success';
    yield serializers.serialize(
      object.success,
      specifiedType: const FullType(bool),
    );
    yield r'text';
    yield serializers.serialize(
      object.text,
      specifiedType: const FullType(String),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    DisableScrub500Response object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required DisableScrub500ResponseBuilder result,
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
  DisableScrub500Response deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = DisableScrub500ResponseBuilder();
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

