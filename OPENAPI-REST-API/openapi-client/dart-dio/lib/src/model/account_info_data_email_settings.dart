//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'account_info_data_email_settings.g.dart';

/// AccountInfoDataEmailSettings
///
/// Properties:
/// * [adminSlashCcBadResponse] 
/// * [adminSlashMassCommunicationsPeriodTpl] 
@BuiltValue()
abstract class AccountInfoDataEmailSettings implements Built<AccountInfoDataEmailSettings, AccountInfoDataEmailSettingsBuilder> {
  @BuiltValueField(wireName: r'admin/cc_bad_response')
  String? get adminSlashCcBadResponse;

  @BuiltValueField(wireName: r'admin/mass_communications.tpl')
  String? get adminSlashMassCommunicationsPeriodTpl;

  AccountInfoDataEmailSettings._();

  factory AccountInfoDataEmailSettings([void updates(AccountInfoDataEmailSettingsBuilder b)]) = _$AccountInfoDataEmailSettings;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(AccountInfoDataEmailSettingsBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<AccountInfoDataEmailSettings> get serializer => _$AccountInfoDataEmailSettingsSerializer();
}

class _$AccountInfoDataEmailSettingsSerializer implements PrimitiveSerializer<AccountInfoDataEmailSettings> {
  @override
  final Iterable<Type> types = const [AccountInfoDataEmailSettings, _$AccountInfoDataEmailSettings];

  @override
  final String wireName = r'AccountInfoDataEmailSettings';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    AccountInfoDataEmailSettings object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.adminSlashCcBadResponse != null) {
      yield r'admin/cc_bad_response';
      yield serializers.serialize(
        object.adminSlashCcBadResponse,
        specifiedType: const FullType(String),
      );
    }
    if (object.adminSlashMassCommunicationsPeriodTpl != null) {
      yield r'admin/mass_communications.tpl';
      yield serializers.serialize(
        object.adminSlashMassCommunicationsPeriodTpl,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    AccountInfoDataEmailSettings object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required AccountInfoDataEmailSettingsBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'admin/cc_bad_response':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.adminSlashCcBadResponse = valueDes;
          break;
        case r'admin/mass_communications.tpl':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.adminSlashMassCommunicationsPeriodTpl = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  AccountInfoDataEmailSettings deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = AccountInfoDataEmailSettingsBuilder();
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

