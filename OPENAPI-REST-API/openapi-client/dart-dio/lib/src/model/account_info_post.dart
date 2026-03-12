//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'account_info_post.g.dart';

/// Request to update account information.
///
/// Properties:
/// * [name] - Your name.
/// * [address] - Your address.
/// * [city] - Your city.
/// * [state] - Your state.
/// * [zip] - Your ZIP code.
/// * [country] - Your country.
/// * [phone] - Your phone number.
/// * [company] - Your company name.
/// * [address2] - Additional address information.
/// * [locale] - Your preferred locale.
/// * [emailInvoices] - Your email for invoice notifications.
/// * [emailAbuse] - Your email for abuse notifications.
/// * [disableReset] - Set to `true` to disable account resets, or `false` to enable them.
/// * [disableReinstall] - Set to `true` to disable server reinstalls, or `false` to enable them.
/// * [disableServerNotifications] - Set to `true` to disable server notifications, or `false` to enable them.
/// * [disableEmailNotifications] - Set to `true` to disable email notifications, or `false` to enable them.
/// * [gstin] - Your GST identification number (if applicable).
@BuiltValue()
abstract class AccountInfoPost implements Built<AccountInfoPost, AccountInfoPostBuilder> {
  /// Your name.
  @BuiltValueField(wireName: r'name')
  String get name;

  /// Your address.
  @BuiltValueField(wireName: r'address')
  String get address;

  /// Your city.
  @BuiltValueField(wireName: r'city')
  String get city;

  /// Your state.
  @BuiltValueField(wireName: r'state')
  String get state;

  /// Your ZIP code.
  @BuiltValueField(wireName: r'zip')
  String get zip;

  /// Your country.
  @BuiltValueField(wireName: r'country')
  String get country;

  /// Your phone number.
  @BuiltValueField(wireName: r'phone')
  String get phone;

  /// Your company name.
  @BuiltValueField(wireName: r'company')
  String? get company;

  /// Additional address information.
  @BuiltValueField(wireName: r'address2')
  String? get address2;

  /// Your preferred locale.
  @BuiltValueField(wireName: r'locale')
  String? get locale;

  /// Your email for invoice notifications.
  @BuiltValueField(wireName: r'email_invoices')
  String? get emailInvoices;

  /// Your email for abuse notifications.
  @BuiltValueField(wireName: r'email_abuse')
  String? get emailAbuse;

  /// Set to `true` to disable account resets, or `false` to enable them.
  @BuiltValueField(wireName: r'disable_reset')
  bool? get disableReset;

  /// Set to `true` to disable server reinstalls, or `false` to enable them.
  @BuiltValueField(wireName: r'disable_reinstall')
  bool? get disableReinstall;

  /// Set to `true` to disable server notifications, or `false` to enable them.
  @BuiltValueField(wireName: r'disable_server_notifications')
  bool? get disableServerNotifications;

  /// Set to `true` to disable email notifications, or `false` to enable them.
  @BuiltValueField(wireName: r'disable_email_notifications')
  bool? get disableEmailNotifications;

  /// Your GST identification number (if applicable).
  @BuiltValueField(wireName: r'gstin')
  String? get gstin;

  AccountInfoPost._();

  factory AccountInfoPost([void updates(AccountInfoPostBuilder b)]) = _$AccountInfoPost;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(AccountInfoPostBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<AccountInfoPost> get serializer => _$AccountInfoPostSerializer();
}

class _$AccountInfoPostSerializer implements PrimitiveSerializer<AccountInfoPost> {
  @override
  final Iterable<Type> types = const [AccountInfoPost, _$AccountInfoPost];

  @override
  final String wireName = r'AccountInfoPost';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    AccountInfoPost object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'name';
    yield serializers.serialize(
      object.name,
      specifiedType: const FullType(String),
    );
    yield r'address';
    yield serializers.serialize(
      object.address,
      specifiedType: const FullType(String),
    );
    yield r'city';
    yield serializers.serialize(
      object.city,
      specifiedType: const FullType(String),
    );
    yield r'state';
    yield serializers.serialize(
      object.state,
      specifiedType: const FullType(String),
    );
    yield r'zip';
    yield serializers.serialize(
      object.zip,
      specifiedType: const FullType(String),
    );
    yield r'country';
    yield serializers.serialize(
      object.country,
      specifiedType: const FullType(String),
    );
    yield r'phone';
    yield serializers.serialize(
      object.phone,
      specifiedType: const FullType(String),
    );
    if (object.company != null) {
      yield r'company';
      yield serializers.serialize(
        object.company,
        specifiedType: const FullType(String),
      );
    }
    if (object.address2 != null) {
      yield r'address2';
      yield serializers.serialize(
        object.address2,
        specifiedType: const FullType(String),
      );
    }
    if (object.locale != null) {
      yield r'locale';
      yield serializers.serialize(
        object.locale,
        specifiedType: const FullType(String),
      );
    }
    if (object.emailInvoices != null) {
      yield r'email_invoices';
      yield serializers.serialize(
        object.emailInvoices,
        specifiedType: const FullType(String),
      );
    }
    if (object.emailAbuse != null) {
      yield r'email_abuse';
      yield serializers.serialize(
        object.emailAbuse,
        specifiedType: const FullType(String),
      );
    }
    if (object.disableReset != null) {
      yield r'disable_reset';
      yield serializers.serialize(
        object.disableReset,
        specifiedType: const FullType(bool),
      );
    }
    if (object.disableReinstall != null) {
      yield r'disable_reinstall';
      yield serializers.serialize(
        object.disableReinstall,
        specifiedType: const FullType(bool),
      );
    }
    if (object.disableServerNotifications != null) {
      yield r'disable_server_notifications';
      yield serializers.serialize(
        object.disableServerNotifications,
        specifiedType: const FullType(bool),
      );
    }
    if (object.disableEmailNotifications != null) {
      yield r'disable_email_notifications';
      yield serializers.serialize(
        object.disableEmailNotifications,
        specifiedType: const FullType(bool),
      );
    }
    if (object.gstin != null) {
      yield r'gstin';
      yield serializers.serialize(
        object.gstin,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    AccountInfoPost object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required AccountInfoPostBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.name = valueDes;
          break;
        case r'address':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.address = valueDes;
          break;
        case r'city':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.city = valueDes;
          break;
        case r'state':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.state = valueDes;
          break;
        case r'zip':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.zip = valueDes;
          break;
        case r'country':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.country = valueDes;
          break;
        case r'phone':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.phone = valueDes;
          break;
        case r'company':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.company = valueDes;
          break;
        case r'address2':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.address2 = valueDes;
          break;
        case r'locale':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.locale = valueDes;
          break;
        case r'email_invoices':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.emailInvoices = valueDes;
          break;
        case r'email_abuse':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.emailAbuse = valueDes;
          break;
        case r'disable_reset':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
          result.disableReset = valueDes;
          break;
        case r'disable_reinstall':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
          result.disableReinstall = valueDes;
          break;
        case r'disable_server_notifications':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
          result.disableServerNotifications = valueDes;
          break;
        case r'disable_email_notifications':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
          result.disableEmailNotifications = valueDes;
          break;
        case r'gstin':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.gstin = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  AccountInfoPost deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = AccountInfoPostBuilder();
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

