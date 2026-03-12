//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'mail_row.g.dart';

/// A result row from the `Mail` `GET` request.
///
/// Properties:
/// * [mailId] - The id of the mail.
/// * [repeatInvoicesCost] - The repeat invoices cost of the mail.
/// * [mailUsername] - The username of the mail.
/// * [mailStatus] - The status of the mail.
/// * [servicesName] - The services name of the mail.
@BuiltValue()
abstract class MailRow implements Built<MailRow, MailRowBuilder> {
  /// The id of the mail.
  @BuiltValueField(wireName: r'mail_id')
  String? get mailId;

  /// The repeat invoices cost of the mail.
  @BuiltValueField(wireName: r'repeat_invoices_cost')
  String? get repeatInvoicesCost;

  /// The username of the mail.
  @BuiltValueField(wireName: r'mail_username')
  String? get mailUsername;

  /// The status of the mail.
  @BuiltValueField(wireName: r'mail_status')
  String? get mailStatus;

  /// The services name of the mail.
  @BuiltValueField(wireName: r'services_name')
  String? get servicesName;

  MailRow._();

  factory MailRow([void updates(MailRowBuilder b)]) = _$MailRow;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(MailRowBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<MailRow> get serializer => _$MailRowSerializer();
}

class _$MailRowSerializer implements PrimitiveSerializer<MailRow> {
  @override
  final Iterable<Type> types = const [MailRow, _$MailRow];

  @override
  final String wireName = r'MailRow';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    MailRow object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.mailId != null) {
      yield r'mail_id';
      yield serializers.serialize(
        object.mailId,
        specifiedType: const FullType(String),
      );
    }
    if (object.repeatInvoicesCost != null) {
      yield r'repeat_invoices_cost';
      yield serializers.serialize(
        object.repeatInvoicesCost,
        specifiedType: const FullType(String),
      );
    }
    if (object.mailUsername != null) {
      yield r'mail_username';
      yield serializers.serialize(
        object.mailUsername,
        specifiedType: const FullType(String),
      );
    }
    if (object.mailStatus != null) {
      yield r'mail_status';
      yield serializers.serialize(
        object.mailStatus,
        specifiedType: const FullType(String),
      );
    }
    if (object.servicesName != null) {
      yield r'services_name';
      yield serializers.serialize(
        object.servicesName,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    MailRow object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required MailRowBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'mail_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.mailId = valueDes;
          break;
        case r'repeat_invoices_cost':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.repeatInvoicesCost = valueDes;
          break;
        case r'mail_username':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.mailUsername = valueDes;
          break;
        case r'mail_status':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.mailStatus = valueDes;
          break;
        case r'services_name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.servicesName = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  MailRow deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = MailRowBuilder();
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

