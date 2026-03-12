//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/deny_rule_new.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'deny_rule_record.g.dart';

/// The data for a email deny rule record.
///
/// Properties:
/// * [type] - The type of deny rule.
/// * [data] - The content of the rule.  If a domain type rule then an example would be google.com. For a begins with type an example would be msgid-.  For the email typer an example would be user@server.com.
/// * [id] - The deny rule Id number.
/// * [created] - the date the rule was created.
/// * [user] - Mail account username that will be tied to this rule.  If not specified the first active mail order will be used.
@BuiltValue()
abstract class DenyRuleRecord implements DenyRuleNew, Built<DenyRuleRecord, DenyRuleRecordBuilder> {
  /// the date the rule was created.
  @BuiltValueField(wireName: r'created')
  String get created;

  /// The deny rule Id number.
  @BuiltValueField(wireName: r'id')
  int get id;

  DenyRuleRecord._();

  factory DenyRuleRecord([void updates(DenyRuleRecordBuilder b)]) = _$DenyRuleRecord;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(DenyRuleRecordBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<DenyRuleRecord> get serializer => _$DenyRuleRecordSerializer();
}

class _$DenyRuleRecordSerializer implements PrimitiveSerializer<DenyRuleRecord> {
  @override
  final Iterable<Type> types = const [DenyRuleRecord, _$DenyRuleRecord];

  @override
  final String wireName = r'DenyRuleRecord';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    DenyRuleRecord object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'id';
    yield serializers.serialize(
      object.id,
      specifiedType: const FullType(int),
    );
    yield r'data';
    yield serializers.serialize(
      object.data,
      specifiedType: const FullType(String),
    );
    yield r'type';
    yield serializers.serialize(
      object.type,
      specifiedType: const FullType(DenyRuleNewTypeEnum),
    );
    if (object.user != null) {
      yield r'user';
      yield serializers.serialize(
        object.user,
        specifiedType: const FullType(String),
      );
    }
    yield r'created';
    yield serializers.serialize(
      object.created,
      specifiedType: const FullType(String),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    DenyRuleRecord object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required DenyRuleRecordBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.id = valueDes;
          break;
        case r'data':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.data = valueDes;
          break;
        case r'type':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(DenyRuleNewTypeEnum),
          ) as DenyRuleNewTypeEnum;
          result.type = valueDes;
          break;
        case r'user':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.user = valueDes;
          break;
        case r'created':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.created = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  DenyRuleRecord deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = DenyRuleRecordBuilder();
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

class DenyRuleRecordTypeEnum extends EnumClass {

  /// The type of deny rule.
  @BuiltValueEnumConst(wireName: r'domain')
  static const DenyRuleRecordTypeEnum domain = _$denyRuleRecordTypeEnum_domain;
  /// The type of deny rule.
  @BuiltValueEnumConst(wireName: r'email')
  static const DenyRuleRecordTypeEnum email = _$denyRuleRecordTypeEnum_email;
  /// The type of deny rule.
  @BuiltValueEnumConst(wireName: r'startswith')
  static const DenyRuleRecordTypeEnum startswith = _$denyRuleRecordTypeEnum_startswith;
  /// The type of deny rule.
  @BuiltValueEnumConst(wireName: r'destination')
  static const DenyRuleRecordTypeEnum destination = _$denyRuleRecordTypeEnum_destination;

  static Serializer<DenyRuleRecordTypeEnum> get serializer => _$denyRuleRecordTypeEnumSerializer;

  const DenyRuleRecordTypeEnum._(String name): super(name);

  static BuiltSet<DenyRuleRecordTypeEnum> get values => _$denyRuleRecordTypeEnumValues;
  static DenyRuleRecordTypeEnum valueOf(String name) => _$denyRuleRecordTypeEnumValueOf(name);
}

