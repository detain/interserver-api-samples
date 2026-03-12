//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'send_mail.g.dart';

/// Details for an Email
///
/// Properties:
/// * [to] - The Contact whom is the primary recipient of this email.
/// * [from] - The contact whom is the this email is from.
/// * [subject] - The subject or title of the email
/// * [body] - The main email contents.
@BuiltValue()
abstract class SendMail implements Built<SendMail, SendMailBuilder> {
  /// The Contact whom is the primary recipient of this email.
  @BuiltValueField(wireName: r'to')
  String get to;

  /// The contact whom is the this email is from.
  @BuiltValueField(wireName: r'from')
  String get from;

  /// The subject or title of the email
  @BuiltValueField(wireName: r'subject')
  String get subject;

  /// The main email contents.
  @BuiltValueField(wireName: r'body')
  String get body;

  SendMail._();

  factory SendMail([void updates(SendMailBuilder b)]) = _$SendMail;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(SendMailBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<SendMail> get serializer => _$SendMailSerializer();
}

class _$SendMailSerializer implements PrimitiveSerializer<SendMail> {
  @override
  final Iterable<Type> types = const [SendMail, _$SendMail];

  @override
  final String wireName = r'SendMail';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    SendMail object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'to';
    yield serializers.serialize(
      object.to,
      specifiedType: const FullType(String),
    );
    yield r'from';
    yield serializers.serialize(
      object.from,
      specifiedType: const FullType(String),
    );
    yield r'subject';
    yield serializers.serialize(
      object.subject,
      specifiedType: const FullType(String),
    );
    yield r'body';
    yield serializers.serialize(
      object.body,
      specifiedType: const FullType(String),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    SendMail object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required SendMailBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'to':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.to = valueDes;
          break;
        case r'from':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.from = valueDes;
          break;
        case r'subject':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.subject = valueDes;
          break;
        case r'body':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.body = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  SendMail deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = SendMailBuilder();
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

