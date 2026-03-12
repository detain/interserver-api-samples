//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'queue_response.g.dart';

/// Response after sending an action queue to a service.
///
/// Properties:
/// * [text] - Response text
/// * [queueId] - The Queue ID attached to the action.
@BuiltValue()
abstract class QueueResponse implements Built<QueueResponse, QueueResponseBuilder> {
  /// Response text
  @BuiltValueField(wireName: r'text')
  String get text;

  /// The Queue ID attached to the action.
  @BuiltValueField(wireName: r'queueId')
  int get queueId;

  QueueResponse._();

  factory QueueResponse([void updates(QueueResponseBuilder b)]) = _$QueueResponse;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(QueueResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<QueueResponse> get serializer => _$QueueResponseSerializer();
}

class _$QueueResponseSerializer implements PrimitiveSerializer<QueueResponse> {
  @override
  final Iterable<Type> types = const [QueueResponse, _$QueueResponse];

  @override
  final String wireName = r'QueueResponse';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    QueueResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'text';
    yield serializers.serialize(
      object.text,
      specifiedType: const FullType(String),
    );
    yield r'queueId';
    yield serializers.serialize(
      object.queueId,
      specifiedType: const FullType(int),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    QueueResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required QueueResponseBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'text':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.text = valueDes;
          break;
        case r'queueId':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.queueId = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  QueueResponse deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = QueueResponseBuilder();
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

