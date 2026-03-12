//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'module_settings.g.dart';

/// The settings for a module.
///
/// Properties:
/// * [SERVICE_ID_OFFSET] 
/// * [USE_REPEAT_INVOICE] 
/// * [USE_PACKAGES] 
/// * [BILLING_DAYS_OFFSET] 
/// * [IMGNAME] 
/// * [REPEAT_BILLING_METHOD] 
/// * [DELETE_PENDING_DAYS] 
/// * [SUSPEND_DAYS] 
/// * [SUSPEND_WARNING_DAYS] 
/// * [TITLE] 
/// * [MENUNAME] 
/// * [EMAIL_FROM] 
/// * [TBLNAME] 
/// * [TABLE] 
/// * [TITLE_FIELD] 
/// * [PREFIX] 
/// * [tITLEFIELD2] 
/// * [tITLEFIELD3] 
@BuiltValue()
abstract class ModuleSettings implements Built<ModuleSettings, ModuleSettingsBuilder> {
  @BuiltValueField(wireName: r'SERVICE_ID_OFFSET')
  int get SERVICE_ID_OFFSET;

  @BuiltValueField(wireName: r'USE_REPEAT_INVOICE')
  bool get USE_REPEAT_INVOICE;

  @BuiltValueField(wireName: r'USE_PACKAGES')
  bool get USE_PACKAGES;

  @BuiltValueField(wireName: r'BILLING_DAYS_OFFSET')
  int get BILLING_DAYS_OFFSET;

  @BuiltValueField(wireName: r'IMGNAME')
  String get IMGNAME;

  @BuiltValueField(wireName: r'REPEAT_BILLING_METHOD')
  int get REPEAT_BILLING_METHOD;

  @BuiltValueField(wireName: r'DELETE_PENDING_DAYS')
  int get DELETE_PENDING_DAYS;

  @BuiltValueField(wireName: r'SUSPEND_DAYS')
  int get SUSPEND_DAYS;

  @BuiltValueField(wireName: r'SUSPEND_WARNING_DAYS')
  int get SUSPEND_WARNING_DAYS;

  @BuiltValueField(wireName: r'TITLE')
  String get TITLE;

  @BuiltValueField(wireName: r'MENUNAME')
  String get MENUNAME;

  @BuiltValueField(wireName: r'EMAIL_FROM')
  String get EMAIL_FROM;

  @BuiltValueField(wireName: r'TBLNAME')
  String get TBLNAME;

  @BuiltValueField(wireName: r'TABLE')
  String get TABLE;

  @BuiltValueField(wireName: r'TITLE_FIELD')
  String get TITLE_FIELD;

  @BuiltValueField(wireName: r'PREFIX')
  String get PREFIX;

  @BuiltValueField(wireName: r'TITLE_FIELD2')
  String? get tITLEFIELD2;

  @BuiltValueField(wireName: r'TITLE_FIELD3')
  String? get tITLEFIELD3;

  ModuleSettings._();

  factory ModuleSettings([void updates(ModuleSettingsBuilder b)]) = _$ModuleSettings;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ModuleSettingsBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ModuleSettings> get serializer => _$ModuleSettingsSerializer();
}

class _$ModuleSettingsSerializer implements PrimitiveSerializer<ModuleSettings> {
  @override
  final Iterable<Type> types = const [ModuleSettings, _$ModuleSettings];

