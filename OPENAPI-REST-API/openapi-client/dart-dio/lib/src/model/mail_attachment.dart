//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'mail_attachment.g.dart';

/// (optional) File attachments to include in the email.  The file contents must be base64
///
/// Properties:
/// * [filename] - The filename of the attached file.
/// * [data] - The file contents base64 encoded
@BuiltValue()
abstract class MailAttachment implements Built<MailAttachment, MailAttachmentBuilder> {
  /// The filename of the attached file.
  @BuiltValueField(wireName: r'filename')
  String get filename;

  /// The file contents base64 encoded
  @BuiltValueField(wireName: r'data')
  String get data;

  MailAttachment._();

  factory MailAttachment([void updates(MailAttachmentBuilder b)]) = _$MailAttachment;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(MailAttachmentBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<MailAttachment> get serializer => _$MailAttachmentSerializer();
}

class _$MailAttachmentSerializer implements PrimitiveSerializer<MailAttachment> {
  @override
  final Iterable<Type> types = const [MailAttachment, _$MailAttachment];

  @override
  final String wireName = r'MailAttachment';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    MailAttachment object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'filename';
    yield serializers.serialize(
      object.filename,
      specifiedType: const FullType(String),
    );
    yield r'data';
    yield serializers.serialize(
      object.data,
      specifiedType: const FullType(String),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    MailAttachment object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required MailAttachmentBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'filename':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.filename = valueDes;
          break;
        case r'data':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.data = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  MailAttachment deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = MailAttachmentBuilder();
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

