//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'domain_contact_details.g.dart';

/// Contact details used for domain registrant/admin/technical/billing records.
///
/// Properties:
/// * [status] - Contact status reported by the registrar.
/// * [state] - State or region for the contact address.
/// * [orgName] - Organization name for the contact.
/// * [country] - Two-letter country code for the contact.
/// * [postalCode] - Postal or ZIP code for the contact address.
/// * [email] - Email address for the contact.
/// * [fax] - Fax number for the contact, if available.
/// * [address2] - Secondary street address line.
/// * [address3] - Tertiary street address line.
/// * [address1] - Primary street address line.
/// * [city] - City for the contact address.
/// * [phone] - Phone number for the contact.
/// * [firstName] - First name for the contact.
/// * [lastName] - Last name for the contact.
@BuiltValue()
abstract class DomainContactDetails implements Built<DomainContactDetails, DomainContactDetailsBuilder> {
  /// Contact status reported by the registrar.
  @BuiltValueField(wireName: r'status')
  String? get status;

  /// State or region for the contact address.
  @BuiltValueField(wireName: r'state')
  String? get state;

  /// Organization name for the contact.
  @BuiltValueField(wireName: r'org_name')
  String? get orgName;

  /// Two-letter country code for the contact.
  @BuiltValueField(wireName: r'country')
  String? get country;

  /// Postal or ZIP code for the contact address.
  @BuiltValueField(wireName: r'postal_code')
  String? get postalCode;

  /// Email address for the contact.
  @BuiltValueField(wireName: r'email')
  String? get email;

  /// Fax number for the contact, if available.
  @BuiltValueField(wireName: r'fax')
  String? get fax;

  /// Secondary street address line.
  @BuiltValueField(wireName: r'address2')
  String? get address2;

  /// Tertiary street address line.
  @BuiltValueField(wireName: r'address3')
  String? get address3;

  /// Primary street address line.
  @BuiltValueField(wireName: r'address1')
  String? get address1;

  /// City for the contact address.
  @BuiltValueField(wireName: r'city')
  String? get city;

  /// Phone number for the contact.
  @BuiltValueField(wireName: r'phone')
  String? get phone;

  /// First name for the contact.
  @BuiltValueField(wireName: r'first_name')
  String? get firstName;

  /// Last name for the contact.
  @BuiltValueField(wireName: r'last_name')
  String? get lastName;

  DomainContactDetails._();

  factory DomainContactDetails([void updates(DomainContactDetailsBuilder b)]) = _$DomainContactDetails;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(DomainContactDetailsBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<DomainContactDetails> get serializer => _$DomainContactDetailsSerializer();
}

class _$DomainContactDetailsSerializer implements PrimitiveSerializer<DomainContactDetails> {
  @override
  final Iterable<Type> types = const [DomainContactDetails, _$DomainContactDetails];

  @override
  final String wireName = r'DomainContactDetails';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    DomainContactDetails object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.status != null) {
      yield r'status';
      yield serializers.serialize(
        object.status,
        specifiedType: const FullType(String),
      );
    }
    if (object.state != null) {
      yield r'state';
      yield serializers.serialize(
        object.state,
        specifiedType: const FullType(String),
      );
    }
    if (object.orgName != null) {
      yield r'org_name';
      yield serializers.serialize(
        object.orgName,
        specifiedType: const FullType(String),
      );
    }
    if (object.country != null) {
      yield r'country';
      yield serializers.serialize(
        object.country,
        specifiedType: const FullType(String),
      );
    }
    if (object.postalCode != null) {
      yield r'postal_code';
      yield serializers.serialize(
        object.postalCode,
        specifiedType: const FullType(String),
      );
    }
    if (object.email != null) {
      yield r'email';
      yield serializers.serialize(
        object.email,
        specifiedType: const FullType(String),
      );
    }
    if (object.fax != null) {
      yield r'fax';
      yield serializers.serialize(
        object.fax,
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
    if (object.address3 != null) {
      yield r'address3';
      yield serializers.serialize(
        object.address3,
        specifiedType: const FullType(String),
      );
    }
    if (object.address1 != null) {
      yield r'address1';
      yield serializers.serialize(
        object.address1,
        specifiedType: const FullType(String),
      );
    }
    if (object.city != null) {
      yield r'city';
      yield serializers.serialize(
        object.city,
        specifiedType: const FullType(String),
      );
    }
    if (object.phone != null) {
      yield r'phone';
      yield serializers.serialize(
        object.phone,
        specifiedType: const FullType(String),
      );
    }
    if (object.firstName != null) {
      yield r'first_name';
      yield serializers.serialize(
        object.firstName,
        specifiedType: const FullType(String),
      );
    }
    if (object.lastName != null) {
      yield r'last_name';
      yield serializers.serialize(
        object.lastName,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    DomainContactDetails object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required DomainContactDetailsBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'status':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.status = valueDes;
          break;
        case r'state':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.state = valueDes;
          break;
        case r'org_name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.orgName = valueDes;
          break;
        case r'country':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.country = valueDes;
          break;
        case r'postal_code':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.postalCode = valueDes;
          break;
        case r'email':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.email = valueDes;
          break;
        case r'fax':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.fax = valueDes;
          break;
        case r'address2':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.address2 = valueDes;
          break;
        case r'address3':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.address3 = valueDes;
          break;
        case r'address1':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.address1 = valueDes;
          break;
        case r'city':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.city = valueDes;
          break;
        case r'phone':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.phone = valueDes;
          break;
        case r'first_name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.firstName = valueDes;
          break;
        case r'last_name':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.lastName = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  DomainContactDetails deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = DomainContactDetailsBuilder();
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

