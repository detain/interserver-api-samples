//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/email_address_name.dart';
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/mail_attachment.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'send_mail_adv.g.dart';

/// Details for an Email
///
/// Properties:
/// * [subject] - The subject or title of the email
/// * [body] - The main email contents.
/// * [from] 
/// * [to] - A list of destionation email addresses to send this to
/// * [replyto] - (optional) A list of email addresses that specify where replies to the email should be sent instead of the _from_ address.
/// * [cc] - (optional) A list of email addresses to carbon copy this message to.  They are listed on the email and anyone getting the email can see this full list of Contacts who received the email as well.
/// * [bcc] - (optional) list of email addresses that should receive copies of the email.  They are hidden on the email and anyone gettitng the email would not see the other people getting the email in this list.
/// * [attachments] - (optional) File attachments to include in the email.  The file contents must be base64 encoded!
/// * [id] - (optional)  ID of the Mail order within our system to use as the Mail Account.
@BuiltValue()
abstract class SendMailAdv implements Built<SendMailAdv, SendMailAdvBuilder> {
  /// The subject or title of the email
  @BuiltValueField(wireName: r'subject')
  String get subject;

  /// The main email contents.
  @BuiltValueField(wireName: r'body')
  String get body;

  @BuiltValueField(wireName: r'from')
  EmailAddressName get from;

  /// A list of destionation email addresses to send this to
  @BuiltValueField(wireName: r'to')
  BuiltList<EmailAddressName> get to;

  /// (optional) A list of email addresses that specify where replies to the email should be sent instead of the _from_ address.
  @BuiltValueField(wireName: r'replyto')
  BuiltList<EmailAddressName>? get replyto;

  /// (optional) A list of email addresses to carbon copy this message to.  They are listed on the email and anyone getting the email can see this full list of Contacts who received the email as well.
  @BuiltValueField(wireName: r'cc')
  BuiltList<EmailAddressName>? get cc;

  /// (optional) list of email addresses that should receive copies of the email.  They are hidden on the email and anyone gettitng the email would not see the other people getting the email in this list.
  @BuiltValueField(wireName: r'bcc')
  BuiltList<EmailAddressName>? get bcc;

  /// (optional) File attachments to include in the email.  The file contents must be base64 encoded!
  @BuiltValueField(wireName: r'attachments')
  BuiltList<MailAttachment>? get attachments;

  /// (optional)  ID of the Mail order within our system to use as the Mail Account.
  @BuiltValueField(wireName: r'id')
  int? get id;

  SendMailAdv._();

  factory SendMailAdv([void updates(SendMailAdvBuilder b)]) = _$SendMailAdv;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(SendMailAdvBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<SendMailAdv> get serializer => _$SendMailAdvSerializer();
}

class _$SendMailAdvSerializer implements PrimitiveSerializer<SendMailAdv> {
  @override
  final Iterable<Type> types = const [SendMailAdv, _$SendMailAdv];

  @override
  final String wireName = r'SendMailAdv';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    SendMailAdv object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
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
    yield r'from';
    yield serializers.serialize(
      object.from,
      specifiedType: const FullType(EmailAddressName),
    );
    yield r'to';
    yield serializers.serialize(
      object.to,
      specifiedType: const FullType(BuiltList, [FullType(EmailAddressName)]),
    );
    if (object.replyto != null) {
      yield r'replyto';
      yield serializers.serialize(
        object.replyto,
        specifiedType: const FullType(BuiltList, [FullType(EmailAddressName)]),
      );
    }
    if (object.cc != null) {
      yield r'cc';
      yield serializers.serialize(
        object.cc,
        specifiedType: const FullType(BuiltList, [FullType(EmailAddressName)]),
      );
    }
    if (object.bcc != null) {
      yield r'bcc';
      yield serializers.serialize(
        object.bcc,
        specifiedType: const FullType(BuiltList, [FullType(EmailAddressName)]),
      );
    }
    if (object.attachments != null) {
      yield r'attachments';
      yield serializers.serialize(
        object.attachments,
        specifiedType: const FullType(BuiltList, [FullType(MailAttachment)]),
      );
    }
    if (object.id != null) {
      yield r'id';
      yield serializers.serialize(
        object.id,
        specifiedType: const FullType(int),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    SendMailAdv object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required SendMailAdvBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
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
        case r'from':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(EmailAddressName),
          ) as EmailAddressName;
          result.from.replace(valueDes);
          break;
        case r'to':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(EmailAddressName)]),
          ) as BuiltList<EmailAddressName>;
          result.to.replace(valueDes);
          break;
        case r'replyto':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(EmailAddressName)]),
          ) as BuiltList<EmailAddressName>;
          result.replyto.replace(valueDes);
          break;
        case r'cc':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(EmailAddressName)]),
          ) as BuiltList<EmailAddressName>;
          result.cc.replace(valueDes);
          break;
        case r'bcc':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(EmailAddressName)]),
          ) as BuiltList<EmailAddressName>;
          result.bcc.replace(valueDes);
          break;
        case r'attachments':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(MailAttachment)]),
          ) as BuiltList<MailAttachment>;
          result.attachments.replace(valueDes);
          break;
        case r'id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.id = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  SendMailAdv deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = SendMailAdvBuilder();
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

