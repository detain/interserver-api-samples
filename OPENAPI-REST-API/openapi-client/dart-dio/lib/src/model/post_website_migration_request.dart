//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'post_website_migration_request.g.dart';

/// PostWebsiteMigrationRequest
///
/// Properties:
/// * [custPortal] - URL of the customer's current hosting portal.
/// * [regEmail] - Registered email address at the current host.
/// * [password] - Password for the current hosting account.
/// * [ctrlPanel] - URL of the current control panel.
/// * [ftpUsername] - FTP username at the current host.
/// * [ftpPassword] - FTP password at the current host.
/// * [siteBusyMig] - Information about site traffic during migration.
/// * [splReqMig] - Special requirements for the migration.
/// * [domainReg] - Whether domain registration assistance is needed.
/// * [dataMig] - Data migration timing preference.
/// * [domainRegPortal] - Domain registrar portal URL.
/// * [domainRegEmail] - Email for the domain registrar account.
/// * [domainRegPassword] - Password for the domain registrar account.
@BuiltValue()
abstract class PostWebsiteMigrationRequest implements Built<PostWebsiteMigrationRequest, PostWebsiteMigrationRequestBuilder> {
  /// URL of the customer's current hosting portal.
  @BuiltValueField(wireName: r'custPortal')
  String? get custPortal;

  /// Registered email address at the current host.
  @BuiltValueField(wireName: r'regEmail')
  String? get regEmail;

  /// Password for the current hosting account.
  @BuiltValueField(wireName: r'password')
  String? get password;

  /// URL of the current control panel.
  @BuiltValueField(wireName: r'ctrlPanel')
  String? get ctrlPanel;

  /// FTP username at the current host.
  @BuiltValueField(wireName: r'ftpUsername')
  String? get ftpUsername;

  /// FTP password at the current host.
  @BuiltValueField(wireName: r'ftpPassword')
  String? get ftpPassword;

  /// Information about site traffic during migration.
  @BuiltValueField(wireName: r'siteBusyMig')
  String? get siteBusyMig;

  /// Special requirements for the migration.
  @BuiltValueField(wireName: r'splReqMig')
  String? get splReqMig;

  /// Whether domain registration assistance is needed.
  @BuiltValueField(wireName: r'domainReg')
  String? get domainReg;

  /// Data migration timing preference.
  @BuiltValueField(wireName: r'dataMig')
  String? get dataMig;

  /// Domain registrar portal URL.
  @BuiltValueField(wireName: r'domainRegPortal')
  String? get domainRegPortal;

  /// Email for the domain registrar account.
  @BuiltValueField(wireName: r'domainRegEmail')
  String? get domainRegEmail;

  /// Password for the domain registrar account.
  @BuiltValueField(wireName: r'domainRegPassword')
  String? get domainRegPassword;

  PostWebsiteMigrationRequest._();

  factory PostWebsiteMigrationRequest([void updates(PostWebsiteMigrationRequestBuilder b)]) = _$PostWebsiteMigrationRequest;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(PostWebsiteMigrationRequestBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<PostWebsiteMigrationRequest> get serializer => _$PostWebsiteMigrationRequestSerializer();
}

class _$PostWebsiteMigrationRequestSerializer implements PrimitiveSerializer<PostWebsiteMigrationRequest> {
  @override
  final Iterable<Type> types = const [PostWebsiteMigrationRequest, _$PostWebsiteMigrationRequest];

  @override
  final String wireName = r'PostWebsiteMigrationRequest';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    PostWebsiteMigrationRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.custPortal != null) {
      yield r'custPortal';
      yield serializers.serialize(
        object.custPortal,
        specifiedType: const FullType(String),
      );
    }
    if (object.regEmail != null) {
      yield r'regEmail';
      yield serializers.serialize(
        object.regEmail,
        specifiedType: const FullType(String),
      );
    }
    if (object.password != null) {
      yield r'password';
      yield serializers.serialize(
        object.password,
        specifiedType: const FullType(String),
      );
    }
    if (object.ctrlPanel != null) {
      yield r'ctrlPanel';
      yield serializers.serialize(
        object.ctrlPanel,
        specifiedType: const FullType(String),
      );
    }
    if (object.ftpUsername != null) {
      yield r'ftpUsername';
      yield serializers.serialize(
        object.ftpUsername,
        specifiedType: const FullType(String),
      );
    }
    if (object.ftpPassword != null) {
      yield r'ftpPassword';
      yield serializers.serialize(
        object.ftpPassword,
        specifiedType: const FullType(String),
      );
    }
    if (object.siteBusyMig != null) {
      yield r'siteBusyMig';
      yield serializers.serialize(
        object.siteBusyMig,
        specifiedType: const FullType(String),
      );
    }
    if (object.splReqMig != null) {
      yield r'splReqMig';
      yield serializers.serialize(
        object.splReqMig,
        specifiedType: const FullType(String),
      );
    }
    if (object.domainReg != null) {
      yield r'domainReg';
      yield serializers.serialize(
        object.domainReg,
        specifiedType: const FullType(String),
      );
    }
    if (object.dataMig != null) {
      yield r'dataMig';
      yield serializers.serialize(
        object.dataMig,
        specifiedType: const FullType(String),
      );
    }
    if (object.domainRegPortal != null) {
      yield r'domainRegPortal';
      yield serializers.serialize(
        object.domainRegPortal,
        specifiedType: const FullType(String),
      );
    }
    if (object.domainRegEmail != null) {
      yield r'domainRegEmail';
      yield serializers.serialize(
        object.domainRegEmail,
        specifiedType: const FullType(String),
      );
    }
    if (object.domainRegPassword != null) {
      yield r'domainRegPassword';
      yield serializers.serialize(
        object.domainRegPassword,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    PostWebsiteMigrationRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required PostWebsiteMigrationRequestBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'custPortal':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.custPortal = valueDes;
          break;
        case r'regEmail':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.regEmail = valueDes;
          break;
        case r'password':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.password = valueDes;
          break;
        case r'ctrlPanel':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ctrlPanel = valueDes;
          break;
        case r'ftpUsername':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ftpUsername = valueDes;
          break;
        case r'ftpPassword':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ftpPassword = valueDes;
          break;
        case r'siteBusyMig':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.siteBusyMig = valueDes;
          break;
        case r'splReqMig':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.splReqMig = valueDes;
          break;
        case r'domainReg':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.domainReg = valueDes;
          break;
        case r'dataMig':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.dataMig = valueDes;
          break;
        case r'domainRegPortal':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.domainRegPortal = valueDes;
          break;
        case r'domainRegEmail':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.domainRegEmail = valueDes;
          break;
        case r'domainRegPassword':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.domainRegPassword = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  PostWebsiteMigrationRequest deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = PostWebsiteMigrationRequestBuilder();
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

