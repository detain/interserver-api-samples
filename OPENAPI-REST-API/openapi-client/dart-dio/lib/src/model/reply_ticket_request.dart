//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'reply_ticket_request.g.dart';

/// Post reply to your ticket
///
/// Properties:
/// * [content] 
@BuiltValue()
abstract class ReplyTicketRequest implements Built<ReplyTicketRequest, ReplyTicketRequestBuilder> {
  @BuiltValueField(wireName: r'content')
  String? get content;

  ReplyTicketRequest._();

  factory ReplyTicketRequest([void updates(ReplyTicketRequestBuilder b)]) = _$ReplyTicketRequest;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ReplyTicketRequestBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ReplyTicketRequest> get serializer => _$ReplyTicketRequestSerializer();
}

class _$ReplyTicketRequestSerializer implements PrimitiveSerializer<ReplyTicketRequest> {
  @override
  final Iterable<Type> types = const [ReplyTicketRequest, _$ReplyTicketRequest];

  @override
  final String wireName = r'ReplyTicketRequest';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ReplyTicketRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.content != null) {
      yield r'content';
      yield serializers.serialize(
        object.content,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    ReplyTicketRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ReplyTicketRequestBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'content':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.content = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  ReplyTicketRequest deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ReplyTicketRequestBuilder();
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