  @override
  final String wireName = r'ModuleSettings';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ModuleSettings object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'SERVICE_ID_OFFSET';
    yield serializers.serialize(
      object.SERVICE_ID_OFFSET,
      specifiedType: const FullType(int),
    );
    yield r'USE_REPEAT_INVOICE';
    yield serializers.serialize(
      object.USE_REPEAT_INVOICE,
      specifiedType: const FullType(bool),
    );
    yield r'USE_PACKAGES';
    yield serializers.serialize(
      object.USE_PACKAGES,
      specifiedType: const FullType(bool),
    );
    yield r'BILLING_DAYS_OFFSET';
    yield serializers.serialize(
      object.BILLING_DAYS_OFFSET,
      specifiedType: const FullType(int),
    );
    yield r'IMGNAME';
    yield serializers.serialize(
      object.IMGNAME,
      specifiedType: const FullType(String),
    );
    yield r'REPEAT_BILLING_METHOD';
    yield serializers.serialize(
      object.REPEAT_BILLING_METHOD,
      specifiedType: const FullType(int),
    );
    yield r'DELETE_PENDING_DAYS';
    yield serializers.serialize(
      object.DELETE_PENDING_DAYS,
      specifiedType: const FullType(int),
    );
    yield r'SUSPEND_DAYS';
    yield serializers.serialize(
      object.SUSPEND_DAYS,
      specifiedType: const FullType(int),
    );
    yield r'SUSPEND_WARNING_DAYS';
    yield serializers.serialize(
      object.SUSPEND_WARNING_DAYS,
      specifiedType: const FullType(int),
    );
    yield r'TITLE';
    yield serializers.serialize(
      object.TITLE,
      specifiedType: const FullType(String),
    );
    yield r'MENUNAME';
    yield serializers.serialize(
      object.MENUNAME,
      specifiedType: const FullType(String),
    );
    yield r'EMAIL_FROM';
    yield serializers.serialize(
      object.EMAIL_FROM,
      specifiedType: const FullType(String),
    );
    yield r'TBLNAME';
    yield serializers.serialize(
      object.TBLNAME,
      specifiedType: const FullType(String),
    );
    yield r'TABLE';
    yield serializers.serialize(
      object.TABLE,
      specifiedType: const FullType(String),
    );
    yield r'TITLE_FIELD';
    yield serializers.serialize(
      object.TITLE_FIELD,
      specifiedType: const FullType(String),
    );
    yield r'PREFIX';
    yield serializers.serialize(
      object.PREFIX,
      specifiedType: const FullType(String),
    );
    if (object.tITLEFIELD2 != null) {
      yield r'TITLE_FIELD2';
      yield serializers.serialize(
        object.tITLEFIELD2,
        specifiedType: const FullType(String),
      );
    }
    if (object.tITLEFIELD3 != null) {
      yield r'TITLE_FIELD3';
      yield serializers.serialize(
        object.tITLEFIELD3,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    ModuleSettings object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ModuleSettingsBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'SERVICE_ID_OFFSET':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.SERVICE_ID_OFFSET = valueDes;
          break;
        case r'USE_REPEAT_INVOICE':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
          result.USE_REPEAT_INVOICE = valueDes;
          break;
        case r'USE_PACKAGES':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
          result.USE_PACKAGES = valueDes;
          break;
        case r'BILLING_DAYS_OFFSET':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.BILLING_DAYS_OFFSET = valueDes;
          break;
        case r'IMGNAME':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.IMGNAME = valueDes;
          break;
        case r'REPEAT_BILLING_METHOD':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.REPEAT_BILLING_METHOD = valueDes;
          break;
        case r'DELETE_PENDING_DAYS':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.DELETE_PENDING_DAYS = valueDes;
          break;
        case r'SUSPEND_DAYS':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.SUSPEND_DAYS = valueDes;
          break;
        case r'SUSPEND_WARNING_DAYS':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.SUSPEND_WARNING_DAYS = valueDes;
          break;
        case r'TITLE':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.TITLE = valueDes;
          break;
        case r'MENUNAME':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.MENUNAME = valueDes;
          break;
        case r'EMAIL_FROM':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.EMAIL_FROM = valueDes;
          break;
        case r'TBLNAME':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.TBLNAME = valueDes;
          break;
        case r'TABLE':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.TABLE = valueDes;
          break;
        case r'TITLE_FIELD':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.TITLE_FIELD = valueDes;
          break;
        case r'PREFIX':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.PREFIX = valueDes;
          break;
        case r'TITLE_FIELD2':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.tITLEFIELD2 = valueDes;
          break;
        case r'TITLE_FIELD3':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.tITLEFIELD3 = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  ModuleSettings deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ModuleSettingsBuilder();
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

