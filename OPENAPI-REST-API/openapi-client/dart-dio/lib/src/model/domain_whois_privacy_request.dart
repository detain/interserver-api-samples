//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'domain_whois_privacy_request.g.dart';

/// Request payload for enabling or disabling Whois privacy.
///
/// Properties:
/// * [func] - Action to perform (enable or disableCancel).
/// * [csrfToken] - CSRF token if the API requires it for the account.
/// * [domainFirstname] 
/// * [domainLastname] 
/// * [domainEmail] 
/// * [domainAddress] 
/// * [domainAddress2] 
/// * [domainAddress3] 
/// * [domainCity] 
/// * [domainState] 
/// * [domainZip] 
/// * [domainCountry] 
/// * [domainPhone] 
/// * [domainFax] 
/// * [domainCompany] 
/// * [domainExtra] 
@BuiltValue()
abstract class DomainWhoisPrivacyRequest implements Built<DomainWhoisPrivacyRequest, DomainWhoisPrivacyRequestBuilder> {
  /// Action to perform (enable or disableCancel).
  @BuiltValueField(wireName: r'func')
  String? get func;

  /// CSRF token if the API requires it for the account.
  @BuiltValueField(wireName: r'csrf_token')
  String? get csrfToken;

  @BuiltValueField(wireName: r'domain_firstname')
  String? get domainFirstname;

  @BuiltValueField(wireName: r'domain_lastname')
  String? get domainLastname;

  @BuiltValueField(wireName: r'domain_email')
  String? get domainEmail;

  @BuiltValueField(wireName: r'domain_address')
  String? get domainAddress;

  @BuiltValueField(wireName: r'domain_address2')
  String? get domainAddress2;

  @BuiltValueField(wireName: r'domain_address3')
  String? get domainAddress3;

  @BuiltValueField(wireName: r'domain_city')
  String? get domainCity;

  @BuiltValueField(wireName: r'domain_state')
  String? get domainState;

  @BuiltValueField(wireName: r'domain_zip')
  String? get domainZip;

  @BuiltValueField(wireName: r'domain_country')
  String? get domainCountry;

  @BuiltValueField(wireName: r'domain_phone')
  String? get domainPhone;

  @BuiltValueField(wireName: r'domain_fax')
  String? get domainFax;

  @BuiltValueField(wireName: r'domain_company')
  String? get domainCompany;

  @BuiltValueField(wireName: r'domain_extra')
  String? get domainExtra;

  DomainWhoisPrivacyRequest._();

  factory DomainWhoisPrivacyRequest([void updates(DomainWhoisPrivacyRequestBuilder b)]) = _$DomainWhoisPrivacyRequest;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(DomainWhoisPrivacyRequestBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<DomainWhoisPrivacyRequest> get serializer => _$DomainWhoisPrivacyRequestSerializer();
}

class _$DomainWhoisPrivacyRequestSerializer implements PrimitiveSerializer<DomainWhoisPrivacyRequest> {
  @override
  final Iterable<Type> types = const [DomainWhoisPrivacyRequest, _$DomainWhoisPrivacyRequest];

  @override
  final String wireName = r'DomainWhoisPrivacyRequest';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    DomainWhoisPrivacyRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.func != null) {
      yield r'func';
      yield serializers.serialize(
        object.func,
        specifiedType: const FullType(String),
      );
    }
    if (object.csrfToken != null) {
      yield r'csrf_token';
      yield serializers.serialize(
        object.csrfToken,
        specifiedType: const FullType(String),
      );
    }
    if (object.domainFirstname != null) {
      yield r'domain_firstname';
      yield serializers.serialize(
        object.domainFirstname,
        specifiedType: const FullType(String),
      );
    }
    if (object.domainLastname != null) {
      yield r'domain_lastname';
      yield serializers.serialize(
        object.domainLastname,
        specifiedType: const FullType(String),
      );
    }
    if (object.domainEmail != null) {
      yield r'domain_email';
      yield serializers.serialize(
        object.domainEmail,
        specifiedType: const FullType(String),
      );
    }
    if (object.domainAddress != null) {
      yield r'domain_address';
      yield serializers.serialize(
        object.domainAddress,
        specifiedType: const FullType(String),
      );
    }
    if (object.domainAddress2 != null) {
      yield r'domain_address2';
      yield serializers.serialize(
        object.domainAddress2,
        specifiedType: const FullType(String),
      );
    }
    if (object.domainAddress3 != null) {
      yield r'domain_address3';
      yield serializers.serialize(
        object.domainAddress3,
        specifiedType: const FullType(String),
      );
    }
    if (object.domainCity != null) {
      yield r'domain_city';
      yield serializers.serialize(
        object.domainCity,
        specifiedType: const FullType(String),
      );
    }
    if (object.domainState != null) {
      yield r'domain_state';
      yield serializers.serialize(
        object.domainState,
        specifiedType: const FullType(String),
      );
    }
    if (object.domainZip != null) {
      yield r'domain_zip';
      yield serializers.serialize(
        object.domainZip,
        specifiedType: const FullType(String),
      );
    }
    if (object.domainCountry != null) {
      yield r'domain_country';
      yield serializers.serialize(
        object.domainCountry,
        specifiedType: const FullType(String),
      );
    }
    if (object.domainPhone != null) {
      yield r'domain_phone';
      yield serializers.serialize(
        object.domainPhone,
        specifiedType: const FullType(String),
      );
    }
    if (object.domainFax != null) {
      yield r'domain_fax';
      yield serializers.serialize(
        object.domainFax,
        specifiedType: const FullType(String),
      );
    }
    if (object.domainCompany != null) {
      yield r'domain_company';
      yield serializers.serialize(
        object.domainCompany,
        specifiedType: const FullType(String),
      );
    }
    if (object.domainExtra != null) {
      yield r'domain_extra';
      yield serializers.serialize(
        object.domainExtra,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    DomainWhoisPrivacyRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required DomainWhoisPrivacyRequestBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'func':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.func = valueDes;
          break;
        case r'csrf_token':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.csrfToken = valueDes;
          break;
        case r'domain_firstname':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.domainFirstname = valueDes;
          break;
        case r'domain_lastname':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.domainLastname = valueDes;
          break;
        case r'domain_email':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.domainEmail = valueDes;
          break;
        case r'domain_address':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.domainAddress = valueDes;
          break;
        case r'domain_address2':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.domainAddress2 = valueDes;
          break;
        case r'domain_address3':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.domainAddress3 = valueDes;
          break;
        case r'domain_city':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.domainCity = valueDes;
          break;
        case r'domain_state':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.domainState = valueDes;
          break;
        case r'domain_zip':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.domainZip = valueDes;
          break;
        case r'domain_country':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.domainCountry = valueDes;
          break;
        case r'domain_phone':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.domainPhone = valueDes;
          break;
        case r'domain_fax':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.domainFax = valueDes;
          break;
        case r'domain_company':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.domainCompany = valueDes;
          break;
        case r'domain_extra':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.domainExtra = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  DomainWhoisPrivacyRequest deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = DomainWhoisPrivacyRequestBuilder();
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

