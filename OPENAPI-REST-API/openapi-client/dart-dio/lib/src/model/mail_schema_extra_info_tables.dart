//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/mail_extra_info_table.dart';
import 'package:openapi/src/model/mail_tutorials_table.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'mail_schema_extra_info_tables.g.dart';

/// Additional information tables for the mail service.
///
/// Properties:
/// * [mail] 
/// * [tutorials] 
@BuiltValue()
abstract class MailSchemaExtraInfoTables implements Built<MailSchemaExtraInfoTables, MailSchemaExtraInfoTablesBuilder> {
  @BuiltValueField(wireName: r'mail')
  MailExtraInfoTable? get mail;

  @BuiltValueField(wireName: r'tutorials')
  MailTutorialsTable? get tutorials;

  MailSchemaExtraInfoTables._();

  factory MailSchemaExtraInfoTables([void updates(MailSchemaExtraInfoTablesBuilder b)]) = _$MailSchemaExtraInfoTables;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(MailSchemaExtraInfoTablesBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<MailSchemaExtraInfoTables> get serializer => _$MailSchemaExtraInfoTablesSerializer();
}

class _$MailSchemaExtraInfoTablesSerializer implements PrimitiveSerializer<MailSchemaExtraInfoTables> {
  @override
  final Iterable<Type> types = const [MailSchemaExtraInfoTables, _$MailSchemaExtraInfoTables];

  @override
  final String wireName = r'MailSchemaExtraInfoTables';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    MailSchemaExtraInfoTables object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.mail != null) {
      yield r'mail';
      yield serializers.serialize(
        object.mail,
        specifiedType: const FullType(MailExtraInfoTable),
      );
    }
    if (object.tutorials != null) {
      yield r'tutorials';
      yield serializers.serialize(
        object.tutorials,
        specifiedType: const FullType(MailTutorialsTable),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    MailSchemaExtraInfoTables object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required MailSchemaExtraInfoTablesBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'mail':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(MailExtraInfoTable),
          ) as MailExtraInfoTable;
          result.mail.replace(valueDes);
          break;
        case r'tutorials':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(MailTutorialsTable),
          ) as MailTutorialsTable;
          result.tutorials.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  MailSchemaExtraInfoTables deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = MailSchemaExtraInfoTablesBuilder();
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

